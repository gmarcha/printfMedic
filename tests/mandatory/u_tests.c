#include "main.h"

int test_u_0(void) {
    return (ft_printf(" %u ", 0));
}

int test_u_1(void) {
    return (ft_printf(" %u ", 1));
}

int test_u_42(void) {
    return (ft_printf(" %u ", 42));
}

int test_u_2147483647(void) {
    return (ft_printf(" %u ", 2147483647));
}

int test_u_2147483647_u_0(void) {
    return (ft_printf(" %u %u ", 2147483647, 0));
}

void    test_u(int testIndex) {

    char*      expectedOutput[] = {
        " 0 ",
        " 1 ",
        " 42 ",
        " 2147483647 ",
        " 2147483647 0 "
    };

    int         expectedReturnValue[] = {
        3,
        3,
        4,
        12,
        14
    };

    int         (*test[NB_U_TESTS])() = {
        test_u_0,
        test_u_1,
        test_u_42,
        test_u_2147483647,
        test_u_2147483647_u_0
    };

    char*       input[] = {
        "\" %u \", 0",
        "\" %u \", 1",
        "\" %u \", 42",
        "\" %u \", 2147483647",
        "\" %u %u \", 2147483647, 0"
    };

    printf(FG_YELLOW"test : %%u\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_U_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_u");
        }
    }
    printf("\n");
}
