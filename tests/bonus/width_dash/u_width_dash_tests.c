#include "main.h"

int test_u_0_width_2_dash(void) {
    return (ft_printf(" %-2u ", 0));
}

int test_u_1_width_2_dash(void) {
    return (ft_printf(" %-2u ", 1));
}

int test_u_42_width_3_dash(void) {
    return (ft_printf(" %-3u ", 42));
}

int test_u_2147483647_width_11_dash(void) {
    return (ft_printf(" %-11u ", 2147483647));
}

void    test_u_width_dash(int testIndex) {

    char*      expectedOutput[] = {
        " 0  ",
        " 1  ",
        " 42  ",
        " 2147483647  "
    };

    int         expectedReturnValue[] = {
        4,
        4,
        5,
        13
    };

    int         (*test[NB_U_WIDTH_DASH_TESTS])() = {
        test_u_0_width_2_dash,
        test_u_1_width_2_dash,
        test_u_42_width_3_dash,
        test_u_2147483647_width_11_dash
    };

    char*       input[] = {
        "\" %-2u \", 0",
        "\" %-2u \", 1",
        "\" %-3u \", 42",
        "\" %-11u \", 2147483647"
    };

    printf(FG_YELLOW"test : %%u with width and dash\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_U_WIDTH_DASH_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_u_width_dash");
        }
    }
    printf("\n");
}
