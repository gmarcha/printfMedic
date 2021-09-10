#include "main.h"

int test_d_0_precision_1_plus(void) {
    return (ft_printf(" %+.1d ", 0));
}

int test_d_0_precision_2_plus(void) {
    return (ft_printf(" %+.2d ", 0));
}

int test_d_0_precision_3_plus(void) {
    return (ft_printf(" %+.3d ", 0));
}

int test_d_2147483647_precision_10_plus(void) {
    return (ft_printf(" %+.10d ", 2147483647));
}

int test_d_2147483647_precision_11_plus(void) {
    return (ft_printf(" %+.11d ", 2147483647));
}

int test_d_2147483647_precision_12_plus(void) {
    return (ft_printf(" %+.12d ", 2147483647));
}

int test_d_neg_1_precision_1_plus(void) {
    return (ft_printf(" %+.1d ", -1));
}

int test_d_neg_1_precision_2_plus(void) {
    return (ft_printf(" %+.2d ", -1));
}

int test_d_neg_1_precision_3_plus(void) {
    return (ft_printf(" %+.3d ", -1));
}

int test_d_neg_2147483648_precision_10_plus(void) {
    return (ft_printf(" %+.10d ", -2147483648));
}

int test_d_neg_2147483648_precision_11_plus(void) {
    return (ft_printf(" %+.11d ", -2147483648));
}

int test_d_neg_2147483648_precision_12_plus(void) {
    return (ft_printf(" %+.12d ", -2147483648));
}

void test_d_precision_plus(int testIndex) {

    char*      expectedOutput[] = {
        " +0 ",
        " +00 ",
        " +000 ",
        " +2147483647 ",
        " +02147483647 ",
        " +002147483647 ",
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

    int         (*test[NB_D_PRECISION_PLUS_TESTS])() = {
        test_d_0_precision_1_plus,
        test_d_0_precision_2_plus,
        test_d_0_precision_3_plus,
        test_d_2147483647_precision_10_plus,
        test_d_2147483647_precision_11_plus,
        test_d_2147483647_precision_12_plus,
        test_d_neg_1_precision_1_plus,
        test_d_neg_1_precision_2_plus,
        test_d_neg_1_precision_3_plus,
        test_d_neg_2147483648_precision_10_plus,
        test_d_neg_2147483648_precision_11_plus,
        test_d_neg_2147483648_precision_12_plus
    };

    char*       input[] = {
        "\" %+.1d \", 0",
        "\" %+.2d \", 0",
        "\" %+.3d \", 0",
        "\" %+.10d \", 2147483647",
        "\" %+.11d \", 2147483647",
        "\" %+.12d \", 2147483647",
        "\" %+.1d \", -1",
        "\" %+.2d \", -1",
        "\" %+.3d \", -1",
        "\" %+.10d \", -2147483648",
        "\" %+.11d \", -2147483648",
        "\" %+.12d \", -2147483648"
    };

    printf(FG_YELLOW"test : %%d with precision and plus\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_D_PRECISION_PLUS_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_d_precision_plus");
        }
    }
    printf("\n");
}
