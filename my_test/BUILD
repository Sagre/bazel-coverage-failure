cc_test(
    name = "test.exe",
    srcs = ["test.cc"],
    copts = ["-Iexternal/gtest/include"],
    linkopts = [
        "-lstdc++",
    ],
    deps = [
        "@gtest//:gtest_main",
        "//main:hello-greet.dll",
	"//cmain:hello-other.dll",
    ],

)