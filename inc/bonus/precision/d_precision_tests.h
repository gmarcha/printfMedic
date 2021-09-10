#ifndef D_PRECISION_TESTS_H
# define D_PRECISION_TESTS_H

# define NB_D_PRECISION_TESTS 18

void test_d_precision(int testIndex);

int test_d_0_precision_0(void);

int test_d_0_precision_1(void);

int test_d_0_precision_2(void);

int test_d_1_precision_1(void);

int test_d_1_precision_2(void);

int test_d_42_precision_2(void);

int test_d_42_precision_3(void);

int test_d_2147483647_precision_10(void);

int test_d_2147483647_precision_11(void);

int test_d_neg_1_precision_1(void);

int test_d_neg_1_precision_2(void);

int test_d_neg_1_precision_3(void);

int test_d_neg_42_precision_2(void);

int test_d_neg_42_precision_3(void);

int test_d_neg_42_precision_4(void);

int test_d_neg_2147483648_precision_10(void);

int test_d_neg_2147483648_precision_11(void);

int test_d_neg_2147483648_precision_12(void);

#endif // D_PRECISION_TESTS_H
