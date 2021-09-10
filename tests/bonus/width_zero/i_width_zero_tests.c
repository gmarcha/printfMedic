#include "main.h"

int test_i_0_width_2_zero(void) {
    return (ft_printf(" %02i ", 0));
}

int test_i_1_width_2_zero(void) {
    return (ft_printf(" %02i ", 1));
}

int test_i_42_width_3_zero(void) {
    return (ft_printf(" %03i ", 42));
}

int test_i_2147483647_width_11_zero(void) {
    return (ft_printf(" %011i ", 2147483647));
}

int test_i_neg_1_width_3_zero(void) {
    return (ft_printf(" %03i ", -1));
}

int test_i_neg_42_width_4_zero(void) {
    return (ft_printf(" %04i ", -42));
}

int test_i_neg_2147483648_width_12_zero(void) {
    return (ft_printf(" %012i ", -2147483648));
}

void    test_i_width_zero(int testIndex) {

    char*      expectedOutput[] = {
        " 00 ",
        " 01 ",
        " 042 ",
        " 02147483647 ",
        " -01 ",
        " -042 ",
        " -02147483648 "
    };

    int         expectedReturnValue[] = {
        4,
        4,
        5,
        13,
        5,
        6,
        14
    };

    int         (*test[NB_I_WIDTH_ZERO_TESTS])() = {
        test_i_0_width_2_zero,
        test_i_1_width_2_zero,
        test_i_42_width_3_zero,
        test_i_2147483647_width_11_zero,
        test_i_neg_1_width_3_zero,
        test_i_neg_42_width_4_zero,
        test_i_neg_2147483648_width_12_zero
    };

    char*       input[] = {
        "\" %02i \", 0",
        "\" %02i \", 1",
        "\" %03i \", 42",
        "\" %011i \", 2147483647",
        "\" %03i \", -1",
        "\" %04i \", -42",
        "\" %012i \", -2147483648"
    };

    printf(FG_YELLOW"test : %%i with width and zero\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_I_WIDTH_ZERO_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_i_width_zero");
        }
    }
    printf("\n");
}
