#include "main.h"

int test_x_0_precision_0(void) {
    return (ft_printf(" %.0x ", 0));
}

int test_x_0_precision_1(void) {
    return (ft_printf(" %.1x ", 0));
}

int test_x_0_precision_2(void) {
    return (ft_printf(" %.2x ", 0));
}

int test_x_1_precision_1(void) {
    return (ft_printf(" %.1x ", 1));
}

int test_x_1_precision_2(void) {
    return (ft_printf(" %.2x ", 1));
}

int test_x_42_precision_2(void) {
    return (ft_printf(" %.2x ", 42));
}

int test_x_42_precision_3(void) {
    return (ft_printf(" %.3x ", 42));
}

int test_x_2147483647_precision_8(void) {
    return (ft_printf(" %.8x ", 2147483647));
}

int test_x_2147483647_precision_9(void) {
    return (ft_printf(" %.9x ", 2147483647));
}

void    test_x_precision(int testIndex) {

    char*      expectedOutput[] = {
        "  ",
        " 0 ",
        " 00 ",
        " 1 ",
        " 01 ",
        " 2a ",
        " 02a ",
        " 7fffffff ",
        " 07fffffff "
    };

    int         expectedReturnValue[] = {
        2,
        3,
        4,
        3,
        4,
        4,
        5,
        10,
        11
    };

    int         (*test[NB_X_PRECISION_TESTS])() = {
        test_x_0_precision_0,
        test_x_0_precision_1,
        test_x_0_precision_2,
        test_x_1_precision_1,
        test_x_1_precision_2,
        test_x_42_precision_2,
        test_x_42_precision_3,
        test_x_2147483647_precision_8,
        test_x_2147483647_precision_9
    };

    char*       input[] = {
        "\" %.0x \", 0",
        "\" %.1x \", 0",
        "\" %.2x \", 0",
        "\" %.1x \", 1",
        "\" %.2x \", 1",
        "\" %.2x \", 42",
        "\" %.3x \", 42",
        "\" %.8x \", 2147483647",
        "\" %.9x \", 2147483647"
    };

    printf(FG_YELLOW"test : %%x with precision\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_X_PRECISION_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_x_precision");
        }
    }
    printf("\n");
}
