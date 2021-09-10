#include "main.h"

int test_d_0_width_2_dash(void) {
    return (ft_printf(" %-2d ", 0));
}

int test_d_1_width_2_dash(void) {
    return (ft_printf(" %-2d ", 1));
}

int test_d_42_width_3_dash(void) {
    return (ft_printf(" %-3d ", 42));
}

int test_d_2147483647_width_11_dash(void) {
    return (ft_printf(" %-11d ", 2147483647));
}

int test_d_neg_1_width_3_dash(void) {
    return (ft_printf(" %-3d ", -1));
}

int test_d_neg_42_width_4_dash(void) {
    return (ft_printf(" %-4d ", -42));
}

int test_d_neg_2147483648_width_12_dash(void) {
    return (ft_printf(" %-12d ", -2147483648));
}

void    test_d_width_dash(int testIndex) {

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

    int         (*test[NB_D_WIDTH_DASH_TESTS])() = {
        test_d_0_width_2_dash,
        test_d_1_width_2_dash,
        test_d_42_width_3_dash,
        test_d_2147483647_width_11_dash,
        test_d_neg_1_width_3_dash,
        test_d_neg_42_width_4_dash,
        test_d_neg_2147483648_width_12_dash
    };

    char*       input[] = {
        "\" %-2d \", 0",
        "\" %-2d \", 1",
        "\" %-3d \", 42",
        "\" %-11d \", 2147483647",
        "\" %-3d \", -1",
        "\" %-4d \", -42",
        "\" %-12d \", -2147483648"
    };

    printf(FG_YELLOW"test : %%d with width and dash\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_D_WIDTH_DASH_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_d_width_dash");
        }
    }
    printf("\n");
}
