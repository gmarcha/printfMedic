#include "main.h"

int test_d_0_width_2_zero(void) {
    return (ft_printf(" %02d ", 0));
}

int test_d_1_width_2_zero(void) {
    return (ft_printf(" %02d ", 1));
}

int test_d_42_width_3_zero(void) {
    return (ft_printf(" %03d ", 42));
}

int test_d_2147483647_width_11_zero(void) {
    return (ft_printf(" %011d ", 2147483647));
}

int test_d_neg_1_width_3_zero(void) {
    return (ft_printf(" %03d ", -1));
}

int test_d_neg_42_width_4_zero(void) {
    return (ft_printf(" %04d ", -42));
}

int test_d_neg_2147483648_width_12_zero(void) {
    return (ft_printf(" %012d ", -2147483648));
}

void    test_d_width_zero(int testIndex) {

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

    int         (*test[NB_D_WIDTH_ZERO_TESTS])() = {
        test_d_0_width_2_zero,
        test_d_1_width_2_zero,
        test_d_42_width_3_zero,
        test_d_2147483647_width_11_zero,
        test_d_neg_1_width_3_zero,
        test_d_neg_42_width_4_zero,
        test_d_neg_2147483648_width_12_zero
    };

    char*       input[] = {
        "\" %02d \", 0",
        "\" %02d \", 1",
        "\" %03d \", 42",
        "\" %011d \", 2147483647",
        "\" %03d \", -1",
        "\" %04d \", -42",
        "\" %012d \", -2147483648"
    };

    printf(FG_YELLOW"test : %%d with width and zero\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_D_WIDTH_ZERO_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_d_width_zero");
        }
    }
    printf("\n");
}
