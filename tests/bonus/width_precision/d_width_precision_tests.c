#include "main.h"

int test_d_0_witdh_1_precision_0(void) {
    return (ft_printf(" %1.0d ", 0));
}

int test_d_0_witdh_2_precision_0(void) {
    return (ft_printf(" %2.0d ", 0));
}

int test_d_0_witdh_2_precision_1(void) {
    return (ft_printf(" %2.1d ", 0));
}

int test_d_0_witdh_3_precision_1(void) {
    return (ft_printf(" %3.1d ", 0));
}

int test_d_0_witdh_2_precision_2(void) {
    return (ft_printf(" %2.2d ", 0));
}

int test_d_0_witdh_3_precision_2(void) {
    return (ft_printf(" %3.2d ", 0));
}

int test_d_0_witdh_2_precision_4(void) {
    return (ft_printf(" %2.4d ", 0));
}

int test_d_0_witdh_3_precision_4(void) {
    return (ft_printf(" %3.4d ", 0));
}

int test_d_2147483647_witdh_11_precision_10(void) {
    return (ft_printf(" %11.10d ", 2147483647));
}

int test_d_2147483647_witdh_12_precision_10(void) {
    return (ft_printf(" %12.10d ", 2147483647));
}

int test_d_2147483647_witdh_11_precision_11(void) {
    return (ft_printf(" %11.11d ", 2147483647));
}

int test_d_2147483647_witdh_12_precision_11(void) {
    return (ft_printf(" %12.11d ", 2147483647));
}

int test_d_2147483647_witdh_11_precision_13(void) {
    return (ft_printf(" %11.13d ", 2147483647));
}

int test_d_2147483647_witdh_12_precision_13(void) {
    return (ft_printf(" %12.13d ", 2147483647));
}

int test_d_neg_1_witdh_3_precision_1(void) {
    return (ft_printf(" %3.1d ", -1));
}

int test_d_neg_1_witdh_4_precision_1(void) {
    return (ft_printf(" %4.1d ", -1));
}

int test_d_neg_1_witdh_3_precision_2(void) {
    return (ft_printf(" %3.2d ", -1));
}

int test_d_neg_1_witdh_4_precision_2(void) {
    return (ft_printf(" %4.2d ", -1));
}

int test_d_neg_1_witdh_3_precision_4(void) {
    return (ft_printf(" %3.4d ", -1));
}

int test_d_neg_1_witdh_4_precision_4(void) {
    return (ft_printf(" %4.4d ", -1));
}

int test_d_neg_2147483648_witdh_12_precision_10(void) {
    return (ft_printf(" %12.10d ", -2147483648));
}

int test_d_neg_2147483648_witdh_13_precision_10(void) {
    return (ft_printf(" %13.10d ", -2147483648));
}

int test_d_neg_2147483648_witdh_12_precision_11(void) {
    return (ft_printf(" %12.11d ", -2147483648));
}

int test_d_neg_2147483648_witdh_13_precision_11(void) {
    return (ft_printf(" %13.11d ", -2147483648));
}

int test_d_neg_2147483648_witdh_12_precision_13(void) {
    return (ft_printf(" %12.13d ", -2147483648));
}

int test_d_neg_2147483648_witdh_13_precision_13(void) {
    return (ft_printf(" %13.13d ", -2147483648));
}

void    test_d_width_precision(int testIndex) {

    char*      expectedOutput[] = {
        "   ",
        "    ",
        "  0 ",
        "   0 ",
        " 00 ",
        "  00 ",
        " 0000 ",
        " 0000 ",
        "  2147483647 ",
        "   2147483647 ",
        " 02147483647 ",
        "  02147483647 ",
        " 0002147483647 ",
        " 0002147483647 ",
        "  -1 ",
        "   -1 ",
        " -01 ",
        "  -01 ",
        " -0001 ",
        " -0001 ",
        "  -2147483648 ",
        "   -2147483648 ",
        " -02147483648 ",
        "  -02147483648 ",
        " -0002147483648 ",
        " -0002147483648 "
    };

    int         expectedReturnValue[] = {
        3,
        4,
        4,
        5,
        4,
        5,
        6,
        6,
        13,
        14,
        13,
        14,
        15,
        15,
        5,
        6,
        5,
        6,
        7,
        7,
        14,
        15,
        14,
        15,
        16,
        16
    };

    int         (*test[NB_D_WIDTH_PRECISION_TESTS])() = {
        test_d_0_witdh_1_precision_0,
        test_d_0_witdh_2_precision_0,
        test_d_0_witdh_2_precision_1,
        test_d_0_witdh_3_precision_1,
        test_d_0_witdh_2_precision_2,
        test_d_0_witdh_3_precision_2,
        test_d_0_witdh_2_precision_4,
        test_d_0_witdh_3_precision_4,
        test_d_2147483647_witdh_11_precision_10,
        test_d_2147483647_witdh_12_precision_10,
        test_d_2147483647_witdh_11_precision_11,
        test_d_2147483647_witdh_12_precision_11,
        test_d_2147483647_witdh_11_precision_13,
        test_d_2147483647_witdh_12_precision_13,
        test_d_neg_1_witdh_3_precision_1,
        test_d_neg_1_witdh_4_precision_1,
        test_d_neg_1_witdh_3_precision_2,
        test_d_neg_1_witdh_4_precision_2,
        test_d_neg_1_witdh_3_precision_4,
        test_d_neg_1_witdh_4_precision_4,
        test_d_neg_2147483648_witdh_12_precision_10,
        test_d_neg_2147483648_witdh_13_precision_10,
        test_d_neg_2147483648_witdh_12_precision_11,
        test_d_neg_2147483648_witdh_13_precision_11,
        test_d_neg_2147483648_witdh_12_precision_13,
        test_d_neg_2147483648_witdh_13_precision_13
    };

    char*       input[] = {
        "\" %1.0d \", 0",
        "\" %2.0d \", 0",
        "\" %2.1d \", 0",
        "\" %3.1d \", 0",
        "\" %2.2d \", 0",
        "\" %3.2d \", 0",
        "\" %2.4d \", 0",
        "\" %3.4d \", 0",
        "\" %11.10d \", 2147483647",
        "\" %12.10d \", 2147483647",
        "\" %11.11d \", 2147483647",
        "\" %12.11d \", 2147483647",
        "\" %11.13d \", 2147483647",
        "\" %12.13d \", 2147483647",
        "\" %3.1d \", -1",
        "\" %4.1d \", -1",
        "\" %3.2d \", -1",
        "\" %4.2d \", -1",
        "\" %3.4d \", -1",
        "\" %4.4d \", -1",
        "\" %12.10d \", -2147483648",
        "\" %13.10d \", -2147483648",
        "\" %12.11d \", -2147483648",
        "\" %13.11d \", -2147483648",
        "\" %12.13d \", -2147483648",
        "\" %13.13d \", -2147483648"
    };

    printf(FG_YELLOW"test : %%d with width and precision\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_D_WIDTH_PRECISION_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_d_width_precision");
        }
    }
    printf("\n");
}

