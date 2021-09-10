#include "main.h"

int test_d_0_width_1(void) {
    return (ft_printf(" %1d ", 0));
}

int test_d_0_width_2(void) {
    return (ft_printf(" %2d ", 0));
}

int test_d_1_width_1(void) {
    return (ft_printf(" %1d ", 1));
}

int test_d_1_width_2(void) {
    return (ft_printf(" %2d ", 1));
}

int test_d_42_width_2(void) {
    return (ft_printf(" %2d ", 42));
}

int test_d_42_width_3(void) {
    return (ft_printf(" %3d ", 42));
}

int test_d_2147483647_width_10(void) {
    return (ft_printf(" %10d ", 2147483647));
}

int test_d_2147483647_width_11(void) {
    return (ft_printf(" %11d ", 2147483647));
}

int test_d_neg_1_width_2(void) {
    return (ft_printf(" %2d ", -1));
}

int test_d_neg_1_width_3(void) {
    return (ft_printf(" %3d ", -1));
}

int test_d_neg_42_width_3(void) {
    return (ft_printf(" %3d ", -42));
}

int test_d_neg_42_width_4(void) {
    return (ft_printf(" %4d ", -42));
}

int test_d_neg_2147483648_width_11(void) {
    return (ft_printf(" %11d ", -2147483648));
}

int test_d_neg_2147483648_width_12(void) {
    return (ft_printf(" %12d ", -2147483648));
}

void    test_d_width(int testIndex) {

    char*      expectedOutput[] = {
        " 0 ",
        "  0 ",
        " 1 ",
        "  1 ",
        " 42 ",
        "  42 ",
        " 2147483647 ",
        "  2147483647 ",
        " -1 ",
        "  -1 ",
        " -42 ",
        "  -42 ",
        " -2147483648 ",
        "  -2147483648 "
    };

    int         expectedReturnValue[] = {
        3,
        4,
        3,
        4,
        4,
        5,
        12,
        13,
        4,
        5,
        5,
        6,
        13,
        14
    };

    int         (*test[NB_D_WIDTH_TESTS])() = {
        test_d_0_width_1,
        test_d_0_width_2,
        test_d_1_width_1,
        test_d_1_width_2,
        test_d_42_width_2,
        test_d_42_width_3,
        test_d_2147483647_width_10,
        test_d_2147483647_width_11,
        test_d_neg_1_width_2,
        test_d_neg_1_width_3,
        test_d_neg_42_width_3,
        test_d_neg_42_width_4,
        test_d_neg_2147483648_width_11,
        test_d_neg_2147483648_width_12
    };

    char*       input[] = {
        "\" %1d \", 0",
        "\" %2d \", 0",
        "\" %1d \", 1",
        "\" %2d \", 1",
        "\" %2d \", 42",
        "\" %3d \", 42",
        "\" %10d \", 2147483647",
        "\" %11d \", 2147483647",
        "\" %2d \", -1",
        "\" %3d \", -1",
        "\" %3d \", -42",
        "\" %4d \", -42",
        "\" %11d \", -2147483648",
        "\" %12d \", -2147483648"
    };

    printf(FG_YELLOW"test : %%d with width\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_D_WIDTH_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_d_width");
        }
    }
    printf("\n");
}
