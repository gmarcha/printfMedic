#include "main.h"

int test_i_0_precision_0(void) {
    return (ft_printf(" %.0i ", 0));
}

int test_i_0_precision_1(void) {
    return (ft_printf(" %.1i ", 0));
}

int test_i_0_precision_2(void) {
    return (ft_printf(" %.2i ", 0));
}

int test_i_1_precision_1(void) {
    return (ft_printf(" %.1i ", 1));
}

int test_i_1_precision_2(void) {
    return (ft_printf(" %.2i ", 1));
}

int test_i_42_precision_2(void) {
    return (ft_printf(" %.2i ", 42));
}

int test_i_42_precision_3(void) {
    return (ft_printf(" %.3i ", 42));
}

int test_i_2147483647_precision_10(void) {
    return (ft_printf(" %.10i ", 2147483647));
}

int test_i_2147483647_precision_11(void) {
    return (ft_printf(" %.11i ", 2147483647));
}

int test_i_neg_1_precision_1(void) {
    return (ft_printf(" %.1i ", -1));
}

int test_i_neg_1_precision_2(void) {
    return (ft_printf(" %.2i ", -1));
}

int test_i_neg_1_precision_3(void) {
    return (ft_printf(" %.3i ", -1));
}

int test_i_neg_42_precision_2(void) {
    return (ft_printf(" %.2i ", -42));
}

int test_i_neg_42_precision_3(void) {
    return (ft_printf(" %.3i ", -42));
}

int test_i_neg_42_precision_4(void) {
    return (ft_printf(" %.4i ", -42));
}

int test_i_neg_2147483648_precision_10(void) {
    return (ft_printf(" %.10i ", -2147483648));
}

int test_i_neg_2147483648_precision_11(void) {
    return (ft_printf(" %.11i ", -2147483648));
}

int test_i_neg_2147483648_precision_12(void) {
    return (ft_printf(" %.12i ", -2147483648));
}

void    test_i_precision(int testIndex) {

    char*      expectedOutput[] = {
        "  ",
        " 0 ",
        " 00 ",
        " 1 ",
        " 01 ",
        " 42 ",
        " 042 ",
        " 2147483647 ",
        " 02147483647 ",
        " -1 ",
        " -01 ",
        " -001 ",
        " -42 ",
        " -042 ",
        " -0042 ",
        " -2147483648 ",
        " -02147483648 ",
        " -002147483648 "
    };

    int         expectedReturnValue[] = {
        2,
        3,
        4,
        3,
        4,
        4,
        5,
        12,
        13,
        4,
        5,
        6,
        5,
        6,
        7,
        13,
        14,
        15
    };

    int         (*test[NB_I_PRECISION_TESTS])() = {
        test_i_0_precision_0,
        test_i_0_precision_1,
        test_i_0_precision_2,
        test_i_1_precision_1,
        test_i_1_precision_2,
        test_i_42_precision_2,
        test_i_42_precision_3,
        test_i_2147483647_precision_10,
        test_i_2147483647_precision_11,
        test_i_neg_1_precision_1,
        test_i_neg_1_precision_2,
        test_i_neg_1_precision_3,
        test_i_neg_42_precision_2,
        test_i_neg_42_precision_3,
        test_i_neg_42_precision_4,
        test_i_neg_2147483648_precision_10,
        test_i_neg_2147483648_precision_11,
        test_i_neg_2147483648_precision_12
    };

    char*       input[] = {
        "\" %.0i \", 0",
        "\" %.1i \", 0",
        "\" %.2i \", 0",
        "\" %.1i \", 1",
        "\" %.2i \", 1",
        "\" %.2i \", 42",
        "\" %.3i \", 42",
        "\" %.10i \", 2147483647",
        "\" %.11i \", 2147483647",
        "\" %.1i \", -1",
        "\" %.2i \", -1",
        "\" %.3i \", -1",
        "\" %.2i \", -42",
        "\" %.3i \", -42",
        "\" %.4i \", -42",
        "\" %.10i \", -2147483648",
        "\" %.11i \", -2147483648",
        "\" %.12i \", -2147483648"
    };

    printf(FG_YELLOW"test : %%i with precision\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_I_PRECISION_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_i_precision");
        }
    }
    printf("\n");
}
