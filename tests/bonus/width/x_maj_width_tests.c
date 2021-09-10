#include "main.h"

int test_x_maj_0_width_1(void) {
    return (ft_printf(" %1X ", 0));
}

int test_x_maj_0_width_2(void) {
    return (ft_printf(" %2X ", 0));
}

int test_x_maj_1_width_1(void) {
    return (ft_printf(" %1X ", 1));
}

int test_x_maj_1_width_2(void) {
    return (ft_printf(" %2X ", 1));
}

int test_x_maj_42_width_2(void) {
    return (ft_printf(" %2X ", 42));
}

int test_x_maj_42_width_3(void) {
    return (ft_printf(" %3X ", 42));
}

int test_x_maj_2147483647_width_8(void) {
    return (ft_printf(" %8X ", 2147483647));
}

int test_x_maj_2147483647_width_9(void) {
    return (ft_printf(" %9X ", 2147483647));
}

void    test_x_maj_width(int testIndex) {

    char*      expectedOutput[] = {
        " 0 ",
        "  0 ",
        " 1 ",
        "  1 ",
        " 2A ",
        "  2A ",
        " 7FFFFFFF ",
        "  7FFFFFFF "
    };

    int         expectedReturnValue[] = {
        3,
        4,
        3,
        4,
        4,
        5,
        10,
        11
    };

    int         (*test[NB_X_MAJ_WIDTH_TESTS])() = {
        test_x_maj_0_width_1,
        test_x_maj_0_width_2,
        test_x_maj_1_width_1,
        test_x_maj_1_width_2,
        test_x_maj_42_width_2,
        test_x_maj_42_width_3,
        test_x_maj_2147483647_width_8,
        test_x_maj_2147483647_width_9
    };

    char*       input[] = {
        "\" %1X \", 0",
        "\" %2X \", 0",
        "\" %1X \", 1",
        "\" %2X \", 1",
        "\" %2X \", 42",
        "\" %3X \", 42",
        "\" %8X \", 2147483647",
        "\" %9X \", 2147483647"
    };

    printf(FG_YELLOW"test : %%X with width\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_X_MAJ_WIDTH_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_x_maj_width");
        }
    }
    printf("\n");
}
