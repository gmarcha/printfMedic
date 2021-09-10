#include "main.h"

int test_s_null(void) {
    char *str = (char *)NULL;
    return (ft_printf(" %s ", str));
}

int test_s_empty(void) {
    return (ft_printf(" %s ", ""));
}

int test_s_helloWorld(void) {
    return (ft_printf(" %s ", "Hello World!"));
}

int test_s_helloWorld_s_null(void) {
    char *str = (char *)NULL;
    return (ft_printf(" %s %s ", "Hello World!", str));
}

void    test_s(int testIndex) {

    char*      expectedOutput[] = {
        " (null) ",
        "  ",
        " Hello World! ",
        " Hello World! (null) "
    };

    int         expectedReturnValue[] = {
        8,
        2,
        14,
        21
    };

    int         (*test[NB_S_TESTS])() = {
        test_s_null,
        test_s_empty,
        test_s_helloWorld,
        test_s_helloWorld_s_null
    };

    char*       input[] = {
        "\" %s \", NULL",
        "\" %s \", \"\"",
        "\" %s \", \"Hello World!\"",
        "\" %s %s \", \"Hello World!\", NULL"
    };

    printf(FG_YELLOW"test : %%s\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_S_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_s");
        }
    }
    printf("\n");
}
