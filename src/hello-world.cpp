#include "func.hpp"
#include <string>

namespace
{
    const auto kHelloWorld{std::string("Hello World.")};
} // anonymous namespace

int main(int argc, char **argv)
{
    func::print_string(kHelloWorld);
    return 0;
}
