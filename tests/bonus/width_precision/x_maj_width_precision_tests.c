#include "main.h"

int test_x_maj_0_witdh_1_precision_0(void) {
    return (ft_printf(" %1.0X ", 0));
}

int test_x_maj_0_witdh_2_precision_0(void) {
    return (ft_printf(" %2.0X ", 0));
}

int test_x_maj_0_witdh_2_precision_1(void) {
    return (ft_printf(" %2.1X ", 0));
}

int test_x_maj_0_witdh_3_precision_1(void) {
    return (ft_printf(" %3.1X ", 0));
}

int test_x_maj_0_witdh_2_precision_2(void) {
    return (ft_printf(" %2.2X ", 0));
}

int test_x_maj_0_witdh_3_precision_2(void) {
    return (ft_printf(" %3.2X ", 0));
}

int test_x_maj_0_witdh_2_precision_4(void) {
    return (ft_printf(" %2.4X ", 0));
}

int test_x_maj_0_witdh_3_precision_4(void) {
    return (ft_printf(" %3.4X ", 0));
}

int test_x_maj_2147483647_witdh_9_precision_8(void) {
    return (ft_printf(" %9.8X ", 2147483647));
}

int test_x_maj_2147483647_witdh_10_precision_8(void) {
    return (ft_printf(" %10.8X ", 2147483647));
}

int test_x_maj_2147483647_witdh_9_precision_9(void) {
    return (ft_printf(" %9.9X ", 2147483647));
}

int test_x_maj_2147483647_witdh_10_precision_9(void) {
    return (ft_printf(" %10.9X ", 2147483647));
}

int test_x_maj_2147483647_witdh_9_precision_11(void) {
    return (ft_printf(" %9.11X ", 2147483647));
}

int test_x_maj_2147483647_witdh_10_precision_11(void) {
    return (ft_printf(" %10.11X ", 2147483647));
}

void    test_x_maj_width_precision(int testIndex) {

    char*      expectedOutput[] = {
        "   ",
        "    ",
        "  0 ",
        "   0 ",
        " 00 ",
        "  00 ",
        " 0000 ",
        " 0000 ",
        "  7FFFFFFF ",
        "   7FFFFFFF ",
        " 07FFFFFFF ",
        "  07FFFFFFF ",
        " 0007FFFFFFF ",
        " 0007FFFFFFF "
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

    int         (*test[NB_X_MAJ_WIDTH_PRECISION_TESTS])() = {
        test_x_maj_0_witdh_1_precision_0,
        test_x_maj_0_witdh_2_precision_0,
        test_x_maj_0_witdh_2_precision_1,
        test_x_maj_0_witdh_3_precision_1,
        test_x_maj_0_witdh_2_precision_2,
        test_x_maj_0_witdh_3_precision_2,
        test_x_maj_0_witdh_2_precision_4,
        test_x_maj_0_witdh_3_precision_4,
        test_x_maj_2147483647_witdh_9_precision_8,
        test_x_maj_2147483647_witdh_10_precision_8,
        test_x_maj_2147483647_witdh_9_precision_9,
        test_x_maj_2147483647_witdh_10_precision_9,
        test_x_maj_2147483647_witdh_9_precision_11,
        test_x_maj_2147483647_witdh_10_precision_11
    };

    char*       input[] = {
        "\" %1.0X \", 0",
        "\" %2.0X \", 0",
        "\" %2.1X \", 0",
        "\" %3.1X \", 0",
        "\" %2.2X \", 0",
        "\" %3.2X \", 0",
        "\" %2.4X \", 0",
        "\" %3.4X \", 0",
        "\" %9.8X \", 2147483647",
        "\" %10.8X \", 2147483647",
        "\" %9.9X \", 2147483647",
        "\" %10.9X \", 2147483647",
        "\" %9.11X \", 2147483647",
        "\" %10.11X \", 2147483647"
    };

    printf(FG_YELLOW"test : %%X with width and precision\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_X_MAJ_WIDTH_PRECISION_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_x_maj_width_precision");
        }
    }
    printf("\n");
}

