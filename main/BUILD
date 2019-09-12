cc_library(
    name = "hello-greet.dll",
    srcs = ["hello-greet.cc"],
    hdrs = ["hello-greet.h"],
    visibility = ["//my_test:__pkg__"],
)

cc_binary(
    name = "hello-world.exe",
    srcs = ["hello-world.cc"],
    deps = [
        ":hello-greet.dll",
        "//my_lib:hello-time.dll",
	"//cmain:hello-other.dll",
    ],
    linkopts = [
        "-lstdc++",
    ],
)
