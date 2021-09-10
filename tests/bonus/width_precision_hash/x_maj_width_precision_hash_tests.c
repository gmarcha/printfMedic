#include "main.h"

int test_x_maj_0_width_2_precision_1_hash(void) {
    return (ft_printf(" %#2.1X ", 0));
}

int test_x_maj_0_width_2_precision_2_hash(void) {
    return (ft_printf(" %#2.2X ", 0));
}

int test_x_maj_0_width_2_precision_3_hash(void) {
    return (ft_printf(" %#2.3X ", 0));
}

int test_x_maj_1_width_4_precision_1_hash(void) {
    return (ft_printf(" %#4.1X ", 1));
}

int test_x_maj_1_width_4_precision_2_hash(void) {
    return (ft_printf(" %#4.2X ", 1));
}

int test_x_maj_1_width_4_precision_3_hash(void) {
    return (ft_printf(" %#4.3X ", 1));
}

int test_x_maj_2147483647_width_11_precision_8_hash(void) {
    return (ft_printf(" %#11.8X ", 2147483647));
}

int test_x_maj_2147483647_width_11_precision_9_hash(void) {
    return (ft_printf(" %#11.9X ", 2147483647));
}

int test_x_maj_2147483647_width_11_precision_10_hash(void) {
    return (ft_printf(" %#11.10X ", 2147483647));
}

void test_x_maj_width_precision_hash(int testIndex) {

    char*      expectedOutput[] = {
        "  0 ",
        " 00 ",
        " 000 ",
        "  0X1 ",
        " 0X01 ",
        " 0X001 ",
        "  0X7FFFFFFF ",
        " 0X07FFFFFFF ",
        " 0X007FFFFFFF "
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

    int         (*test[NB_X_MAJ_WIDTH_PRECISION_HASH_TESTS])() = {
        test_x_maj_0_width_2_precision_1_hash,
        test_x_maj_0_width_2_precision_2_hash,
        test_x_maj_0_width_2_precision_3_hash,
        test_x_maj_1_width_4_precision_1_hash,
        test_x_maj_1_width_4_precision_2_hash,
        test_x_maj_1_width_4_precision_3_hash,
        test_x_maj_2147483647_width_11_precision_8_hash,
        test_x_maj_2147483647_width_11_precision_9_hash,
        test_x_maj_2147483647_width_11_precision_10_hash
    };

    char*       input[] = {
        "\" %#2.1X \", 0",
        "\" %#2.2X \", 0",
        "\" %#2.3X \", 0",
        "\" %#4.1X \", 1",
        "\" %#4.2X \", 1",
        "\" %#4.3X \", 1",
        "\" %#11.8X \", 2147483647",
        "\" %#11.9X \", 2147483647",
        "\" %#11.10X \", 2147483647"
    };

    printf(FG_YELLOW"test : %%X with width, precision and hash\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_X_MAJ_WIDTH_PRECISION_HASH_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_x_maj_width_precision_hash");
        }
    }
    printf("\n");
}

