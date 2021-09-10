#include "main.h"

int test_d_0_width_2_precision_1_dash_space(void) {
    return (ft_printf(" %- 2.1d ", 0));
}

int test_d_0_width_3_precision_1_dash_space(void) {
    return (ft_printf(" %- 3.1d ", 0));
}

int test_d_0_width_3_precision_2_dash_space(void) {
    return (ft_printf(" %- 3.2d ", 0));
}

int test_d_0_width_4_precision_2_dash_space(void) {
    return (ft_printf(" %- 4.2d ", 0));
}

int test_d_2147483647_width_11_precision_10_dash_space(void) {
    return (ft_printf(" %- 11.10d ", 2147483647));
}

int test_d_2147483647_width_12_precision_10_dash_space(void) {
    return (ft_printf(" %- 12.10d ", 2147483647));
}

int test_d_2147483647_width_12_precision_11_dash_space(void) {
    return (ft_printf(" %- 12.11d ", 2147483647));
}

int test_d_2147483647_width_13_precision_11_dash_space(void) {
    return (ft_printf(" %- 13.11d ", 2147483647));
}

int test_d_neg_1_width_2_precision_1_dash_space(void) {
    return (ft_printf(" %- 2.1d ", -1));
}

int test_d_neg_1_width_3_precision_1_dash_space(void) {
    return (ft_printf(" %- 3.1d ", -1));
}

int test_d_neg_1_width_3_precision_2_dash_space(void) {
    return (ft_printf(" %- 3.2d ", -1));
}

int test_d_neg_1_width_4_precision_2_dash_space(void) {
    return (ft_printf(" %- 4.2d ", -1));
}

int test_d_neg_2147483648_width_11_precision_10_dash_space(void) {
    return (ft_printf(" %- 11.10d ", -2147483648));
}

int test_d_neg_2147483648_width_12_precision_10_dash_space(void) {
    return (ft_printf(" %- 12.10d ", -2147483648));
}

int test_d_neg_2147483648_width_12_precision_11_dash_space(void) {
    return (ft_printf(" %- 12.11d ", -2147483648));
}

int test_d_neg_2147483648_width_13_precision_11_dash_space(void) {
    return (ft_printf(" %- 13.11d ", -2147483648));
}

void test_d_width_precision_dash_space(int testIndex) {

    char*      expectedOutput[] = {
        "  0 ",
        "  0  ",
        "  00 ",
        "  00  ",
        "  2147483647 ",
        "  2147483647  ",
        "  02147483647 ",
        "  02147483647  ",
        " -1 ",
        " -1  ",
        " -01 ",
        " -01  ",
        " -2147483648 ",
        " -2147483648  ",
        " -02147483648 ",
        " -02147483648  "
    };

    int         expectedReturnValue[] = {
        4,
        5,
        5,
        6,
        13,
        14,
        14,
        15,
        4,
        5,
        5,
        6,
        13,
        14,
        14,
        15
    };

    int         (*test[NB_D_WIDTH_PRECISION_DASH_SPACE_TESTS])() = {
        test_d_0_width_2_precision_1_dash_space,
        test_d_0_width_3_precision_1_dash_space,
        test_d_0_width_3_precision_2_dash_space,
        test_d_0_width_4_precision_2_dash_space,
        test_d_2147483647_width_11_precision_10_dash_space,
        test_d_2147483647_width_12_precision_10_dash_space,
        test_d_2147483647_width_12_precision_11_dash_space,
        test_d_2147483647_width_13_precision_11_dash_space,
        test_d_neg_1_width_2_precision_1_dash_space,
        test_d_neg_1_width_3_precision_1_dash_space,
        test_d_neg_1_width_3_precision_2_dash_space,
        test_d_neg_1_width_4_precision_2_dash_space,
        test_d_neg_2147483648_width_11_precision_10_dash_space,
        test_d_neg_2147483648_width_12_precision_10_dash_space,
        test_d_neg_2147483648_width_12_precision_11_dash_space,
        test_d_neg_2147483648_width_13_precision_11_dash_space
    };

    char*       input[] = {
        "\" %- 2.1d \", 0",
        "\" %- 3.1d \", 0",
        "\" %- 3.2d \", 0",
        "\" %- 4.2d \", 0",
        "\" %- 11.10d \", 2147483647",
        "\" %- 12.10d \", 2147483647",
        "\" %- 12.11d \", 2147483647",
        "\" %- 13.11d \", 2147483647",
        "\" %- 2.1d \", -1",
        "\" %- 3.1d \", -1",
        "\" %- 3.2d \", -1",
        "\" %- 4.2d \", -1",
        "\" %- 11.10d \", -2147483648",
        "\" %- 12.10d \", -2147483648",
        "\" %- 12.11d \", -2147483648",
        "\" %- 13.11d \", -2147483648"
    };

    printf(FG_YELLOW"test : %%d with width, precision, dash and space\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_D_WIDTH_PRECISION_DASH_SPACE_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_d_width_precision_dash_space");
        }
    }
    printf("\n");
}
