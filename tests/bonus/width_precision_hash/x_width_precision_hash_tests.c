#include "main.h"

int test_x_0_width_2_precision_1_hash(void) {
    return (ft_printf(" %#2.1x ", 0));
}

int test_x_0_width_2_precision_2_hash(void) {
    return (ft_printf(" %#2.2x ", 0));
}

int test_x_0_width_2_precision_3_hash(void) {
    return (ft_printf(" %#2.3x ", 0));
}

int test_x_1_width_4_precision_1_hash(void) {
    return (ft_printf(" %#4.1x ", 1));
}

int test_x_1_width_4_precision_2_hash(void) {
    return (ft_printf(" %#4.2x ", 1));
}

int test_x_1_width_4_precision_3_hash(void) {
    return (ft_printf(" %#4.3x ", 1));
}

int test_x_2147483647_width_11_precision_8_hash(void) {
    return (ft_printf(" %#11.8x ", 2147483647));
}

int test_x_2147483647_width_11_precision_9_hash(void) {
    return (ft_printf(" %#11.9x ", 2147483647));
}

int test_x_2147483647_width_11_precision_10_hash(void) {
    return (ft_printf(" %#11.10x ", 2147483647));
}

void test_x_width_precision_hash(int testIndex) {

    char*      expectedOutput[] = {
        "  0 ",
        " 00 ",
        " 000 ",
        "  0x1 ",
        " 0x01 ",
        " 0x001 ",
        "  0x7fffffff ",
        " 0x07fffffff ",
        " 0x007fffffff "
    };

    int         expectedReturnValue[] = {
        4,
        4,
        5,
        6,
        6,
        7,
        13,
        13,
        14
    };

    int         (*test[NB_X_WIDTH_PRECISION_HASH_TESTS])() = {
        test_x_0_width_2_precision_1_hash,
        test_x_0_width_2_precision_2_hash,
        test_x_0_width_2_precision_3_hash,
        test_x_1_width_4_precision_1_hash,
        test_x_1_width_4_precision_2_hash,
        test_x_1_width_4_precision_3_hash,
        test_x_2147483647_width_11_precision_8_hash,
        test_x_2147483647_width_11_precision_9_hash,
        test_x_2147483647_width_11_precision_10_hash
    };

    char*       input[] = {
        "\" %#2.1x \", 0",
        "\" %#2.2x \", 0",
        "\" %#2.3x \", 0",
        "\" %#4.1x \", 1",
        "\" %#4.2x \", 1",
        "\" %#4.3x \", 1",
        "\" %#11.8x \", 2147483647",
        "\" %#11.9x \", 2147483647",
        "\" %#11.10x \", 2147483647"
    };

    printf(FG_YELLOW"test : %%x with width, precision and hash\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_X_WIDTH_PRECISION_HASH_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_x_width_precision_hash");
        }
    }
    printf("\n");
}

