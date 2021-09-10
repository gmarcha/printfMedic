#include "main.h"

int test_i_0_width_2_dash(void) {
    return (ft_printf(" %-2i ", 0));
}

int test_i_1_width_2_dash(void) {
    return (ft_printf(" %-2i ", 1));
}

int test_i_42_width_3_dash(void) {
    return (ft_printf(" %-3i ", 42));
}

int test_i_2147483647_width_11_dash(void) {
    return (ft_printf(" %-11i ", 2147483647));
}

int test_i_neg_1_width_3_dash(void) {
    return (ft_printf(" %-3i ", -1));
}

int test_i_neg_42_width_4_dash(void) {
    return (ft_printf(" %-4i ", -42));
}

int test_i_neg_2147483648_width_12_dash(void) {
    return (ft_printf(" %-12i ", -2147483648));
}

void    test_i_width_dash(int testIndex) {

    char*      expectedOutput[] = {
        " 0  ",
        " 1  ",
        " 42  ",
        " 2147483647  ",
        " -1  ",
        " -42  ",
        " -2147483648  "
    };

    int         expectedReturnValue[] = {
        4,
        4,
        5,
        13,
        5,
        6,
        14
    };

    int         (*test[NB_I_WIDTH_DASH_TESTS])() = {
        test_i_0_width_2_dash,
        test_i_1_width_2_dash,
        test_i_42_width_3_dash,
        test_i_2147483647_width_11_dash,
        test_i_neg_1_width_3_dash,
        test_i_neg_42_width_4_dash,
        test_i_neg_2147483648_width_12_dash
    };

    char*       input[] = {
        "\" %-2i \", 0",
        "\" %-2i \", 1",
        "\" %-3i \", 42",
        "\" %-11i \", 2147483647",
        "\" %-3i \", -1",
        "\" %-4i \", -42",
        "\" %-12i \", -2147483648"
    };

    printf(FG_YELLOW"test : %%i with width and dash\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_I_WIDTH_DASH_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_i_width_dash");
        }
    }
    printf("\n");
}
