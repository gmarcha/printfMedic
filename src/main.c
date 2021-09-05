#include "main.h"

#ifdef DEBUG
    int (*ft_printf)(const char *, ...) = printf;
#endif

int main(void) {

    test_d(0);
    test_i(0);
    test_u(0);
    test_x(0);
    test_x_maj(0);
    return (0);
}
