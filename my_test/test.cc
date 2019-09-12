#include "gtest/gtest.h"
#include "main/hello-greet.h"
extern "C" {
	#include "cmain/hello-other.h"
}


TEST(HelloTest, GetGreet) {
	EXPECT_EQ(get_greet("Bazel"), "Hello Bazel");
}

TEST(HelloTest, ReturnFour) {
	EXPECT_EQ(i_return_four(2), 4);
	EXPECT_EQ(i_return_four(1), 4);
}