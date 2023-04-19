
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
