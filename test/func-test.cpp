#include <gtest/gtest.h>

#include <string>
#include "src/func.hpp"

TEST(FuncTest, PrintHelloWorld)
{
    testing::internal::CaptureStdout();
    print_hello_world();
    const auto output{testing::internal::GetCapturedStdout()};

    ASSERT_EQ(output, "Hello World.\n");
}
