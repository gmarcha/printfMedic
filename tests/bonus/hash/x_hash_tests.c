#include "main.h"

int test_x_0_hash(void) {
    return (ft_printf(" %#x ", 0));
}

int test_x_1_hash(void) {
    return (ft_printf(" %#x ", 1));
}

int test_x_42_hash(void) {
    return (ft_printf(" %#x ", 42));
}

int test_x_2147483647_hash(void) {
    return (ft_printf(" %#x ", 2147483647));
}

void    test_x_hash(int testIndex) {

    char*      expectedOutput[] = {
        " 0 ",
        " 0x1 ",
        " 0x2a ",
        " 0x7fffffff "
    };

    int         expectedReturnValue[] = {
        3,
        5,
        6,
        12
    };

    int         (*test[NB_X_HASH_TESTS])() = {
        test_x_0_hash,
        test_x_1_hash,
        test_x_42_hash,
        test_x_2147483647_hash
    };

    char*       input[] = {
        "\" %#x \", 0",
        "\" %#x \", 1",
        "\" %#x \", 42",
        "\" %#x \", 2147483647"
    };

    printf(FG_YELLOW"test : %%x with hash\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_X_HASH_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_x_hash");
        }
    }
    printf("\n");
}
