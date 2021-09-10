#include "main.h"

int test_s_null_width_6(void) {
    char *ptr = NULL;
    return (ft_printf(" %6s ", ptr));
}

int test_s_null_width_7(void) {
    char *ptr = NULL;
    return (ft_printf(" %7s ", ptr));
}

int test_s_helloWorld_width_11(void) {
    return (ft_printf(" %11s ", "Hello World!"));
}

int test_s_helloWorld_width_12(void) {
    return (ft_printf(" %12s ", "Hello World!"));
}

int test_s_helloWorld_width_13(void) {
    return (ft_printf(" %13s ", "Hello World!"));
}

void    test_s_width(int testIndex) {

    char*      expectedOutput[] = {
        " (null) ",
        "  (null) ",
        " Hello World! ",
        " Hello World! ",
        "  Hello World! "
    };

    int         expectedReturnValue[] = {
        8,
        9,
        14,
        14,
        15
    };

    int         (*test[NB_S_WIDTH_TESTS])() = {
        test_s_null_width_6,
        test_s_null_width_7,
        test_s_helloWorld_width_11,
        test_s_helloWorld_width_12,
        test_s_helloWorld_width_13
    };

    char*       input[] = {
        "\" %6s \", (char *)NULL",
        "\" %7s \", (char *)NULL",
        "\" %11s \", \"Hello World!\"",
        "\" %12s \", \"Hello World!\"",
        "\" %13s \", \"Hello World!\""
    };

    printf(FG_YELLOW"test : %%s with width\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_S_WIDTH_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_s_width");
        }
    }
    printf("\n");
}
