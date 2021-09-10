#include "main.h"

int test_p_null_width_3(void) {
    void *ptr = (void *)NULL;
    return (ft_printf(" %3p ", ptr));
}

int test_p_null_width_4(void) {
    void *ptr = (void *)NULL;
    return (ft_printf(" %4p ", ptr));
}

int test_p_non_null_width_4(void) {
    void *ptr = (void *)42;
    return (ft_printf(" %4p ", ptr));
}

int test_p_non_null_width_5(void) {
    void *ptr = (void *)42;
    return (ft_printf(" %5p ", ptr));
}

void    test_p_width(int testIndex) {

    char*      expectedOutput[] = {
        " 0x0 ",
        "  0x0 ",
        " 0x2a ",
        "  0x2a "
    };

    int         expectedReturnValue[] = {
        5,
        6,
        6,
        7
    };

    int         (*test[NB_P_WIDTH_TESTS])() = {
        test_p_null_width_3,
        test_p_null_width_4,
        test_p_non_null_width_4,
        test_p_non_null_width_5
    };

    char*       input[] = {
        "\" %3p \", NULL",
        "\" %4p \", NULL",
        "\" %4p \", (void *)42",
        "\" %5p \", (void *)42"
    };

    printf(FG_YELLOW"test : %%p with witdh\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_P_WIDTH_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_p_width");
        }
    }
    printf("\n");
}
