#include "main.h"

int test_c_z_width_2_dash(void) {
    return (ft_printf(" %-2c ", 'z'));
}

int test_c_z_width_10_dash(void) {
    return (ft_printf(" %-10c ", 'z'));
}

void    test_c_width_dash(int testIndex) {

    char*      expectedOutput[] = {
        " z  ",
        " z          "
    };

    int         expectedReturnValue[] = {
        4,
        12
    };

    int         (*test[NB_C_WIDTH_DASH_TESTS])() = {
        test_c_z_width_2_dash,
        test_c_z_width_10_dash
    };

    char*       input[] = {
        "\" %-2c \", 'z'",
        "\" %-10c \", 'z'",
    };

    printf(FG_YELLOW"test : %%c with width and dash\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_C_WIDTH_DASH_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_c_width_dash");
        }
    }
    printf("\n");
}
