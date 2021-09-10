#include "main.h"

int test_x_maj_0(void) {
    return (ft_printf(" %X ", 0));
}

int test_x_maj_1(void) {
    return (ft_printf(" %X ", 1));
}

int test_x_maj_42(void) {
    return (ft_printf(" %X ", 42));
}

int test_x_maj_2147483647(void) {
    return (ft_printf(" %X ", 2147483647));
}

int test_x_maj_2147483647_x_maj_0(void) {
    return (ft_printf(" %X %X ", 2147483647, 0));
}

void    test_x_maj(int testIndex) {

    char*      expectedOutput[] = {
        " 0 ",
        " 1 ",
        " 2A ",
        " 7FFFFFFF ",
        " 7FFFFFFF 0 "
    };

    int         expectedReturnValue[] = {
        3,
        3,
        4,
        10,
        12
    };

    int         (*test[NB_X_MAJ_TESTS])() = {
        test_x_maj_0,
        test_x_maj_1,
        test_x_maj_42,
        test_x_maj_2147483647,
        test_x_maj_2147483647_x_maj_0
    };

    char*       input[] = {
        "\" %X \", 0",
        "\" %X \", 1",
        "\" %X \", 42",
        "\" %X \", 2147483647",
        "\" %X %X \", 2147483647, 0"
    };

    printf(FG_YELLOW"test : %%X\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_X_MAJ_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_x_maj");
        }
    }
    printf("\n");
}
