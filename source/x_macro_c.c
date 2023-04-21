
#include <stdio.h>
#include "../include/x_macro_c.h"

#define X_VALUE(name) #name,
static const char* x_value_names[] = {
    X_VALUES
};
#undef X_VALUE


const char* get_x_value_name(x_value_t value)
{
    return x_value_names[value];
}


void print_all_x_names(void)
{
    printf("X Macro names:\n");
    for (x_value_t value=X_ZERO; value<=X_FIVE; ++value) {
        printf("%s\n", x_value_names[value]);
    }
}
