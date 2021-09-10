#include "main.h"

int test_x_0_precision_0_hash(void) {
    return (ft_printf(" %#.0x ", 0));
}

int test_x_0_precision_1_hash(void) {
    return (ft_printf(" %#.1x ", 0));
}

int test_x_0_precision_2_hash(void) {
    return (ft_printf(" %#.2x ", 0));
}

int test_x_1_precision_1_hash(void) {
    return (ft_printf(" %#.1x ", 1));
}

int test_x_1_precision_2_hash(void) {
    return (ft_printf(" %#.2x ", 1));
}

int test_x_2147483647_precision_8_hash(void) {
    return (ft_printf(" %#.8x ", 2147483647));
}

int test_x_2147483647_precision_9_hash(void) {
    return (ft_printf(" %#.9x ", 2147483647));
}

void test_x_precision_hash(int testIndex) {

    char*      expectedOutput[] = {
        "  ",
        " 0 ",
        " 00 ",
        " 0x1 ",
        " 0x01 ",
        " 0x7fffffff ",
        " 0x07fffffff "
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

    int         (*test[NB_X_PRECISION_HASH_TESTS])() = {
        test_x_0_precision_0_hash,
        test_x_0_precision_1_hash,
        test_x_0_precision_2_hash,
        test_x_1_precision_1_hash,
        test_x_1_precision_2_hash,
        test_x_2147483647_precision_8_hash,
        test_x_2147483647_precision_9_hash
    };

    char*       input[] = {
        "\" %#.0x \", 0",
        "\" %#.1x \", 0",
        "\" %#.2x \", 0",
        "\" %#.1x \", 1",
        "\" %#.2x \", 1",
        "\" %#.8x \", 2147483647",
        "\" %#.9x \", 2147483647"
    };

    printf(FG_YELLOW"test : %%x with precision and hash\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_X_PRECISION_HASH_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_x_precision_hash");
        }
    }
    printf("\n");
}
