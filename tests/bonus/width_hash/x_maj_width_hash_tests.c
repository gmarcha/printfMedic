#include "main.h"

int test_x_maj_0_width_1_hash(void) {
    return (ft_printf(" %#1X ", 0));
}

int test_x_maj_0_width_2_hash(void) {
    return (ft_printf(" %#2X ", 0));
}

int test_x_maj_1_width_3_hash(void) {
    return (ft_printf(" %#3X ", 1));
}

int test_x_maj_1_width_4_hash(void) {
    return (ft_printf(" %#4X ", 1));
}

int test_x_maj_2147483647_width_10_hash(void) {
    return (ft_printf(" %#10X ", 2147483647));
}

int test_x_maj_2147483647_width_11_hash(void) {
    return (ft_printf(" %#11X ", 2147483647));
}

void test_x_maj_width_hash(int testIndex) {

    char*      expectedOutput[] = {
        " 0 ",
        "  0 ",
        " 0X1 ",
        "  0X1 ",
        " 0X7FFFFFFF ",
        "  0X7FFFFFFF "
    };

    int         expectedReturnValue[] = {
        3,
        4,
        5,
        6,
        12,
        13
    };

    int         (*test[NB_X_MAJ_WIDTH_HASH_TESTS])() = {
        test_x_maj_0_width_1_hash,
        test_x_maj_0_width_2_hash,
        test_x_maj_1_width_3_hash,
        test_x_maj_1_width_4_hash,
        test_x_maj_2147483647_width_10_hash,
        test_x_maj_2147483647_width_11_hash
    };

    char*       input[] = {
        "\" %#1X \", 0",
        "\" %#2X \", 0",
        "\" %#3X \", 1",
        "\" %#4X \", 1",
        "\" %#10X \", 2147483647",
        "\" %#11X \", 2147483647"
    };

    printf(FG_YELLOW"test : %%X with width and hash\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_X_MAJ_WIDTH_HASH_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_x_maj_width_hash");
        }
    }
    printf("\n");
}
