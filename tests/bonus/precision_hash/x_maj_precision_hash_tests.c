#include "main.h"

int test_x_maj_0_precision_0_hash(void) {
    return (ft_printf(" %#.0X ", 0));
}

int test_x_maj_0_precision_1_hash(void) {
    return (ft_printf(" %#.1X ", 0));
}

int test_x_maj_0_precision_2_hash(void) {
    return (ft_printf(" %#.2X ", 0));
}

int test_x_maj_1_precision_1_hash(void) {
    return (ft_printf(" %#.1X ", 1));
}

int test_x_maj_1_precision_2_hash(void) {
    return (ft_printf(" %#.2X ", 1));
}

int test_x_maj_2147483647_precision_8_hash(void) {
    return (ft_printf(" %#.8X ", 2147483647));
}

int test_x_maj_2147483647_precision_9_hash(void) {
    return (ft_printf(" %#.9X ", 2147483647));
}

void test_x_maj_precision_hash(int testIndex) {

    char*      expectedOutput[] = {
        "  ",
        " 0 ",
        " 00 ",
        " 0X1 ",
        " 0X01 ",
        " 0X7FFFFFFF ",
        " 0X07FFFFFFF "
    };

    int         expectedReturnValue[] = {
        2,
        3,
        4,
        5,
        6,
        12,
        13
    };

    int         (*test[NB_X_MAJ_PRECISION_HASH_TESTS])() = {
        test_x_maj_0_precision_0_hash,
        test_x_maj_0_precision_1_hash,
        test_x_maj_0_precision_2_hash,
        test_x_maj_1_precision_1_hash,
        test_x_maj_1_precision_2_hash,
        test_x_maj_2147483647_precision_8_hash,
        test_x_maj_2147483647_precision_9_hash
    };

    char*       input[] = {
        "\" %#.0X \", 0",
        "\" %#.1X \", 0",
        "\" %#.2X \", 0",
        "\" %#.1X \", 1",
        "\" %#.2X \", 1",
        "\" %#.8X \", 2147483647",
        "\" %#.9X \", 2147483647"
    };

    printf(FG_YELLOW"test : %%X with precision and hash\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_X_MAJ_PRECISION_HASH_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_x_maj_precision_hash");
        }
    }
    printf("\n");
}
