#include "main.h"

int test_d_0_space(void) {
    return (ft_printf(" % d ", 0));
}

int test_d_2147483647_space(void) {
    return (ft_printf(" % d ", 2147483647));
}

int test_d_neg_1_space(void) {
    return (ft_printf(" % d ", -1));
}

int test_d_neg_2147483648_space(void) {
    return (ft_printf(" % d ", -2147483648));
}

void    test_d_space(int testIndex) {

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

    int         (*test[NB_D_SPACE_TESTS])() = {
        test_d_0_space,
        test_d_2147483647_space,
        test_d_neg_1_space,
        test_d_neg_2147483648_space
    };

    char*       input[] = {
        "\" % d \", 0",
        "\" % d \", 2147483647",
        "\" % d \", -1",
        "\" % d \", -2147483648"
    };

    printf(FG_YELLOW"test : %%d with space\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_D_SPACE_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_d_space");
        }
    }
    printf("\n");
}
