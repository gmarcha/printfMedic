#include "main.h"

int test_p_null(void) {
    void *ptr = (void *)NULL;
    return (ft_printf(" %p ", ptr));
}

int test_p_non_null(void) {
    void *add = (void *)42;
    return (ft_printf(" %p ", add));
}

int test_p_non_null_p_null(void) {
    void *add = (void *)42;
    void *ptr = (void *)NULL;
    return (ft_printf(" %p %p ", add, ptr));
}

void    test_p(int testIndex) {

    char*      expectedOutput[] = {
        " 0x0 ",
        " 0x2a ",
        " 0x2a 0x0 "
    };

    int         expectedReturnValue[] = {
        5,
        6,
        10
    };

    int         (*test[NB_P_TESTS])() = {
        test_p_null,
        test_p_non_null,
        test_p_non_null_p_null
    };

    char*       input[] = {
        "\" %p \", NULL",
        "\" %p \", (void *)42",
        "\" %p %p \", (void *)42, NULL"
    };

    printf(FG_YELLOW"test : %%p\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_P_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_p");
        }
    }
    printf("\n");
}
