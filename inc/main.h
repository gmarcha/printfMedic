#ifndef MAIN_H
# define MAIN_H

# include "tests.h"
# include "c_tests.h"
# include "s_tests.h"
# include "p_tests.h"
# include "d_tests.h"
# include "i_tests.h"
# include "u_tests.h"
# include "x_tests.h"
# include "x_maj_tests.h"
# include "percent_tests.h"

# define NB_MANDATORY_TESTS 9

typedef struct s_test {

    char*           subset;
    void            (*test_subset) (int);
}                   t_test;

#endif // MAIN_H
