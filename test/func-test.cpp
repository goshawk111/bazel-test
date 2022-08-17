#include <gtest/gtest.h>

#include <string>
#include "src/func.hpp"

TEST(FuncTest, PrintString)
{
    const auto input{std::string("Hello World.")};
    const auto expected_output{input + "\n"};

    // Start console capture
    testing::internal::CaptureStdout();

    func::print_string(input);

    const auto output{testing::internal::GetCapturedStdout()};
    ASSERT_EQ(expected_output, output);
}
