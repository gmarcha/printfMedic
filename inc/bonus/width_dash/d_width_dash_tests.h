#ifndef D_WIDTH_DASH_TESTS_H
# define D_WIDTH_DASH_TESTS_H

# define NB_D_WIDTH_DASH_TESTS 7

void test_d_width_dash(int testIndex);

int test_d_0_width_2_dash(void);

int test_d_1_width_2_dash(void);

int test_d_42_width_3_dash(void);

int test_d_2147483647_width_11_dash(void);

int test_d_neg_1_width_3_dash(void);

int test_d_neg_42_width_4_dash(void);

int test_d_neg_2147483648_width_12_dash(void);

#endif // D_WIDTH_DASH_TESTS_H
