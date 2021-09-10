#include "main.h"

int test_x_0_width_1(void) {
    return (ft_printf(" %1x ", 0));
}

int test_x_0_width_2(void) {
    return (ft_printf(" %2x ", 0));
}

int test_x_1_width_1(void) {
    return (ft_printf(" %1x ", 1));
}

int test_x_1_width_2(void) {
    return (ft_printf(" %2x ", 1));
}

int test_x_42_width_2(void) {
    return (ft_printf(" %2x ", 42));
}

int test_x_42_width_3(void) {
    return (ft_printf(" %3x ", 42));
}

int test_x_2147483647_width_8(void) {
    return (ft_printf(" %8x ", 2147483647));
}

int test_x_2147483647_width_9(void) {
    return (ft_printf(" %9x ", 2147483647));
}

void    test_x_width(int testIndex) {

    char*      expectedOutput[] = {
        " 0 ",
        "  0 ",
        " 1 ",
        "  1 ",
        " 2a ",
        "  2a ",
        " 7fffffff ",
        "  7fffffff "
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

    int         (*test[NB_X_WIDTH_TESTS])() = {
        test_x_0_width_1,
        test_x_0_width_2,
        test_x_1_width_1,
        test_x_1_width_2,
        test_x_42_width_2,
        test_x_42_width_3,
        test_x_2147483647_width_8,
        test_x_2147483647_width_9
    };

    char*       input[] = {
        "\" %1x \", 0",
        "\" %2x \", 0",
        "\" %1x \", 1",
        "\" %2x \", 1",
        "\" %2x \", 42",
        "\" %3x \", 42",
        "\" %8x \", 2147483647",
        "\" %9x \", 2147483647"
    };

    printf(FG_YELLOW"test : %%x with width\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_X_WIDTH_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_x_width");
        }
    }
    printf("\n");
}
