#include "main.h"

int test_d_0(void) {
    return (ft_printf(" %d ", 0));
}

int test_d_1(void) {
    return (ft_printf(" %d ", 1));
}

int test_d_42(void) {
    return (ft_printf(" %d ", 42));
}

int test_d_2147483647(void) {
    return (ft_printf(" %d ", 2147483647));
}

int test_d_neg_1(void) {
    return (ft_printf(" %d ", -1));
}

int test_d_neg_42(void) {
    return (ft_printf(" %d ", -42));
}

int test_d_neg_2147483647(void) {
    return (ft_printf(" %d ", -2147483647));
}

int test_d_neg_2147483648(void) {
    return (ft_printf(" %d ", -2147483648));
}

int test_d_2147483647_d_neg_2147483647_d_neg_2147483648(void) {
    return (ft_printf(" %d %d %d ", 2147483647, -2147483647, -2147483648));
}

void    test_d(int testIndex) {

    char*      expectedOutput[] = {
        " 0 ",
        " 1 ",
        " 42 ",
        " 2147483647 ",
        " -1 ",
        " -42 ",
        " -2147483647 ",
        " -2147483648 ",
        " 2147483647 -2147483647 -2147483648 "
    };

    int         expectedReturnValue[] = {
        3,
        3,
        4,
        12,
        4,
        5,
        13,
        13,
        36
    };

    int         (*test[NB_D_TESTS])() = {
        test_d_0,
        test_d_1,
        test_d_42,
        test_d_2147483647,
        test_d_neg_1,
        test_d_neg_42,
        test_d_neg_2147483647,
        test_d_neg_2147483648,
        test_d_2147483647_d_neg_2147483647_d_neg_2147483648
    };

    char*       input[] = {
        "\" %d \", 0",
        "\" %d \", 1",
        "\" %d \", 42",
        "\" %d \", 2147483647",
        "\" %d \", -1",
        "\" %d \", -42",
        "\" %d \", -2147483647",
        "\" %d \", -2147483648",
        "\" %d %d %d \", 2147483647, -2147483647, -2147483648"
    };

    printf(FG_YELLOW"test : %%d\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_D_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i]);
        }
    }
    printf("\n");
}
