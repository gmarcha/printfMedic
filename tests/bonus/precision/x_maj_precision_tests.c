#include "main.h"

int test_x_maj_0_precision_0(void) {
    return (ft_printf(" %.0X ", 0));
}

int test_x_maj_0_precision_1(void) {
    return (ft_printf(" %.1X ", 0));
}

int test_x_maj_0_precision_2(void) {
    return (ft_printf(" %.2X ", 0));
}

int test_x_maj_1_precision_1(void) {
    return (ft_printf(" %.1X ", 1));
}

int test_x_maj_1_precision_2(void) {
    return (ft_printf(" %.2X ", 1));
}

int test_x_maj_42_precision_2(void) {
    return (ft_printf(" %.2X ", 42));
}

int test_x_maj_42_precision_3(void) {
    return (ft_printf(" %.3X ", 42));
}

int test_x_maj_2147483647_precision_8(void) {
    return (ft_printf(" %.8X ", 2147483647));
}

int test_x_maj_2147483647_precision_9(void) {
    return (ft_printf(" %.9X ", 2147483647));
}

void    test_x_maj_precision(int testIndex) {

    char*      expectedOutput[] = {
        "  ",
        " 0 ",
        " 00 ",
        " 1 ",
        " 01 ",
        " 2A ",
        " 02A ",
        " 7FFFFFFF ",
        " 07FFFFFFF "
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

    int         (*test[NB_X_MAJ_PRECISION_TESTS])() = {
        test_x_maj_0_precision_0,
        test_x_maj_0_precision_1,
        test_x_maj_0_precision_2,
        test_x_maj_1_precision_1,
        test_x_maj_1_precision_2,
        test_x_maj_42_precision_2,
        test_x_maj_42_precision_3,
        test_x_maj_2147483647_precision_8,
        test_x_maj_2147483647_precision_9
    };

    char*       input[] = {
        "\" %.0X \", 0",
        "\" %.1X \", 0",
        "\" %.2X \", 0",
        "\" %.1X \", 1",
        "\" %.2X \", 1",
        "\" %.2X \", 42",
        "\" %.3X \", 42",
        "\" %.8X \", 2147483647",
        "\" %.9X \", 2147483647"
    };

    printf(FG_YELLOW"test : %%X with precision\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_X_MAJ_PRECISION_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_x_maj_precision");
        }
    }
    printf("\n");
}
