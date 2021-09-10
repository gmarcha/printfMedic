#include "main.h"

int test_x_0(void) {
    return (ft_printf(" %x ", 0));
}

int test_x_1(void) {
    return (ft_printf(" %x ", 1));
}

int test_x_42(void) {
    return (ft_printf(" %x ", 42));
}

int test_x_2147483647(void) {
    return (ft_printf(" %x ", 2147483647));
}

int test_x_2147483647_x_0(void) {
    return (ft_printf(" %x %x ", 2147483647, 0));
}

void    test_x(int testIndex) {

    char*      expectedOutput[] = {
        " 0 ",
        " 1 ",
        " 2a ",
        " 7fffffff ",
        " 7fffffff 0 "
    };

    int         expectedReturnValue[] = {
        3,
        3,
        4,
        10,
        12
    };

    int         (*test[NB_X_TESTS])() = {
        test_x_0,
        test_x_1,
        test_x_42,
        test_x_2147483647,
        test_x_2147483647_x_0
    };

    char*       input[] = {
        "\" %x \", 0",
        "\" %x \", 1",
        "\" %x \", 42",
        "\" %x \", 2147483647",
        "\" %x %x \", 2147483647, 0"
    };

    printf(FG_YELLOW"test : %%x\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_X_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_x");
        }
    }
    printf("\n");
}
