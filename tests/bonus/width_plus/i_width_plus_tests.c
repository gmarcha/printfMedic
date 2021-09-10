#include "main.h"

int test_i_0_width_2_plus(void) {
    return (ft_printf(" %+2i ", 0));
}

int test_i_0_width_3_plus(void) {
    return (ft_printf(" %+3i ", 0));
}

int test_i_2147483647_width_11_plus(void) {
    return (ft_printf(" %+11i ", 2147483647));
}

int test_i_2147483647_width_12_plus(void) {
    return (ft_printf(" %+12i ", 2147483647));
}

int test_i_neg_1_width_2_plus(void) {
    return (ft_printf(" %+2i ", -1));
}

int test_i_neg_1_width_3_plus(void) {
    return (ft_printf(" %+3i ", -1));
}

int test_i_neg_2147483648_width_11_plus(void) {
    return (ft_printf(" %+11i ", -2147483648));
}

int test_i_neg_2147483648_width_12_plus(void) {
    return (ft_printf(" %+12i ", -2147483648));
}

void    test_i_width_plus(int testIndex) {

    char*      expectedOutput[] = {
        " +0 ",
        "  +0 ",
        " +2147483647 ",
        "  +2147483647 ",
        " -1 ",
        "  -1 ",
        " -2147483648 ",
        "  -2147483648 "
    };

    int         expectedReturnValue[] = {
        4,
        5,
        13,
        14,
        4,
        5,
        13,
        14
    };

    int         (*test[NB_I_WIDTH_PLUS_TESTS])() = {
        test_i_0_width_2_plus,
        test_i_0_width_3_plus,
        test_i_2147483647_width_11_plus,
        test_i_2147483647_width_12_plus,
        test_i_neg_1_width_2_plus,
        test_i_neg_1_width_3_plus,
        test_i_neg_2147483648_width_11_plus,
        test_i_neg_2147483648_width_12_plus
    };

    char*       input[] = {
        "\" %+2i \", 0",
        "\" %+3i \", 0",
        "\" %+11i \", 2147483647",
        "\" %+12i \", 2147483647",
        "\" %+2i \", -1",
        "\" %+3i \", -1",
        "\" %+11i \", -2147483648",
        "\" %+12i \", -2147483648"
    };

    printf(FG_YELLOW"test : %%i with width and plus\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_I_WIDTH_PLUS_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_i_width_plus");
        }
    }
    printf("\n");
}
