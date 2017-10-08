# Bazel Build of Boost

Starting to put together a Bazel workspace with various libraries included.

It's still a WIP. I was trying to inly include boost libraries that
are not in C++11, e.g. not using boost foreach or shared_ptr
etc. However this is almost impossible to do. Many boost libraries use
many other boost libraries. So as soon as you use one library you have
to pull in many others. Even those already in C++11. Which is kind of
annoying.

For example, if you want to use accumulators, you also need: assert,
config, concept_check, fusion, mpl, parameter, range and even ublas!!

Anyway I'll keep working on this until I can use the libraries I might
need.
