#include "main.h"

int test_c_0_width_1(void) {
    return (ft_printf(" %1c ", 0));
}

int test_c_0_width_2(void) {
    return (ft_printf(" %2c ", 0));
}

int test_c_z_width_1(void) {
    return (ft_printf(" %1c ", 'z'));
}

int test_c_z_width_2(void) {
    return (ft_printf(" %2c ", 'z'));
}

void    test_c_width(int testIndex) {

    char*      expectedOutput[] = {
        " ",
        "  ",
        " z ",
        "  z "
    };

    int         expectedReturnValue[] = {
        3,
        4,
        3,
        4
    };

    int         (*test[NB_C_WIDTH_TESTS])() = {
        test_c_0_width_1,
        test_c_0_width_2,
        test_c_z_width_1,
        test_c_z_width_2
    };

    char*       input[] = {
        "\" %1c \", 0",
        "\" %2c \", 0",
        "\" %1c \", 'z'",
        "\" %2c \", 'z'",
    };

    printf(FG_YELLOW"test : %%c with width\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_C_WIDTH_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_c_width");
        }
    }
    printf("\n");
}
