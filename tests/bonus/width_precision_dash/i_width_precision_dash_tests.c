#include "main.h"

int test_i_0_witdh_1_precision_0_dash(void) {
    return (ft_printf(" %-1.0i ", 0));
}

int test_i_0_witdh_2_precision_0_dash(void) {
    return (ft_printf(" %-2.0i ", 0));
}

int test_i_0_witdh_2_precision_1_dash(void) {
    return (ft_printf(" %-2.1i ", 0));
}

int test_i_0_witdh_3_precision_1_dash(void) {
    return (ft_printf(" %-3.1i ", 0));
}

int test_i_0_witdh_2_precision_2_dash(void) {
    return (ft_printf(" %-2.2i ", 0));
}

int test_i_0_witdh_3_precision_2_dash(void) {
    return (ft_printf(" %-3.2i ", 0));
}

int test_i_0_witdh_2_precision_4_dash(void) {
    return (ft_printf(" %-2.4i ", 0));
}

int test_i_0_witdh_3_precision_4_dash(void) {
    return (ft_printf(" %-3.4i ", 0));
}

int test_i_2147483647_witdh_11_precision_10_dash(void) {
    return (ft_printf(" %-11.10i ", 2147483647));
}

int test_i_2147483647_witdh_12_precision_10_dash(void) {
    return (ft_printf(" %-12.10i ", 2147483647));
}

int test_i_2147483647_witdh_11_precision_11_dash(void) {
    return (ft_printf(" %-11.11i ", 2147483647));
}

int test_i_2147483647_witdh_12_precision_11_dash(void) {
    return (ft_printf(" %-12.11i ", 2147483647));
}

int test_i_2147483647_witdh_11_precision_13_dash(void) {
    return (ft_printf(" %-11.13i ", 2147483647));
}

int test_i_2147483647_witdh_12_precision_13_dash(void) {
    return (ft_printf(" %-12.13i ", 2147483647));
}

int test_i_neg_1_witdh_3_precision_1_dash(void) {
    return (ft_printf(" %-3.1i ", -1));
}

int test_i_neg_1_witdh_4_precision_1_dash(void) {
    return (ft_printf(" %-4.1i ", -1));
}

int test_i_neg_1_witdh_3_precision_2_dash(void) {
    return (ft_printf(" %-3.2i ", -1));
}

int test_i_neg_1_witdh_4_precision_2_dash(void) {
    return (ft_printf(" %-4.2i ", -1));
}

int test_i_neg_1_witdh_3_precision_4_dash(void) {
    return (ft_printf(" %-3.4i ", -1));
}

int test_i_neg_1_witdh_4_precision_4_dash(void) {
    return (ft_printf(" %-4.4i ", -1));
}

int test_i_neg_2147483648_witdh_12_precision_10_dash(void) {
    return (ft_printf(" %-12.10i ", -2147483648));
}

int test_i_neg_2147483648_witdh_13_precision_10_dash(void) {
    return (ft_printf(" %-13.10i ", -2147483648));
}

int test_i_neg_2147483648_witdh_12_precision_11_dash(void) {
    return (ft_printf(" %-12.11i ", -2147483648));
}

int test_i_neg_2147483648_witdh_13_precision_11_dash(void) {
    return (ft_printf(" %-13.11i ", -2147483648));
}

int test_i_neg_2147483648_witdh_12_precision_13_dash(void) {
    return (ft_printf(" %-12.13i ", -2147483648));
}

int test_i_neg_2147483648_witdh_13_precision_13_dash(void) {
    return (ft_printf(" %-13.13i ", -2147483648));
}

void    test_i_width_precision_dash(int testIndex) {

    char*      expectedOutput[] = {
        "   ",
        "    ",
        " 0  ",
        " 0   ",
        " 00 ",
        " 00  ",
        " 0000 ",
        " 0000 ",
        " 2147483647  ",
        " 2147483647   ",
        " 02147483647 ",
        " 02147483647  ",
        " 0002147483647 ",
        " 0002147483647 ",
        " -1  ",
        " -1   ",
        " -01 ",
        " -01  ",
        " -0001 ",
        " -0001 ",
        " -2147483648  ",
        " -2147483648   ",
        " -02147483648 ",
        " -02147483648  ",
        " -0002147483648 ",
        " -0002147483648 "
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
        15,
        5,
        6,
        5,
        6,
        7,
        7,
        14,
        15,
        14,
        15,
        16,
        16
    };

    int         (*test[NB_I_WIDTH_PRECISION_DASH_TESTS])() = {
        test_i_0_witdh_1_precision_0_dash,
        test_i_0_witdh_2_precision_0_dash,
        test_i_0_witdh_2_precision_1_dash,
        test_i_0_witdh_3_precision_1_dash,
        test_i_0_witdh_2_precision_2_dash,
        test_i_0_witdh_3_precision_2_dash,
        test_i_0_witdh_2_precision_4_dash,
        test_i_0_witdh_3_precision_4_dash,
        test_i_2147483647_witdh_11_precision_10_dash,
        test_i_2147483647_witdh_12_precision_10_dash,
        test_i_2147483647_witdh_11_precision_11_dash,
        test_i_2147483647_witdh_12_precision_11_dash,
        test_i_2147483647_witdh_11_precision_13_dash,
        test_i_2147483647_witdh_12_precision_13_dash,
        test_i_neg_1_witdh_3_precision_1_dash,
        test_i_neg_1_witdh_4_precision_1_dash,
        test_i_neg_1_witdh_3_precision_2_dash,
        test_i_neg_1_witdh_4_precision_2_dash,
        test_i_neg_1_witdh_3_precision_4_dash,
        test_i_neg_1_witdh_4_precision_4_dash,
        test_i_neg_2147483648_witdh_12_precision_10_dash,
        test_i_neg_2147483648_witdh_13_precision_10_dash,
        test_i_neg_2147483648_witdh_12_precision_11_dash,
        test_i_neg_2147483648_witdh_13_precision_11_dash,
        test_i_neg_2147483648_witdh_12_precision_13_dash,
        test_i_neg_2147483648_witdh_13_precision_13_dash
    };

    char*       input[] = {
        "\" %-1.0i \", 0",
        "\" %-2.0i \", 0",
        "\" %-2.1i \", 0",
        "\" %-3.1i \", 0",
        "\" %-2.2i \", 0",
        "\" %-3.2i \", 0",
        "\" %-2.4i \", 0",
        "\" %-3.4i \", 0",
        "\" %-11.10i \", 2147483647",
        "\" %-12.10i \", 2147483647",
        "\" %-11.11i \", 2147483647",
        "\" %-12.11i \", 2147483647",
        "\" %-11.13i \", 2147483647",
        "\" %-12.13i \", 2147483647",
        "\" %-3.1i \", -1",
        "\" %-4.1i \", -1",
        "\" %-3.2i \", -1",
        "\" %-4.2i \", -1",
        "\" %-3.4i \", -1",
        "\" %-4.4i \", -1",
        "\" %-12.10i \", -2147483648",
        "\" %-13.10i \", -2147483648",
        "\" %-12.11i \", -2147483648",
        "\" %-13.11i \", -2147483648",
        "\" %-12.13i \", -2147483648",
        "\" %-13.13i \", -2147483648"
    };

    printf(FG_YELLOW"test : %%i with width, precision and dash\n"RESET);
    fflush(stdout);
    for (int i = 0; i < NB_I_WIDTH_PRECISION_DASH_TESTS; i++) {
        if (testIndex == 0 || testIndex == i + 1) {
            test_print(i + 1, expectedOutput[i], expectedReturnValue[i], test[i], input[i], "test_i_width_precision_dash");
        }
    }
    printf("\n");
}

