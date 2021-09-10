#include "main.h"

int test_d_0_width_2_space(void) {
    return (ft_printf(" % 2d ", 0));
}

int test_d_0_width_3_space(void) {
    return (ft_printf(" % 3d ", 0));
}

int test_d_2147483647_width_11_space(void) {
    return (ft_printf(" % 11d ", 2147483647));
}

int test_d_2147483647_width_12_space(void) {
    return (ft_printf(" % 12d ", 2147483647));
}

int test_d_neg_1_width_2_space(void) {
    return (ft_printf(" % 2d ", -1));
}

int test_d_neg_1_width_3_space(void) {
    return (ft_printf(" % 3d ", -1));
}

int test_d_neg_2147483648_width_11_space(void) {
    return (ft_printf(" % 11d ", -2147483648));
}

int test_d_neg_2147483648_width_12_space(void) {
    return (ft_printf(" % 12d ", -2147483648));
}

void    test_d_width_space(int testIndex) {

    char*      expectedOutput[] = {
        "  0 ",
        "   0 ",
        "  2147483647 ",
        "   2147483647 ",
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

    int         (*test[NB_D_WIDTH_SPACE_TESTS])() = {
        test_d_0_width_2_space,
        test_d_0_width_3_space,
        test_d_2147483647_width_11_space,
        test_d_2147483647_width_12_space,
        test_d_neg_1_width_2_space,
        test_d_neg_1_width_3_space,
        test_d_neg_2147483648_width_11_space,
        test_d_neg_2147483648_width_12_space
    };

    char*       input[] = {
        "\" % 2d \", 0",
        "\" % 3d \", 0",
        "\" % 11d \", 2147483647",
        "\" % 12d \", 2147483647",
        "\" % 2d \", -1",
        "\" % 3d \", -1",
        "\" % 11d \", -2147483648",
        "\" % 12d \", -2147483648"
    };

    printf(FG_YELLOW"test : %%d with width and space\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_D_WIDTH_SPACE_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_d_width_space");
        }
    }
    printf("\n");
}
