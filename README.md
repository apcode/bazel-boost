# Bazel Build of Boost

Starting to put together a Bazel workspace with various libraries included.
I'd like to use some boost libraries without installing everything.

It's still a WIP.

I was trying to only include boost libraries that are not in C++11,
e.g. not using boost foreach or shared_ptr etc. However this is almost
impossible to do. Many boost libraries use many other boost
libraries. So as soon as you use one library you have to pull in many
others. Even those already in C++11. Which is kind of annoying.

For example, if you want to use boost/math, you also need C++11 libs
plus many others like lexical_cast, smart_ptr and type_traits!!

Anyway I'll keep working on this until I can use the libraries I might
need.
