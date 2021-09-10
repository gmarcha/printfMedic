#include "main.h"

int test_s_null_width_8_dash(void) {
    char *ptr = NULL;
    return (ft_printf(" %-8s ", ptr));
}

int test_s_helloWorld_width_13_dash(void) {
    return (ft_printf(" %-13s ", "Hello World!"));
}

int test_s_helloWorld_width_14_dash(void) {
    return (ft_printf(" %-14s ", "Hello World!"));
}

void    test_s_width_dash(int testIndex) {

    char*      expectedOutput[] = {
        " (null)   ",
        " Hello World!  ",
        " Hello World!   "
    };

    int         expectedReturnValue[] = {
        10,
        15,
        16
    };

    int         (*test[NB_S_WIDTH_DASH_TESTS])() = {
        test_s_null_width_8_dash,
        test_s_helloWorld_width_13_dash,
        test_s_helloWorld_width_14_dash
    };

    char*       input[] = {
        "\" %8s \", (char *)NULL",
        "\" %-13s \", \"Hello World!\"",
        "\" %-14s \", \"Hello World!\""
    };

    printf(FG_YELLOW"test : %%s with width and dash\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_S_WIDTH_DASH_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_s_width_dash");
        }
    }
    printf("\n");
}
