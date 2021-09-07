INPUT=(a m b c s p d i u x X %)
TESTS=(tests/c_tests.c  tests/s_tests.c tests/p_tests.c tests/d_tests.c tests/i_tests.c tests/u_tests.c tests/x_tests.c tests/x_maj_tests.c tests/percent_tests.c)

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
        echo "Invalid first argument, launch script to know usage."; exit 1
    fi
fi

if ! [[ -z $2 ]]; then
    re='^[0-9]+$'
    if ! [[ $2 =~ $re ]] ; then
        echo "Invalid second argument, launch script to know usage."; exit 1
    fi
    ARG2=$2
fi

clang -Wall -Wextra -Werror -fsanitize=address -D DEBUG -I ./inc ${TESTS[@]} src/test.c src/main.c -o tester
if [ $? -ne 0 ]; then
    exit 1
fi

./tester $ARG1 $ARG2

rm -rf tester
rm -rf tmp/
