#ifndef I_TESTS_H
# define I_TESTS_H

# define NB_I_TESTS 9

void test_i(int testIndex);

int test_i_0(void);

int test_i_1(void);

int test_i_42(void);

int test_i_2147483647(void);

int test_i_neg_1(void);

int test_i_neg_42(void);

int test_i_neg_2147483647(void);

int test_i_neg_2147483648(void);

int test_i_2147483647_i_neg_2147483647_i_neg_2147483648(void);

#endif // I_TESTS_H
