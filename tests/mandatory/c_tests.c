#include "main.h"

int test_c_0(void) {
    return (ft_printf(" %c ", 0));
}

int test_c_space(void) {
    return (ft_printf(" %c ", ' '));
}

int test_c_z(void) {
    return (ft_printf(" %c ", 'z'));
}

int test_c_space_c_0(void) {
    return (ft_printf(" %c %c ", ' ', 0));
}

void    test_c(int testIndex) {

    char*      expectedOutput[] = {
        " ",
        "   ",
        " z ",
        "   "
    };

    int         expectedReturnValue[] = {
        3,
        3,
        3,
        5
    };

    int         (*test[NB_C_TESTS])() = {
        test_c_0,
        test_c_space,
        test_c_z,
        test_c_space_c_0
    };

    char*       input[] = {
        "\" %c \", 0",
        "\" %c \", ' '",
        "\" %c \", 'z'",
        "\" %c %c \", ' ', 0"
    };

    printf(FG_YELLOW"test : %%c\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_C_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_c");
        }
    }
    printf("\n");
}
