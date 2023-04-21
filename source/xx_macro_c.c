
#include <stdio.h>
#include "../include/xx_macro_c.h"

#define XX_VALUE(name, _) #name,
static const char* xx_value_names[] = {
    XX_VALUES
};
#undef VALUE


const char* get_xx_value_name(xx_value_index_t index)
{
    return xx_value_names[index];
}


void print_all_xx_names(void)
{
    printf("XX Macro names:\n");
    for (xx_value_index_t index=XX_THREE_INDEX; index<=XX_ONETHIRTYONE_INDEX; ++index) {
        printf("%s\n", xx_value_names[index]);
    }
}
