#include "main.h"

int test_i_0_precision_1_space(void) {
    return (ft_printf(" % .1i ", 0));
}

int test_i_0_precision_2_space(void) {
    return (ft_printf(" % .2i ", 0));
}

int test_i_0_precision_3_space(void) {
    return (ft_printf(" % .3i ", 0));
}

int test_i_2147483647_precision_10_space(void) {
    return (ft_printf(" % .10i ", 2147483647));
}

int test_i_2147483647_precision_11_space(void) {
    return (ft_printf(" % .11i ", 2147483647));
}

int test_i_2147483647_precision_12_space(void) {
    return (ft_printf(" % .12i ", 2147483647));
}

int test_i_neg_1_precision_1_space(void) {
    return (ft_printf(" % .1i ", -1));
}

int test_i_neg_1_precision_2_space(void) {
    return (ft_printf(" % .2i ", -1));
}

int test_i_neg_1_precision_3_space(void) {
    return (ft_printf(" % .3i ", -1));
}

int test_i_neg_2147483648_precision_10_space(void) {
    return (ft_printf(" % .10i ", -2147483648));
}

int test_i_neg_2147483648_precision_11_space(void) {
    return (ft_printf(" % .11i ", -2147483648));
}

int test_i_neg_2147483648_precision_12_space(void) {
    return (ft_printf(" % .12i ", -2147483648));
}

void test_i_precision_space(int testIndex) {

    char*      expectedOutput[] = {
        "  0 ",
        "  00 ",
        "  000 ",
        "  2147483647 ",
        "  02147483647 ",
        "  002147483647 ",
        " -1 ",
        " -01 ",
        " -001 ",
        " -2147483648 ",
        " -02147483648 ",
        " -002147483648 "
    };

    int         expectedReturnValue[] = {
        4,
        5,
        6,
        13,
        14,
        15,
        4,
        5,
        6,
        13,
        14,
        15
    };

    int         (*test[NB_I_PRECISION_SPACE_TESTS])() = {
        test_i_0_precision_1_space,
        test_i_0_precision_2_space,
        test_i_0_precision_3_space,
        test_i_2147483647_precision_10_space,
        test_i_2147483647_precision_11_space,
        test_i_2147483647_precision_12_space,
        test_i_neg_1_precision_1_space,
        test_i_neg_1_precision_2_space,
        test_i_neg_1_precision_3_space,
        test_i_neg_2147483648_precision_10_space,
        test_i_neg_2147483648_precision_11_space,
        test_i_neg_2147483648_precision_12_space
    };

    char*       input[] = {
        "\" % .1i \", 0",
        "\" % .2i \", 0",
        "\" % .3i \", 0",
        "\" % .10i \", 2147483647",
        "\" % .11i \", 2147483647",
        "\" % .12i \", 2147483647",
        "\" % .1i \", -1",
        "\" % .2i \", -1",
        "\" % .3i \", -1",
        "\" % .10i \", -2147483648",
        "\" % .11i \", -2147483648",
        "\" % .12i \", -2147483648"
    };

    printf(FG_YELLOW"test : %%i with precision and space\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_I_PRECISION_SPACE_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_i_precision_space");
        }
    }
    printf("\n");
}
