#include "main.h"

int test_d_0_precision_0(void) {
    return (ft_printf(" %.0d ", 0));
}

int test_d_0_precision_1(void) {
    return (ft_printf(" %.1d ", 0));
}

int test_d_0_precision_2(void) {
    return (ft_printf(" %.2d ", 0));
}

int test_d_1_precision_1(void) {
    return (ft_printf(" %.1d ", 1));
}

int test_d_1_precision_2(void) {
    return (ft_printf(" %.2d ", 1));
}

int test_d_42_precision_2(void) {
    return (ft_printf(" %.2d ", 42));
}

int test_d_42_precision_3(void) {
    return (ft_printf(" %.3d ", 42));
}

int test_d_2147483647_precision_10(void) {
    return (ft_printf(" %.10d ", 2147483647));
}

int test_d_2147483647_precision_11(void) {
    return (ft_printf(" %.11d ", 2147483647));
}

int test_d_neg_1_precision_1(void) {
    return (ft_printf(" %.1d ", -1));
}

int test_d_neg_1_precision_2(void) {
    return (ft_printf(" %.2d ", -1));
}

int test_d_neg_1_precision_3(void) {
    return (ft_printf(" %.3d ", -1));
}

int test_d_neg_42_precision_2(void) {
    return (ft_printf(" %.2d ", -42));
}

int test_d_neg_42_precision_3(void) {
    return (ft_printf(" %.3d ", -42));
}

int test_d_neg_42_precision_4(void) {
    return (ft_printf(" %.4d ", -42));
}

int test_d_neg_2147483648_precision_10(void) {
    return (ft_printf(" %.10d ", -2147483648));
}

int test_d_neg_2147483648_precision_11(void) {
    return (ft_printf(" %.11d ", -2147483648));
}

int test_d_neg_2147483648_precision_12(void) {
    return (ft_printf(" %.12d ", -2147483648));
}

void    test_d_precision(int testIndex) {

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

    int         (*test[NB_D_PRECISION_TESTS])() = {
        test_d_0_precision_0,
        test_d_0_precision_1,
        test_d_0_precision_2,
        test_d_1_precision_1,
        test_d_1_precision_2,
        test_d_42_precision_2,
        test_d_42_precision_3,
        test_d_2147483647_precision_10,
        test_d_2147483647_precision_11,
        test_d_neg_1_precision_1,
        test_d_neg_1_precision_2,
        test_d_neg_1_precision_3,
        test_d_neg_42_precision_2,
        test_d_neg_42_precision_3,
        test_d_neg_42_precision_4,
        test_d_neg_2147483648_precision_10,
        test_d_neg_2147483648_precision_11,
        test_d_neg_2147483648_precision_12
    };

    char*       input[] = {
        "\" %.0d \", 0",
        "\" %.1d \", 0",
        "\" %.2d \", 0",
        "\" %.1d \", 1",
        "\" %.2d \", 1",
        "\" %.2d \", 42",
        "\" %.3d \", 42",
        "\" %.10d \", 2147483647",
        "\" %.11d \", 2147483647",
        "\" %.1d \", -1",
        "\" %.2d \", -1",
        "\" %.3d \", -1",
        "\" %.2d \", -42",
        "\" %.3d \", -42",
        "\" %.4d \", -42",
        "\" %.10d \", -2147483648",
        "\" %.11d \", -2147483648",
        "\" %.12d \", -2147483648"
    };

    printf(FG_YELLOW"test : %%d with precision\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_D_PRECISION_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_d_precision");
        }
    }
    printf("\n");
}
