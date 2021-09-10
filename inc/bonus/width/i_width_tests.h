#ifndef I_WIDTH_TESTS_H
# define I_WIDTH_TESTS_H

# define NB_I_WIDTH_TESTS 14

void test_i_width(int testIndex);

int test_i_0_width_1(void);

int test_i_0_width_2(void);

int test_i_1_width_1(void);

int test_i_1_width_2(void);

int test_i_42_width_2(void);

int test_i_42_width_3(void);

int test_i_2147483647_width_10(void);

int test_i_2147483647_width_11(void);

int test_i_neg_1_width_2(void);

int test_i_neg_1_width_3(void);

int test_i_neg_42_width_3(void);

int test_i_neg_42_width_4(void);

int test_i_neg_2147483648_width_11(void);

int test_i_neg_2147483648_width_12(void);

#endif // I_WIDTH_TESTS_H
