#include "main.h"

int test_x_0_width_2_zero(void) {
    return (ft_printf(" %02x ", 0));
}

int test_x_1_width_2_zero(void) {
    return (ft_printf(" %02x ", 1));
}

int test_x_42_width_3_zero(void) {
    return (ft_printf(" %03x ", 42));
}

int test_x_2147483647_width_9_zero(void) {
    return (ft_printf(" %09x ", 2147483647));
}

void    test_x_width_zero(int testIndex) {

    char*      expectedOutput[] = {
        " 00 ",
        " 01 ",
        " 02a ",
        " 07fffffff "
    };

    int         expectedReturnValue[] = {
        4,
        4,
        5,
        11
    };

    int         (*test[NB_X_WIDTH_ZERO_TESTS])() = {
        test_x_0_width_2_zero,
        test_x_1_width_2_zero,
        test_x_42_width_3_zero,
        test_x_2147483647_width_9_zero
    };

    char*       input[] = {
        "\" %02x \", 0",
        "\" %02x \", 1",
        "\" %03x \", 42",
        "\" %09x \", 2147483647"
    };

    printf(FG_YELLOW"test : %%x with width and zero\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_X_WIDTH_ZERO_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_x_width_zero");
        }
    }
    printf("\n");
}
