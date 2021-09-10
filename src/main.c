#include "main.h"

//#ifdef DEBUG
//    int (*ft_printf)(const char *, ...) = printf;
//#endif

int main(int ac, char *av[]) {

    char    *subset = "";
    int     specific = -1;

    if (ac != 1) {
        subset = av[1];
        if (ac != 2) {
            specific = atoi(av[2]);
        }
    }

    t_test  mandatory_tests[NB_MANDATORY_TESTS] = {

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

    t_test  bonus_tests[NB_BONUS_TESTS] = {

        { .subset = "c_width", .test_subset = test_c_width },
        { .subset = "s_width", .test_subset = test_s_width },
        { .subset = "p_width", .test_subset = test_p_width },
        { .subset = "d_width", .test_subset = test_d_width },
        { .subset = "i_width", .test_subset = test_i_width },
        { .subset = "u_width", .test_subset = test_u_width },
        { .subset = "x_width", .test_subset = test_x_width },
        { .subset = "X_width", .test_subset = test_x_maj_width },

        { .subset = "c_width_dash", .test_subset = test_c_width_dash },
        { .subset = "s_width_dash", .test_subset = test_s_width_dash },
        { .subset = "p_width_dash", .test_subset = test_p_width_dash },
        { .subset = "d_width_dash", .test_subset = test_d_width_dash },
        { .subset = "i_width_dash", .test_subset = test_i_width_dash },
        { .subset = "u_width_dash", .test_subset = test_u_width_dash },
        { .subset = "x_width_dash", .test_subset = test_x_width_dash },
        { .subset = "X_width_dash", .test_subset = test_x_maj_width_dash },

        { .subset = "d_width_zero", .test_subset = test_d_width_zero },
        { .subset = "i_width_zero", .test_subset = test_i_width_zero },
        { .subset = "u_width_zero", .test_subset = test_u_width_zero },
        { .subset = "x_width_zero", .test_subset = test_x_width_zero },
        { .subset = "X_width_zero", .test_subset = test_x_maj_width_zero },

        { .subset = "s_precision", .test_subset = test_s_precision },
        { .subset = "d_precision", .test_subset = test_d_precision },
        { .subset = "i_precision", .test_subset = test_i_precision },
        { .subset = "u_precision", .test_subset = test_u_precision },
        { .subset = "x_precision", .test_subset = test_x_precision },
        { .subset = "X_precision", .test_subset = test_x_maj_precision },

        { .subset = "s_width_precision", .test_subset = test_s_width_precision },
        { .subset = "d_width_precision", .test_subset = test_d_width_precision },
        { .subset = "i_width_precision", .test_subset = test_i_width_precision },
        { .subset = "u_width_precision", .test_subset = test_u_width_precision },
        { .subset = "x_width_precision", .test_subset = test_x_width_precision },
        { .subset = "X_width_precision", .test_subset = test_x_maj_width_precision },

        { .subset = "s_width_precision_dash", .test_subset = test_s_width_precision_dash },
        { .subset = "d_width_precision_dash", .test_subset = test_d_width_precision_dash },
        { .subset = "i_width_precision_dash", .test_subset = test_i_width_precision_dash },
        { .subset = "u_width_precision_dash", .test_subset = test_u_width_precision_dash },
        { .subset = "x_width_precision_dash", .test_subset = test_x_width_precision_dash },
        { .subset = "X_width_precision_dash", .test_subset = test_x_maj_width_precision_dash },

        { .subset = "d_space", .test_subset = test_d_space },
        { .subset = "i_space", .test_subset = test_i_space },
    
        { .subset = "d_width_space", .test_subset = test_d_width_space },
        { .subset = "i_width_space", .test_subset = test_i_width_space },

        { .subset = "d_width_dash_space", .test_subset = test_d_width_dash_space },
        { .subset = "i_width_dash_space", .test_subset = test_i_width_dash_space },

        { .subset = "d_precision_space", .test_subset = test_d_precision_space },
        { .subset = "i_precision_space", .test_subset = test_i_precision_space },

        { .subset = "d_width_precision_space", .test_subset = test_d_width_precision_space },
        { .subset = "i_width_precision_space", .test_subset = test_i_width_precision_space },

        { .subset = "d_width_precision_dash_space", .test_subset = test_d_width_precision_dash_space },
        { .subset = "i_width_precision_dash_space", .test_subset = test_i_width_precision_dash_space },

        { .subset = "d_plus", .test_subset = test_d_plus },
        { .subset = "i_plus", .test_subset = test_i_plus },
    
        { .subset = "d_width_plus", .test_subset = test_d_width_plus },
        { .subset = "i_width_plus", .test_subset = test_i_width_plus },
    
        { .subset = "d_width_dash_plus", .test_subset = test_d_width_dash_plus },
        { .subset = "i_width_dash_plus", .test_subset = test_i_width_dash_plus },

        { .subset = "d_precision_plus", .test_subset = test_d_precision_plus },
        { .subset = "i_precision_plus", .test_subset = test_i_precision_plus },

        { .subset = "d_width_precision_plus", .test_subset = test_d_width_precision_plus },
        { .subset = "i_width_precision_plus", .test_subset = test_i_width_precision_plus },

        { .subset = "d_width_precision_dash_plus", .test_subset = test_d_width_precision_dash_plus },
        { .subset = "i_width_precision_dash_plus", .test_subset = test_i_width_precision_dash_plus },

        { .subset = "x_hash", .test_subset = test_x_hash },
        { .subset = "X_hash", .test_subset = test_x_maj_hash },

        { .subset = "x_width_hash", .test_subset = test_x_width_hash },
        { .subset = "X_width_hash", .test_subset = test_x_maj_width_hash },

        { .subset = "x_width_dash_hash", .test_subset = test_x_width_dash_hash },
        { .subset = "X_width_dash_hash", .test_subset = test_x_maj_width_dash_hash },

        { .subset = "x_precision_hash", .test_subset = test_x_precision_hash },
        { .subset = "X_precision_hash", .test_subset = test_x_maj_precision_hash },

        { .subset = "x_width_precision_hash", .test_subset = test_x_width_precision_hash },
        { .subset = "X_width_precision_hash", .test_subset = test_x_maj_width_precision_hash },

        { .subset = "x_width_precision_dash_hash", .test_subset = test_x_width_precision_dash_hash },
        { .subset = "X_width_precision_dash_hash", .test_subset = test_x_maj_width_precision_dash_hash }
    };

    for (int i = 0; i < NB_MANDATORY_TESTS; i++) {

        if (
            strcmp(subset, "a") == 0 ||
            strcmp(subset, "m") == 0 ||
            strcmp(subset, mandatory_tests[i].subset) == 0
        ) {
            mandatory_tests[i].test_subset(specific != -1 ? specific : 0);
        }
    }

    for (int i = 0; i < NB_BONUS_TESTS; i++) {

        if (
            strcmp(subset, "a") == 0 ||
            strcmp(subset, "b") == 0 ||
            strcmp(subset, bonus_tests[i].subset) == 0
        ) {
            bonus_tests[i].test_subset(specific != -1 ? specific : 0);
        }
    }

    return (0);
}
