#include "main.h"

int test_i_0_space(void) {
    return (ft_printf(" % i ", 0));
}

int test_i_2147483647_space(void) {
    return (ft_printf(" % i ", 2147483647));
}

int test_i_neg_1_space(void) {
    return (ft_printf(" % i ", -1));
}

int test_i_neg_2147483648_space(void) {
    return (ft_printf(" % i ", -2147483648));
}

void    test_i_space(int testIndex) {

    char*      expectedOutput[] = {
        "  0 ",
        "  2147483647 ",
        " -1 ",
        " -2147483648 "
    };

    int         expectedReturnValue[] = {
        4,
        13,
        4,
        13
    };

    int         (*test[NB_I_SPACE_TESTS])() = {
        test_i_0_space,
        test_i_2147483647_space,
        test_i_neg_1_space,
        test_i_neg_2147483648_space
    };

    char*       input[] = {
        "\" % i \", 0",
        "\" % i \", 2147483647",
        "\" % i \", -1",
        "\" % i \", -2147483648"
    };

    printf(FG_YELLOW"test : %%i with space\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_I_SPACE_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_i_space");
        }
    }
    printf("\n");
}

