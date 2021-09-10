#include "main.h"

int test_u_0_precision_0(void) {
    return (ft_printf(" %.0u ", 0));
}

int test_u_0_precision_1(void) {
    return (ft_printf(" %.1u ", 0));
}

int test_u_0_precision_2(void) {
    return (ft_printf(" %.2u ", 0));
}

int test_u_1_precision_1(void) {
    return (ft_printf(" %.1u ", 1));
}

int test_u_1_precision_2(void) {
    return (ft_printf(" %.2u ", 1));
}

int test_u_42_precision_2(void) {
    return (ft_printf(" %.2u ", 42));
}

int test_u_42_precision_3(void) {
    return (ft_printf(" %.3u ", 42));
}

int test_u_2147483647_precision_10(void) {
    return (ft_printf(" %.10u ", 2147483647));
}

int test_u_2147483647_precision_11(void) {
    return (ft_printf(" %.11u ", 2147483647));
}

void    test_u_precision(int testIndex) {

    char*      expectedOutput[] = {
        "  ",
        " 0 ",
        " 00 ",
        " 1 ",
        " 01 ",
        " 42 ",
        " 042 ",
        " 2147483647 ",
        " 02147483647 "
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
        13
    };

    int         (*test[NB_U_PRECISION_TESTS])() = {
        test_u_0_precision_0,
        test_u_0_precision_1,
        test_u_0_precision_2,
        test_u_1_precision_1,
        test_u_1_precision_2,
        test_u_42_precision_2,
        test_u_42_precision_3,
        test_u_2147483647_precision_10,
        test_u_2147483647_precision_11
    };

    char*       input[] = {
        "\" %.0u \", 0",
        "\" %.1u \", 0",
        "\" %.2u \", 0",
        "\" %.1u \", 1",
        "\" %.2u \", 1",
        "\" %.2u \", 42",
        "\" %.3u \", 42",
        "\" %.10u \", 2147483647",
        "\" %.11u \", 2147483647"
    };

    printf(FG_YELLOW"test : %%u with precision\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_U_PRECISION_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_u_precision");
        }
    }
    printf("\n");
}
