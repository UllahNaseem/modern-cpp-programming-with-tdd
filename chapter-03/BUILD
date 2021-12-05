load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
  name = "retweet_test",
  size = "small",
  srcs = ["retweet_collection_test.cpp", "RetweetCollection.h", "tweet.h", "tweet.cpp", "main.cpp"],
  deps = ["@com_google_googletest//:gtest_main"],
)