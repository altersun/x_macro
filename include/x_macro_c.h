#pragma once

#define X_VALUES \
    X_VALUE(X_ZERO) \
    X_VALUE(X_ONE) \
    X_VALUE(X_TWO) \
    X_VALUE(X_THREE) \
    X_VALUE(X_FOUR) \
    X_VALUE(X_FIVE) 

#define X_VALUE(name) name,
typedef enum {
    X_VALUES
} x_value_t;
#undef X_VALUE

#ifdef __cplusplus
extern "C" {
#endif

const char* get_x_value_name(x_value_t value);
void print_all_x_names(void);

#ifdef __cplusplus
}
#endif

