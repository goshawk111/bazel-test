cc_library(
    name = "func-lib",
    srcs = ["func.cpp"],
    hdrs = ["func.hpp"],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "hello-world",
    srcs = ["hello-world.cpp"],
    deps = [
        ":func-lib",
    ],
)
