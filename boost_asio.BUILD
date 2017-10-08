package(default_visibility = ["//visibility:public"])

licenses(["notice"])

cc_library(
  name = "asio",
  includes = [
      "include/",
  ],
  hdrs = glob([
      "include/boost/**/*.h",
      "include/boost/**/*.hpp",
      "include/boost/**/*.ipp",
  ]),
  srcs = [
  ],
  deps = [
      "@com_github_boost_fusion//:fusion",
      "@com_github_boost_system//:system"
  ]
)
