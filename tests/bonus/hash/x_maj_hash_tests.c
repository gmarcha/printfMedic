#include "main.h"

int test_x_maj_0_hash(void) {
    return (ft_printf(" %#X ", 0));
}

int test_x_maj_1_hash(void) {
    return (ft_printf(" %#X ", 1));
}

int test_x_maj_42_hash(void) {
    return (ft_printf(" %#X ", 42));
}

int test_x_maj_2147483647_hash(void) {
    return (ft_printf(" %#X ", 2147483647));
}

void    test_x_maj_hash(int testIndex) {

    char*      expectedOutput[] = {
        " 0 ",
        " 0X1 ",
        " 0X2A ",
        " 0X7FFFFFFF "
    };

    int         expectedReturnValue[] = {
        3,
        5,
        6,
        12
    };

    int         (*test[NB_X_MAJ_HASH_TESTS])() = {
        test_x_maj_0_hash,
        test_x_maj_1_hash,
        test_x_maj_42_hash,
        test_x_maj_2147483647_hash
    };

    char*       input[] = {
        "\" %#X \", 0",
        "\" %#X \", 1",
        "\" %#X \", 42",
        "\" %#X \", 2147483647"
    };

    printf(FG_YELLOW"test : %%X with hash\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_X_MAJ_HASH_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_x_maj_hash");
        }
    }
    printf("\n");
}
