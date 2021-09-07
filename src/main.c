#include "main.h"

#ifdef DEBUG
    int (*ft_printf)(const char *, ...) = printf;
#endif

int main(int ac, char *av[]) {

    char    *subset = "";
    int     specific = -1;

    if (ac != 1) {
        subset = av[1];
        if (ac != 2) {
            specific = atoi(av[2]);
        }
    }

    t_test  tests[NB_MANDATORY_TESTS] = {
        { .subset = "c", .test_subset = test_c },
        { .subset = "s", .test_subset = test_s },
        { .subset = "p", .test_subset = test_p },
        { .subset = "d", .test_subset = test_d },
        { .subset = "i", .test_subset = test_i },
        { .subset = "u", .test_subset = test_u },
        { .subset = "x", .test_subset = test_x },
        { .subset = "X", .test_subset = test_x_maj },
        { .subset = "percent", .test_subset = test_pc }
    };

    for (int i = 0; i < NB_MANDATORY_TESTS; i++) {

        if (
            strcmp(subset, "a") == 0 ||
            strcmp(subset, "m") == 0 ||
            strcmp(subset, tests[i].subset) == 0
        ) {
            tests[i].test_subset(specific != -1 ? specific : 0);
        }
    }

    return (0);
}
