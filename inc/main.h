#ifndef MAIN_H
# define MAIN_H

# include "tests.h"

# include "mandatory/c_tests.h"
# include "mandatory/s_tests.h"
# include "mandatory/p_tests.h"
# include "mandatory/d_tests.h"
# include "mandatory/i_tests.h"
# include "mandatory/u_tests.h"
# include "mandatory/x_tests.h"
# include "mandatory/x_maj_tests.h"
# include "mandatory/percent_tests.h"

# include "bonus/width/c_width_tests.h"
# include "bonus/width/s_width_tests.h"
# include "bonus/width/p_width_tests.h"
# include "bonus/width/d_width_tests.h"
# include "bonus/width/i_width_tests.h"
# include "bonus/width/u_width_tests.h"
# include "bonus/width/x_width_tests.h"
# include "bonus/width/x_maj_width_tests.h"

# include "bonus/width_dash/c_width_dash_tests.h"
# include "bonus/width_dash/s_width_dash_tests.h"
# include "bonus/width_dash/p_width_dash_tests.h"
# include "bonus/width_dash/d_width_dash_tests.h"
# include "bonus/width_dash/i_width_dash_tests.h"
# include "bonus/width_dash/u_width_dash_tests.h"
# include "bonus/width_dash/x_width_dash_tests.h"
# include "bonus/width_dash/x_maj_width_dash_tests.h"

# include "bonus/width_zero/d_width_zero_tests.h"
# include "bonus/width_zero/i_width_zero_tests.h"
# include "bonus/width_zero/u_width_zero_tests.h"
# include "bonus/width_zero/x_width_zero_tests.h"
# include "bonus/width_zero/x_maj_width_zero_tests.h"

# include "bonus/precision/s_precision_tests.h"
# include "bonus/precision/d_precision_tests.h"
# include "bonus/precision/i_precision_tests.h"
# include "bonus/precision/u_precision_tests.h"
# include "bonus/precision/x_precision_tests.h"
# include "bonus/precision/x_maj_precision_tests.h"

# include "bonus/width_precision/s_width_precision_tests.h"
# include "bonus/width_precision/d_width_precision_tests.h"
# include "bonus/width_precision/i_width_precision_tests.h"
# include "bonus/width_precision/u_width_precision_tests.h"
# include "bonus/width_precision/x_width_precision_tests.h"
# include "bonus/width_precision/x_maj_width_precision_tests.h"

# include "bonus/width_precision_dash/s_width_precision_dash_tests.h"
# include "bonus/width_precision_dash/d_width_precision_dash_tests.h"
# include "bonus/width_precision_dash/i_width_precision_dash_tests.h"
# include "bonus/width_precision_dash/u_width_precision_dash_tests.h"
# include "bonus/width_precision_dash/x_width_precision_dash_tests.h"
# include "bonus/width_precision_dash/x_maj_width_precision_dash_tests.h"

# include "bonus/space/d_space_tests.h"
# include "bonus/space/i_space_tests.h"

# include "bonus/width_space/d_width_space_tests.h"
# include "bonus/width_space/i_width_space_tests.h"

# include "bonus/width_dash_space/d_width_dash_space_tests.h"
# include "bonus/width_dash_space/i_width_dash_space_tests.h"

# include "bonus/precision_space/d_precision_space_tests.h"
# include "bonus/precision_space/i_precision_space_tests.h"

# include "bonus/width_precision_space/d_width_precision_space_tests.h"
# include "bonus/width_precision_space/i_width_precision_space_tests.h"

# include "bonus/width_precision_dash_space/d_width_precision_dash_space_tests.h"
# include "bonus/width_precision_dash_space/i_width_precision_dash_space_tests.h"

# include "bonus/plus/d_plus_tests.h"
# include "bonus/plus/i_plus_tests.h"

# include "bonus/width_plus/d_width_plus_tests.h"
# include "bonus/width_plus/i_width_plus_tests.h"

# include "bonus/width_dash_plus/d_width_dash_plus_tests.h"
# include "bonus/width_dash_plus/i_width_dash_plus_tests.h"

# include "bonus/precision_plus/d_precision_plus_tests.h"
# include "bonus/precision_plus/i_precision_plus_tests.h"

# include "bonus/width_precision_plus/d_width_precision_plus_tests.h"
# include "bonus/width_precision_plus/i_width_precision_plus_tests.h"

# include "bonus/width_precision_dash_plus/d_width_precision_dash_plus_tests.h"
# include "bonus/width_precision_dash_plus/i_width_precision_dash_plus_tests.h"

# include "bonus/hash/x_hash_tests.h"
# include "bonus/hash/x_maj_hash_tests.h"

# include "bonus/width_hash/x_width_hash_tests.h"
# include "bonus/width_hash/x_maj_width_hash_tests.h"

# include "bonus/width_dash_hash/x_width_dash_hash_tests.h"
# include "bonus/width_dash_hash/x_maj_width_dash_hash_tests.h"

# include "bonus/precision_hash/x_precision_hash_tests.h"
# include "bonus/precision_hash/x_maj_precision_hash_tests.h"

# include "bonus/width_precision_hash/x_width_precision_hash_tests.h"
# include "bonus/width_precision_hash/x_maj_width_precision_hash_tests.h"

# include "bonus/width_precision_dash_hash/x_width_precision_dash_hash_tests.h"
# include "bonus/width_precision_dash_hash/x_maj_width_precision_dash_hash_tests.h"

# define NB_MANDATORY_TESTS 9
# define NB_BONUS_TESTS 75

typedef struct s_test {

    char*           subset;
    void            (*test_subset) (int);
}                   t_test;

#endif // MAIN_H
