#include "main.h"

int test_x_maj_0_width_2_zero(void) {
    return (ft_printf(" %02X ", 0));
}

int test_x_maj_1_width_2_zero(void) {
    return (ft_printf(" %02X ", 1));
}

int test_x_maj_42_width_3_zero(void) {
    return (ft_printf(" %03X ", 42));
}

int test_x_maj_2147483647_width_9_zero(void) {
    return (ft_printf(" %09X ", 2147483647));
}

void    test_x_maj_width_zero(int testIndex) {

    char*      expectedOutput[] = {
        " 00 ",
        " 01 ",
        " 02A ",
        " 07FFFFFFF "
    };

    int         expectedReturnValue[] = {
        4,
        4,
        5,
        11
    };

    int         (*test[NB_X_MAJ_WIDTH_ZERO_TESTS])() = {
        test_x_maj_0_width_2_zero,
        test_x_maj_1_width_2_zero,
        test_x_maj_42_width_3_zero,
        test_x_maj_2147483647_width_9_zero
    };

    char*       input[] = {
        "\" %02X \", 0",
        "\" %02X \", 1",
        "\" %03X \", 42",
        "\" %09X \", 2147483647"
    };

    printf(FG_YELLOW"test : %%X with width and zero\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_X_MAJ_WIDTH_ZERO_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_x_maj_width_zero");
        }
    }
    printf("\n");
}
