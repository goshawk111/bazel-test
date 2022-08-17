#include <iostream>
#include "func.hpp"
namespace func
{
    /**
     * @brief print input to console
     *
     * @param str input string
     */
    void print_string(const std::string &str)
    {
        std::cout << str << std::endl;
    }
} // namespace func