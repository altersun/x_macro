#pragma once

#include <string>

#define XCPP_VALUES \
    XCPP_VALUE(XCPP_ZERO) \
    XCPP_VALUE(XCPP_ONE) \
    XCPP_VALUE(XCPP_TWO) \
    XCPP_VALUE(XCPP_THREE) \
    XCPP_VALUE(XCPP_FOUR) \
    XCPP_VALUE(XCPP_FIVE) 

#define XCPP_VALUE(name) name,
enum xcpp_value_t {
    XCPP_VALUES
};
#undef XCPP_VALUE

const std::string get_xcpp_value_name(xcpp_value_t value);
void print_all_xcpp_names();
