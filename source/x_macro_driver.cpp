#include <iostream>

#include "../include/x_macro_c.h"
#include "../include/xx_macro_c.h"
#include "../include/x_macro_cpp.hpp"
#include "../include/xx_macro_cpp.hpp"



int main(void)
{
    
    std::cout << "Demonstrating X Macro, C implementation:" << std::endl;
    std::cout << X_ONE << " " << get_x_value_name(X_ONE) << std::endl;
    std::cout << X_THREE << " " << get_x_value_name(X_THREE) << std::endl;
    std::cout << X_FIVE << " " << get_x_value_name(X_FIVE) << std::endl;
    std::cout << std::endl;
    
    std::cout << "Demonstrating XX Macro, C implementation:" << std::endl;
    std::cout << XX_THREE << " " << GET_XX_VALUE_NAME(XX_THREE) << std::endl;
    std::cout << XX_TWENTYFOUR << " " << GET_XX_VALUE_NAME(XX_TWENTYFOUR) << std::endl;
    std::cout << XX_ONETHIRTYONE << " " << GET_XX_VALUE_NAME(XX_ONETHIRTYONE) << std::endl;
    std::cout << std::endl;

    std::cout << "Demonstrating X Macro, C++ implementation:" << std::endl;
    std::cout << XCPP_ZERO << " " << get_xcpp_value_name(XCPP_ZERO) << std::endl;
    std::cout << XCPP_TWO << " " << get_xcpp_value_name(XCPP_TWO) << std::endl;
    std::cout << XCPP_FOUR << " " << get_xcpp_value_name(XCPP_FOUR) << std::endl;
    std::cout << std::endl;

    std::cout << "Demonstrating XX Macro, C++ implementation:" << std::endl;
    std::cout << XXCPP_FIFTEEN << " " << get_xxcpp_value_name(XXCPP_FIFTEEN) << std::endl;
    std::cout << XXCPP_FIFTYSEVEN << " " << get_xxcpp_value_name(XXCPP_FIFTYSEVEN) << std::endl;
    std::cout << XXCPP_NINTEYNINE << " " << get_xxcpp_value_name(XXCPP_NINTEYNINE) << std::endl;
    std::cout << std::endl;

    print_all_x_names();
    print_all_xx_names();
    print_all_xcpp_names();
    print_all_xxcpp_names();

    return 0;
}
