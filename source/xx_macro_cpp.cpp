#include <iostream>
#include <map>

#include "../include/xx_macro_cpp.hpp"

namespace {
#define XXCPP_VALUE(name, value) {value,#name},
    const std::map<unsigned int, std::string> xxcpp_value_names {
        XXCPP_VALUES
    };
#undef XXCPP_VALUE
}


const std::string get_xxcpp_value_name(xxcpp_value_t value)
{
    return xxcpp_value_names.at(static_cast<unsigned int>(value));
}


void print_all_xxcpp_names()
{
    std::cout << "XX Macro names, C++:" << std::endl;
    for (auto& [_, name] : xxcpp_value_names) {
        std::cout << name << std::endl;
    }
}
