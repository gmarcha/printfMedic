#include "main.h"

int test_x_maj_0_width_2_dash(void) {
    return (ft_printf(" %-2X ", 0));
}

int test_x_maj_1_width_2_dash(void) {
    return (ft_printf(" %-2X ", 1));
}

int test_x_maj_42_width_3_dash(void) {
    return (ft_printf(" %-3X ", 42));
}

int test_x_maj_2147483647_width_9_dash(void) {
    return (ft_printf(" %-9X ", 2147483647));
}

void    test_x_maj_width_dash(int testIndex) {

    char*      expectedOutput[] = {
        " 0  ",
        " 1  ",
        " 2A  ",
        " 7FFFFFFF  "
    };

    int         expectedReturnValue[] = {
        4,
        4,
        5,
        11
    };

    int         (*test[NB_X_MAJ_WIDTH_DASH_TESTS])() = {
        test_x_maj_0_width_2_dash,
        test_x_maj_1_width_2_dash,
        test_x_maj_42_width_3_dash,
        test_x_maj_2147483647_width_9_dash
    };

    char*       input[] = {
        "\" %-2X \", 0",
        "\" %-2X \", 1",
        "\" %-3X \", 42",
        "\" %-9X \", 2147483647"
    };

    printf(FG_YELLOW"test : %%X with width and dash\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_X_MAJ_WIDTH_DASH_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_x_maj_width_dash");
        }
    }
    printf("\n");
}
