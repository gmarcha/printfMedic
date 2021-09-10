INPUT=(	
		a m b c s p d i u x X % \
		c_width s_width p_width d_width i_width u_width x_width X_width \
		c_width_dash s_width_dash p_width_dash d_width_dash i_width_dash u_width_dash x_width_dash X_width_dash \
		d_width_zero i_width_zero u_width_zero x_width_zero X_width_zero \
		s_precision d_precision i_precision u_precision x_precision X_precision \
		s_width_precision d_width_precision i_width_precision u_width_precision x_width_precision X_width_precision \
		s_width_precision_dash d_width_precision_dash i_width_precision_dash u_width_precision_dash x_width_precision_dash X_width_precision_dash \
		d_space i_space \
		d_width_space i_width_space \
		d_width_dash_space i_width_dash_space \
		d_precision_space i_precision_space \
		d_width_precision_space i_width_precision_space \
		d_width_precision_dash_space i_width_precision_dash_space \
		d_plus i_plus \
		d_width_plus i_width_plus \
		d_width_dash_plus i_width_dash_plus \
		d_precision_plus i_precision_plus \
		d_width_precision_plus i_width_precision_plus \
		d_width_precision_dash_plus i_width_precision_dash_plus \
		x_hash X_hash \
		x_width_hash X_width_hash \
		x_width_dash_hash X_width_dash_hash \
		x_precision_hash X_precision_hash \
		x_width_precision_hash X_width_precision_hash \
		x_width_precision_dash_hash X_width_precision_dash_hash
)

TESTS=( tests/mandatory/c_tests.c \
        tests/mandatory/s_tests.c \
        tests/mandatory/p_tests.c \
        tests/mandatory/d_tests.c \
        tests/mandatory/i_tests.c \
        tests/mandatory/u_tests.c \
        tests/mandatory/x_tests.c \
        tests/mandatory/x_maj_tests.c \
        tests/mandatory/percent_tests.c \
        tests/bonus/width/c_width_tests.c \
        tests/bonus/width/s_width_tests.c \
        tests/bonus/width/p_width_tests.c \
        tests/bonus/width/d_width_tests.c \
        tests/bonus/width/i_width_tests.c \
        tests/bonus/width/u_width_tests.c \
        tests/bonus/width/x_width_tests.c \
        tests/bonus/width/x_maj_width_tests.c \
        tests/bonus/width_dash/c_width_dash_tests.c \
        tests/bonus/width_dash/s_width_dash_tests.c \
        tests/bonus/width_dash/p_width_dash_tests.c \
        tests/bonus/width_dash/d_width_dash_tests.c \
        tests/bonus/width_dash/i_width_dash_tests.c \
        tests/bonus/width_dash/u_width_dash_tests.c \
        tests/bonus/width_dash/x_width_dash_tests.c \
        tests/bonus/width_dash/x_maj_width_dash_tests.c \
        tests/bonus/width_zero/d_width_zero_tests.c \
        tests/bonus/width_zero/i_width_zero_tests.c \
        tests/bonus/width_zero/u_width_zero_tests.c \
        tests/bonus/width_zero/x_width_zero_tests.c \
        tests/bonus/width_zero/x_maj_width_zero_tests.c \
        tests/bonus/precision/s_precision_tests.c \
        tests/bonus/precision/d_precision_tests.c \
        tests/bonus/precision/i_precision_tests.c \
        tests/bonus/precision/u_precision_tests.c \
        tests/bonus/precision/x_precision_tests.c \
        tests/bonus/precision/x_maj_precision_tests.c \
        tests/bonus/width_precision/s_width_precision_tests.c \
        tests/bonus/width_precision/d_width_precision_tests.c \
        tests/bonus/width_precision/i_width_precision_tests.c \
        tests/bonus/width_precision/u_width_precision_tests.c \
        tests/bonus/width_precision/x_width_precision_tests.c \
        tests/bonus/width_precision/x_maj_width_precision_tests.c \
        tests/bonus/width_precision_dash/s_width_precision_dash_tests.c \
        tests/bonus/width_precision_dash/d_width_precision_dash_tests.c \
        tests/bonus/width_precision_dash/i_width_precision_dash_tests.c \
        tests/bonus/width_precision_dash/u_width_precision_dash_tests.c \
        tests/bonus/width_precision_dash/x_width_precision_dash_tests.c \
        tests/bonus/width_precision_dash/x_maj_width_precision_dash_tests.c \
        tests/bonus/space/d_space_tests.c \
        tests/bonus/space/i_space_tests.c \
        tests/bonus/width_space/d_width_space_tests.c \
        tests/bonus/width_space/i_width_space_tests.c \
        tests/bonus/width_dash_space/d_width_dash_space_tests.c \
        tests/bonus/width_dash_space/i_width_dash_space_tests.c \
        tests/bonus/precision_space/d_precision_space_tests.c \
        tests/bonus/precision_space/i_precision_space_tests.c \
        tests/bonus/width_precision_space/d_width_precision_space_tests.c \
        tests/bonus/width_precision_space/i_width_precision_space_tests.c \
        tests/bonus/width_precision_dash_space/d_width_precision_dash_space_tests.c \
        tests/bonus/width_precision_dash_space/i_width_precision_dash_space_tests.c \
        tests/bonus/plus/d_plus_tests.c \
        tests/bonus/plus/i_plus_tests.c \
        tests/bonus/width_plus/d_width_plus_tests.c \
        tests/bonus/width_plus/i_width_plus_tests.c \
        tests/bonus/width_dash_plus/d_width_dash_plus_tests.c \
        tests/bonus/width_dash_plus/i_width_dash_plus_tests.c \
        tests/bonus/precision_plus/d_precision_plus_tests.c \
        tests/bonus/precision_plus/i_precision_plus_tests.c \
        tests/bonus/width_precision_plus/d_width_precision_plus_tests.c \
        tests/bonus/width_precision_plus/i_width_precision_plus_tests.c \
        tests/bonus/width_precision_dash_plus/d_width_precision_dash_plus_tests.c \
        tests/bonus/width_precision_dash_plus/i_width_precision_dash_plus_tests.c \
        tests/bonus/hash/x_hash_tests.c \
        tests/bonus/hash/x_maj_hash_tests.c \
        tests/bonus/width_hash/x_width_hash_tests.c \
        tests/bonus/width_hash/x_maj_width_hash_tests.c \
        tests/bonus/width_dash_hash/x_width_dash_hash_tests.c \
        tests/bonus/width_dash_hash/x_maj_width_dash_hash_tests.c \
        tests/bonus/precision_hash/x_precision_hash_tests.c \
        tests/bonus/precision_hash/x_maj_precision_hash_tests.c \
        tests/bonus/width_precision_hash/x_width_precision_hash_tests.c \
        tests/bonus/width_precision_hash/x_maj_width_precision_hash_tests.c \
        tests/bonus/width_precision_dash_hash/x_width_precision_dash_hash_tests.c \
        tests/bonus/width_precision_dash_hash/x_maj_width_precision_dash_hash_tests.c
)

echo '██████╗ ██████╗ ██╗███╗   ██╗████████╗███████╗    ███╗   ███╗███████╗██████╗ ██╗ ██████╗'
echo '██╔══██╗██╔══██╗██║████╗  ██║╚══██╔══╝██╔════╝    ████╗ ████║██╔════╝██╔══██╗██║██╔════╝'
echo '██████╔╝██████╔╝██║██╔██╗ ██║   ██║   █████╗      ██╔████╔██║█████╗  ██║  ██║██║██║     '
echo '██╔═══╝ ██╔══██╗██║██║╚██╗██║   ██║   ██╔══╝      ██║╚██╔╝██║██╔══╝  ██║  ██║██║██║     '
echo '██║     ██║  ██║██║██║ ╚████║   ██║   ██║         ██║ ╚═╝ ██║███████╗██████╔╝██║╚██████╗'
echo '╚═╝     ╚═╝  ╚═╝╚═╝╚═╝  ╚═══╝   ╚═╝   ╚═╝         ╚═╝     ╚═╝╚══════╝╚═════╝ ╚═╝ ╚═════╝'

ARG1=""
ARG2="-1"

mkdir -p tmp/
rm -rf ft_printf.log

if [[ -z $1 ]]; then
    echo "printfMedic: launch with a, m, or b; for all, mandatory, or bonus tests"
    echo "             to launch a subtest of tests, use c, s, p, d, i, u, x, X, %"
    echo "             script support specific test, with a second integer argument"
    exit 1
fi

if ! [[ -z $1 ]]; then
    for IN in ${INPUT[@]}; do
        if [[ $1 == $IN ]]; then
            ARG1=$1
        fi
    done
    if [[ -z $ARG1 ]]; then
        echo "Invalid first argument, launch script to know usage."; rm -rf tmp/; exit 1
    fi
fi

if ! [[ -z $2 ]]; then
    re='^[0-9]+$'
    if ! [[ $2 =~ $re ]] ; then
        echo "Invalid second argument, launch script to know usage."; rm -rf tmp/; exit 1
    fi
    ARG2=$2
fi

clang -Wall -Wextra -Werror -fsanitize=address -D DEBUG -I ./inc ${TESTS[@]} src/test.c src/main.c -o tester
if [ $? -ne 0 ]; then
    rm -rf tmp/
    exit 1
fi

./tester $ARG1 $ARG2

rm -rf tester
rm -rf tmp/
