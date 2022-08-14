load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "func",
    srcs = ["func.cpp"],
    hdrs = ["func.hpp"],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "hello-world",
    srcs = ["hello-world.cpp"],
    deps = [
        ":func",
    ],
)
