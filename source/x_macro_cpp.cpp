#include <iostream>
#include <vector>
#include <string>
#include "../include/x_macro_cpp.hpp"

namespace { 
#define XCPP_VALUE(name) #name,
    const std::vector<std::string> xcpp_value_names {
        XCPP_VALUES
    };
#undef XCPP_VALUE
}


const std::string get_xcpp_value_name(xcpp_value_t value)
{
    return xcpp_value_names[value];
}

void print_all_xcpp_names()
{
    std::cout << "X Macro names, C++:" << std::endl;
    for (auto& name : xcpp_value_names) {
        std::cout << name << std::endl;
    }
}
