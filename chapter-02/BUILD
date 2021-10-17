load("@rules_cc//cc:defs.bzl","cc_test")

cc_test(
    name = "Tests",
    size = "small",
    srcs = [
        "main.cpp",
        "SoundexTest.cpp"
		],
	deps = ["@com_google_googletest//:gtest_main"],
)