#pragma once

#include <string>

#define XXCPP_VALUES \
    XXCPP_VALUE(XXCPP_THREE, 3) \
    XXCPP_VALUE(XXCPP_FIFTEEN, 15) \
    XXCPP_VALUE(XXCPP_TWENTYFOUR, 24) \
    XXCPP_VALUE(XXCPP_FIFTYSEVEN, 57) \
    XXCPP_VALUE(XXCPP_NINTEYNINE, 99) \
    XXCPP_VALUE(XXCPP_ONETHIRTYONE, 131) 

#define XXCPP_VALUE(name, value) name=value,
enum xxcpp_value_t {
    XXCPP_VALUES
};
#undef XXCPP_VALUE

const std::string get_xxcpp_value_name(xxcpp_value_t value);
void print_all_xxcpp_names();
