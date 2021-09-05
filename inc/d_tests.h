#ifndef D_TESTS_H
# define D_TESTS_H

# define NB_D_TESTS 9

void test_d(int testIndex);

int test_d_0(void);

int test_d_1(void);

int test_d_42(void);

int test_d_2147483647(void);

int test_d_neg_1(void);

int test_d_neg_42(void);

int test_d_neg_2147483647(void);

int test_d_neg_2147483648(void);

int test_d_2147483647_d_neg_2147483647_d_neg_2147483648(void);

#endif // D_TESTS_H
