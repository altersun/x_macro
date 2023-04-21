#pragma once

#define XX_VALUES \
    XX_VALUE(XX_THREE, 3) \
    XX_VALUE(XX_FIFTEEN, 15) \
    XX_VALUE(XX_TWENTYFOUR, 24) \
    XX_VALUE(XX_FIFTYSEVEN, 57) \
    XX_VALUE(XX_NINTEYNINE, 99) \
    XX_VALUE(XX_ONETHIRTYONE, 131) 

#define XX_VALUE(name, number) name=number,
typedef enum {
    XX_VALUES
} xx_value_t;
#undef XX_VALUE

#define XX_VALUE(name, _) name##_INDEX,
typedef enum {
    XX_VALUES
} xx_value_index_t;
#undef XX_VALUE


#ifdef __cplusplus
extern "C" {
#endif

const char* get_xx_value_name(xx_value_index_t index);
void print_all_xx_names(void);

#ifdef __cplusplus
}
#endif


#define GET_XX_VALUE_NAME(value) \
    get_xx_value_name(value##_INDEX)
