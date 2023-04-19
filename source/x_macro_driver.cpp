#include <iostream>

#include "../include/xx_macro_c.h"




int main(void)
{
    std::cout << THREE << " " << GET_XX_VALUE_NAME(THREE) << std::endl;
    std::cout << TWENTYFOUR << " " << GET_XX_VALUE_NAME(TWENTYFOUR) << std::endl;
    std::cout << ONETHIRTYONE << " " << GET_XX_VALUE_NAME(ONETHIRTYONE) << std::endl;
    return 0;
}
