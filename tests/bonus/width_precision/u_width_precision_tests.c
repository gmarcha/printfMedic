#include "main.h"

int test_u_0_witdh_1_precision_0(void) {
    return (ft_printf(" %1.0u ", 0));
}

int test_u_0_witdh_2_precision_0(void) {
    return (ft_printf(" %2.0u ", 0));
}

int test_u_0_witdh_2_precision_1(void) {
    return (ft_printf(" %2.1u ", 0));
}

int test_u_0_witdh_3_precision_1(void) {
    return (ft_printf(" %3.1u ", 0));
}

int test_u_0_witdh_2_precision_2(void) {
    return (ft_printf(" %2.2u ", 0));
}

int test_u_0_witdh_3_precision_2(void) {
    return (ft_printf(" %3.2u ", 0));
}

int test_u_0_witdh_2_precision_4(void) {
    return (ft_printf(" %2.4u ", 0));
}

int test_u_0_witdh_3_precision_4(void) {
    return (ft_printf(" %3.4u ", 0));
}

int test_u_2147483647_witdh_11_precision_10(void) {
    return (ft_printf(" %11.10u ", 2147483647));
}

int test_u_2147483647_witdh_12_precision_10(void) {
    return (ft_printf(" %12.10u ", 2147483647));
}

int test_u_2147483647_witdh_11_precision_11(void) {
    return (ft_printf(" %11.11u ", 2147483647));
}

int test_u_2147483647_witdh_12_precision_11(void) {
    return (ft_printf(" %12.11u ", 2147483647));
}

int test_u_2147483647_witdh_11_precision_13(void) {
    return (ft_printf(" %11.13u ", 2147483647));
}

int test_u_2147483647_witdh_12_precision_13(void) {
    return (ft_printf(" %12.13u ", 2147483647));
}

void    test_u_width_precision(int testIndex) {

    char*      expectedOutput[] = {
        "   ",
        "    ",
        "  0 ",
        "   0 ",
        " 00 ",
        "  00 ",
        " 0000 ",
        " 0000 ",
        "  2147483647 ",
        "   2147483647 ",
        " 02147483647 ",
        "  02147483647 ",
        " 0002147483647 ",
        " 0002147483647 "
    };

    int         expectedReturnValue[] = {
        3,
        4,
        4,
        5,
        4,
        5,
        6,
        6,
        13,
        14,
        13,
        14,
        15,
        15
    };

    int         (*test[NB_U_WIDTH_PRECISION_TESTS])() = {
        test_u_0_witdh_1_precision_0,
        test_u_0_witdh_2_precision_0,
        test_u_0_witdh_2_precision_1,
        test_u_0_witdh_3_precision_1,
        test_u_0_witdh_2_precision_2,
        test_u_0_witdh_3_precision_2,
        test_u_0_witdh_2_precision_4,
        test_u_0_witdh_3_precision_4,
        test_u_2147483647_witdh_11_precision_10,
        test_u_2147483647_witdh_12_precision_10,
        test_u_2147483647_witdh_11_precision_11,
        test_u_2147483647_witdh_12_precision_11,
        test_u_2147483647_witdh_11_precision_13,
        test_u_2147483647_witdh_12_precision_13
    };

    char*       input[] = {
        "\" %1.0u \", 0",
        "\" %2.0u \", 0",
        "\" %2.1u \", 0",
        "\" %3.1u \", 0",
        "\" %2.2u \", 0",
        "\" %3.2u \", 0",
        "\" %2.4u \", 0",
        "\" %3.4u \", 0",
        "\" %11.10u \", 2147483647",
        "\" %12.10u \", 2147483647",
        "\" %11.11u \", 2147483647",
        "\" %12.11u \", 2147483647",
        "\" %11.13u \", 2147483647",
        "\" %12.13u \", 2147483647"
    };

    printf(FG_YELLOW"test : %%u with width and precision\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_U_WIDTH_PRECISION_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_u_width_precision");
        }
    }
    printf("\n");
}

