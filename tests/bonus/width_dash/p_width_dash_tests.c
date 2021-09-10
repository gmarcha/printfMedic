#include "main.h"

int test_p_null_width_4_dash(void) {
    void *ptr = (void *)NULL;
    return (ft_printf(" %-4p ", ptr));
}

int test_p_null_width_10_dash(void) {
    void *ptr = (void *)NULL;
    return (ft_printf(" %-10p ", ptr));
}

int test_p_non_null_width_5_dash(void) {
    void *ptr = (void *)42;
    return (ft_printf(" %-5p ", ptr));
}

int test_p_non_null_width_10_dash(void) {
    void *ptr = (void *)42;
    return (ft_printf(" %-10p ", ptr));
}

void    test_p_width_dash(int testIndex) {

    char*      expectedOutput[] = {
        " 0x0  ",
        " 0x0        ",
        " 0x2a  ",
        " 0x2a       "
    };

    int         expectedReturnValue[] = {
        6,
        12,
        7,
        12
    };

    int         (*test[NB_P_WIDTH_DASH_TESTS])() = {
        test_p_null_width_4_dash,
        test_p_null_width_10_dash,
        test_p_non_null_width_5_dash,
        test_p_non_null_width_10_dash
    };

    char*       input[] = {
        "\" %-4p \", NULL",
        "\" %-10p \", NULL",
        "\" %-5p \", (void *)42",
        "\" %-10p \", (void *)42"
    };

    printf(FG_YELLOW"test : %%p with witdh and dash\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_P_WIDTH_DASH_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_p_width_dash");
        }
    }
    printf("\n");
}
