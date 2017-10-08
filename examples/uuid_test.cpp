#include <cassert>
#include <iostream>

#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>

class object {
public:
  object() : tag(boost::uuids::random_generator()()), state(0) {}

  explicit object(int state)
      : tag(boost::uuids::random_generator()()), state(state) {}

  object(object const &rhs) : tag(rhs.tag), state(rhs.state) {}

  bool operator==(object const &rhs) const { return tag == rhs.tag; }
  bool operator!=(object const &rhs) const { return tag != rhs.tag; }

  object &operator=(object const &rhs) {
    tag = rhs.tag;
    state = rhs.state;
    return *this;
  }

  int get_state() const { return state; }
  void set_state(int new_state) { state = new_state; }

private:
  boost::uuids::uuid tag;

  int state;
};

int main(int argc, char *argv[]) {
  object o1(1);
  object o2 = o1;
  o2.set_state(2);
  assert(o1 == o2);

  object o3(3);
  assert(o1 != o3);
  assert(o2 != o3);
  std::cout << "Tests Passed" << std::endl;
  return 0;
}
