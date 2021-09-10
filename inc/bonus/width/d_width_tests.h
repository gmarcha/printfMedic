#ifndef D_WIDTH_TESTS_H
# define D_WIDTH_TESTS_H

# define NB_D_WIDTH_TESTS 14

void test_d_width(int testIndex);

int test_d_0_width_1(void);

int test_d_0_width_2(void);

int test_d_1_width_1(void);

int test_d_1_width_2(void);

int test_d_42_width_2(void);

int test_d_42_width_3(void);

int test_d_2147483647_width_10(void);

int test_d_2147483647_width_11(void);

int test_d_neg_1_width_2(void);

int test_d_neg_1_width_3(void);

int test_d_neg_42_width_3(void);

int test_d_neg_42_width_4(void);

int test_d_neg_2147483648_width_11(void);

int test_d_neg_2147483648_width_12(void);

#endif // D_WIDTH_TESTS_H
