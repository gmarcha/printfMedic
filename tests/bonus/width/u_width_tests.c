#include "main.h"

int test_u_0_width_1(void) {
    return (ft_printf(" %1u ", 0));
}

int test_u_0_width_2(void) {
    return (ft_printf(" %2u ", 0));
}

int test_u_1_width_1(void) {
    return (ft_printf(" %1u ", 1));
}

int test_u_1_width_2(void) {
    return (ft_printf(" %2u ", 1));
}

int test_u_42_width_2(void) {
    return (ft_printf(" %2u ", 42));
}

int test_u_42_width_3(void) {
    return (ft_printf(" %3u ", 42));
}

int test_u_2147483647_width_10(void) {
    return (ft_printf(" %10u ", 2147483647));
}

int test_u_2147483647_width_11(void) {
    return (ft_printf(" %11u ", 2147483647));
}

void    test_u_width(int testIndex) {

    char*      expectedOutput[] = {
        " 0 ",
        "  0 ",
        " 1 ",
        "  1 ",
        " 42 ",
        "  42 ",
        " 2147483647 ",
        "  2147483647 "
    };

    int         expectedReturnValue[] = {
        3,
        4,
        3,
        4,
        4,
        5,
        12,
        13
    };

    int         (*test[NB_U_WIDTH_TESTS])() = {
        test_u_0_width_1,
        test_u_0_width_2,
        test_u_1_width_1,
        test_u_1_width_2,
        test_u_42_width_2,
        test_u_42_width_3,
        test_u_2147483647_width_10,
        test_u_2147483647_width_11
    };

    char*       input[] = {
        "\" %1u \", 0",
        "\" %2u \", 0",
        "\" %1u \", 1",
        "\" %2u \", 1",
        "\" %2u \", 42",
        "\" %3u \", 42",
        "\" %10u \", 2147483647",
        "\" %11u \", 2147483647"
    };

    printf(FG_YELLOW"test : %%u with width\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_U_WIDTH_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_u_width");
        }
    }
    printf("\n");
}
