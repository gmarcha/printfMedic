#include "main.h"

int test_x_0_witdh_1_precision_0(void) {
    return (ft_printf(" %1.0x ", 0));
}

int test_x_0_witdh_2_precision_0(void) {
    return (ft_printf(" %2.0x ", 0));
}

int test_x_0_witdh_2_precision_1(void) {
    return (ft_printf(" %2.1x ", 0));
}

int test_x_0_witdh_3_precision_1(void) {
    return (ft_printf(" %3.1x ", 0));
}

int test_x_0_witdh_2_precision_2(void) {
    return (ft_printf(" %2.2x ", 0));
}

int test_x_0_witdh_3_precision_2(void) {
    return (ft_printf(" %3.2x ", 0));
}

int test_x_0_witdh_2_precision_4(void) {
    return (ft_printf(" %2.4x ", 0));
}

int test_x_0_witdh_3_precision_4(void) {
    return (ft_printf(" %3.4x ", 0));
}

int test_x_2147483647_witdh_9_precision_8(void) {
    return (ft_printf(" %9.8x ", 2147483647));
}

int test_x_2147483647_witdh_10_precision_8(void) {
    return (ft_printf(" %10.8x ", 2147483647));
}

int test_x_2147483647_witdh_9_precision_9(void) {
    return (ft_printf(" %9.9x ", 2147483647));
}

int test_x_2147483647_witdh_10_precision_9(void) {
    return (ft_printf(" %10.9x ", 2147483647));
}

int test_x_2147483647_witdh_9_precision_11(void) {
    return (ft_printf(" %9.11x ", 2147483647));
}

int test_x_2147483647_witdh_10_precision_11(void) {
    return (ft_printf(" %10.11x ", 2147483647));
}

void    test_x_width_precision(int testIndex) {

    char*      expectedOutput[] = {
        "   ",
        "    ",
        "  0 ",
        "   0 ",
        " 00 ",
        "  00 ",
        " 0000 ",
        " 0000 ",
        "  7fffffff ",
        "   7fffffff ",
        " 07fffffff ",
        "  07fffffff ",
        " 0007fffffff ",
        " 0007fffffff "
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
        11,
        12,
        11,
        12,
        13,
        13
    };

    int         (*test[NB_X_WIDTH_PRECISION_TESTS])() = {
        test_x_0_witdh_1_precision_0,
        test_x_0_witdh_2_precision_0,
        test_x_0_witdh_2_precision_1,
        test_x_0_witdh_3_precision_1,
        test_x_0_witdh_2_precision_2,
        test_x_0_witdh_3_precision_2,
        test_x_0_witdh_2_precision_4,
        test_x_0_witdh_3_precision_4,
        test_x_2147483647_witdh_9_precision_8,
        test_x_2147483647_witdh_10_precision_8,
        test_x_2147483647_witdh_9_precision_9,
        test_x_2147483647_witdh_10_precision_9,
        test_x_2147483647_witdh_9_precision_11,
        test_x_2147483647_witdh_10_precision_11
    };

    char*       input[] = {
        "\" %1.0x \", 0",
        "\" %2.0x \", 0",
        "\" %2.1x \", 0",
        "\" %3.1x \", 0",
        "\" %2.2x \", 0",
        "\" %3.2x \", 0",
        "\" %2.4x \", 0",
        "\" %3.4x \", 0",
        "\" %9.8x \", 2147483647",
        "\" %10.8x \", 2147483647",
        "\" %9.9x \", 2147483647",
        "\" %10.9x \", 2147483647",
        "\" %9.11x \", 2147483647",
        "\" %10.11x \", 2147483647"
    };

    printf(FG_YELLOW"test : %%x with width and precision\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_X_WIDTH_PRECISION_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_x_width_precision");
        }
    }
    printf("\n");
}

