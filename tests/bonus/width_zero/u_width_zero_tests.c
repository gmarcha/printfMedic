#include "main.h"

int test_u_0_width_2_zero(void) {
    return (ft_printf(" %02u ", 0));
}

int test_u_1_width_2_zero(void) {
    return (ft_printf(" %02u ", 1));
}

int test_u_42_width_3_zero(void) {
    return (ft_printf(" %03u ", 42));
}

int test_u_2147483647_width_11_zero(void) {
    return (ft_printf(" %011u ", 2147483647));
}

void    test_u_width_zero(int testIndex) {

    char*      expectedOutput[] = {
        " 00 ",
        " 01 ",
        " 042 ",
        " 02147483647 "
    };

    int         expectedReturnValue[] = {
        4,
        4,
        5,
        13
    };

    int         (*test[NB_U_WIDTH_ZERO_TESTS])() = {
        test_u_0_width_2_zero,
        test_u_1_width_2_zero,
        test_u_42_width_3_zero,
        test_u_2147483647_width_11_zero
    };

    char*       input[] = {
        "\" %02u \", 0",
        "\" %02u \", 1",
        "\" %03u \", 42",
        "\" %011u \", 2147483647"
    };

    printf(FG_YELLOW"test : %%u with width and zero\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_U_WIDTH_ZERO_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_u_width_zero");
        }
    }
    printf("\n");
}
