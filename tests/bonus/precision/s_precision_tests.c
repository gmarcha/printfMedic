#include "main.h"

int test_s_null_precision_0(void) {
    char *ptr = NULL;
    return (ft_printf(" %.0s ", ptr));
}

int test_s_null_precision_5(void) {
    char *ptr = NULL;
    return (ft_printf(" %.5s ", ptr));
}

int test_s_null_precision_6(void) {
    char *ptr = NULL;
    return (ft_printf(" %.6s ", ptr));
}

int test_s_helloWorld_precision_0(void) {
    return (ft_printf(" %.0s ", "Hello World!"));
}

int test_s_helloWorld_precision_11(void) {
    return (ft_printf(" %.11s ", "Hello World!"));
}

int test_s_helloWorld_precision_12(void) {
    return (ft_printf(" %.12s ", "Hello World!"));
}

int test_s_helloWorld_precision_13(void) {
    return (ft_printf(" %.13s ", "Hello World!"));
}

void    test_s_precision(int testIndex) {

    char*      expectedOutput[] = {
        "  ",
        " (null ",
        " (null) ",
        "  ",
        " Hello World ",
        " Hello World! ",
        " Hello World! "
    };

    int         expectedReturnValue[] = {
        2,
        7,
        8,
        2,
        13,
        14,
        14
    };

    int         (*test[NB_S_PRECISION_TESTS])() = {
        test_s_null_precision_0,
        test_s_null_precision_5,
        test_s_null_precision_6,
        test_s_helloWorld_precision_0,
        test_s_helloWorld_precision_11,
        test_s_helloWorld_precision_12,
        test_s_helloWorld_precision_13
    };

    char*       input[] = {
        "\" %.0s \", (char *)NULL",
        "\" %.5s \", (char *)NULL",
        "\" %.6s \", (char *)NULL",
        "\" %.0s \", \"Hello World!\"",
        "\" %.11s \", \"Hello World!\"",
        "\" %.12s \", \"Hello World!\"",
        "\" %.13s \", \"Hello World!\""
    };

    printf(FG_YELLOW"test : %%s with precision\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_S_PRECISION_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_s_precision");
        }
    }
    printf("\n");
}
