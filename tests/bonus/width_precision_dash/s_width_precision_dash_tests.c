#include "main.h"

int test_s_helloWorld_width_10_precision_8_dash(void) {
    return (ft_printf(" %-10.8s ", "Hello World!"));
}

int test_s_helloWorld_width_12_precision_8_dash(void) {
    return (ft_printf(" %-12.8s ", "Hello World!"));
}

int test_s_helloWorld_width_14_precision_8_dash(void) {
    return (ft_printf(" %-14.8s ", "Hello World!"));
}

int test_s_helloWorld_width_10_precision_10_dash(void) {
    return (ft_printf(" %-10.10s ", "Hello World!"));
}

int test_s_helloWorld_width_12_precision_10_dash(void) {
    return (ft_printf(" %-12.10s ", "Hello World!"));
}

int test_s_helloWorld_width_14_precision_10_dash(void) {
    return (ft_printf(" %-14.10s ", "Hello World!"));
}

int test_s_helloWorld_width_10_precision_12_dash(void) {
    return (ft_printf(" %-10.12s ", "Hello World!"));
}

int test_s_helloWorld_width_12_precision_12_dash(void) {
    return (ft_printf(" %-12.12s ", "Hello World!"));
}

int test_s_helloWorld_width_14_precision_12_dash(void) {
    return (ft_printf(" %-14.12s ", "Hello World!"));
}

int test_s_helloWorld_width_16_precision_0_dash(void) {
    return (ft_printf(" %-16.0s ", "Hello World!"));
}

void    test_s_width_precision_dash(int testIndex) {

    char*      expectedOutput[] = {
        " Hello Wo   ",
        " Hello Wo     ",
        " Hello Wo       ",
        " Hello Worl ",
        " Hello Worl   ",
        " Hello Worl     ",
        " Hello World! ",
        " Hello World! ",
        " Hello World!   ",
        "                  "
    };

    int         expectedReturnValue[] = {
        12,
        14,
        16,
        12,
        14,
        16,
        14,
        14,
        16,
        18
    };

    int         (*test[NB_S_WIDTH_PRECISION_DASH_TESTS])() = {
        test_s_helloWorld_width_10_precision_8_dash,
        test_s_helloWorld_width_12_precision_8_dash,
        test_s_helloWorld_width_14_precision_8_dash,
        test_s_helloWorld_width_10_precision_10_dash,
        test_s_helloWorld_width_12_precision_10_dash,
        test_s_helloWorld_width_14_precision_10_dash,
        test_s_helloWorld_width_10_precision_12_dash,
        test_s_helloWorld_width_12_precision_12_dash,
        test_s_helloWorld_width_14_precision_12_dash,
        test_s_helloWorld_width_16_precision_0_dash
    };

    char*       input[] = {
        "\" %-10.8s \", \"Hello World!\"",
        "\" %-12.8s \", \"Hello World!\"",
        "\" %-14.8s \", \"Hello World!\"",
        "\" %-10.10s \", \"Hello World!\"",
        "\" %-12.10s \", \"Hello World!\"",
        "\" %-14.10s \", \"Hello World!\"",
        "\" %-10.12s \", \"Hello World!\"",
        "\" %-12.12s \", \"Hello World!\"",
        "\" %-14.12s \", \"Hello World!\"",
        "\" %-16.0s \", \"Hello World!\""
    };

    printf(FG_YELLOW"test : %%s with width, precision and dash\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_S_WIDTH_PRECISION_DASH_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_s_width_precision_dash");
        }
    }
    printf("\n");
}

