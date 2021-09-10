#include "main.h"

int test_i_0(void) {
    return (ft_printf(" %i ", 0));
}

int test_i_1(void) {
    return (ft_printf(" %i ", 1));
}

int test_i_42(void) {
    return (ft_printf(" %i ", 42));
}

int test_i_2147483647(void) {
    return (ft_printf(" %i ", 2147483647));
}

int test_i_neg_1(void) {
    return (ft_printf(" %i ", -1));
}

int test_i_neg_42(void) {
    return (ft_printf(" %i ", -42));
}

int test_i_neg_2147483647(void) {
    return (ft_printf(" %i ", -2147483647));
}

int test_i_neg_2147483648(void) {
    return (ft_printf(" %i ", -2147483648));
}

int test_i_2147483647_i_neg_2147483647_i_neg_2147483648(void) {
    return (ft_printf(" %i %i %i ", 2147483647, -2147483647, -2147483648));
}

void    test_i(int testIndex) {

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

    int         (*test[NB_I_TESTS])() = {
        test_i_0,
        test_i_1,
        test_i_42,
        test_i_2147483647,
        test_i_neg_1,
        test_i_neg_42,
        test_i_neg_2147483647,
        test_i_neg_2147483648,
        test_i_2147483647_i_neg_2147483647_i_neg_2147483648
    };

    char*       input[] = {
        "\" %i \", 0",
        "\" %i \", 1",
        "\" %i \", 42",
        "\" %i \", 2147483647",
        "\" %i \", -1",
        "\" %i \", -42",
        "\" %i \", -2147483647",
        "\" %i \", -2147483648",
        "\" %i %i %i \", 2147483647, -2147483647, -2147483648"
    };

    printf(FG_YELLOW"test : %%i\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_I_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_i");
        }
    }
    printf("\n");
}
