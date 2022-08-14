#include <gtest/gtest.h>

#include <string>
#include "src/func.hpp"

TEST(FuncTest, BasicAssertions)
{
    testing::internal::CaptureStdout();
    print_hello_world();
    const auto output{testing::internal::GetCapturedStdout()};

    ASSERT_EQ(output, "Hello World.\n");
}
