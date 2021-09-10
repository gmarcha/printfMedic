#ifndef I_PRECISION_TESTS_H
# define I_PRECISION_TESTS_H

# define NB_I_PRECISION_TESTS 18

void test_i_precision(int testIndex);

int test_i_0_precision_0(void);

int test_i_0_precision_1(void);

int test_i_0_precision_2(void);

int test_i_1_precision_1(void);

int test_i_1_precision_2(void);

int test_i_42_precision_2(void);

int test_i_42_precision_3(void);

int test_i_2147483647_precision_10(void);

int test_i_2147483647_precision_11(void);

int test_i_neg_1_precision_1(void);

int test_i_neg_1_precision_2(void);

int test_i_neg_1_precision_3(void);

int test_i_neg_42_precision_2(void);

int test_i_neg_42_precision_3(void);

int test_i_neg_42_precision_4(void);

int test_i_neg_2147483648_precision_10(void);

int test_i_neg_2147483648_precision_11(void);

int test_i_neg_2147483648_precision_12(void);

#endif // I_PRECISION_TESTS_H
