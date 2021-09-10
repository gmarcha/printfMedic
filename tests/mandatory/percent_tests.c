#include "main.h"

int test_percent(void) {
    return (ft_printf(" %% "));
}

int test_percent_percent(void) {
    return (ft_printf(" %% %% "));
}

void    test_pc(int testIndex) {

    char*      expectedOutput[] = {
        " % ",
        " % % "
    };

    int         expectedReturnValue[] = {
        3,
        5
    };

    int         (*test[NB_PERCENT_TESTS])() = {
        test_percent,
        test_percent_percent
    };

    char*       input[] = {
        "\" %% \"",
        "\" %% %% \""
    };

    printf(FG_YELLOW"test : %%%%\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_PERCENT_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_pc");
        }
    }
    printf("\n");
}
