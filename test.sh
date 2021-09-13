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

printf "\033[95m"
echo '========================================================================================'; echo
echo '██████╗ ██████╗ ██╗███╗   ██╗████████╗███████╗    ███╗   ███╗███████╗██████╗ ██╗ ██████╗'
echo '██╔══██╗██╔══██╗██║████╗  ██║╚══██╔══╝██╔════╝    ████╗ ████║██╔════╝██╔══██╗██║██╔════╝'
echo '██████╔╝██████╔╝██║██╔██╗ ██║   ██║   █████╗      ██╔████╔██║█████╗  ██║  ██║██║██║     '
echo '██╔═══╝ ██╔══██╗██║██║╚██╗██║   ██║   ██╔══╝      ██║╚██╔╝██║██╔══╝  ██║  ██║██║██║     '
echo '██║     ██║  ██║██║██║ ╚████║   ██║   ██║         ██║ ╚═╝ ██║███████╗██████╔╝██║╚██████╗'
echo '╚═╝     ╚═╝  ╚═╝╚═╝╚═╝  ╚═══╝   ╚═╝   ╚═╝         ╚═╝     ╚═╝╚══════╝╚═════╝ ╚═╝ ╚═════╝'
echo '========================================================================================'
printf "\033[0m"

ARG1=""
ARG2="-1"

mkdir -p tmp/
rm -rf tester.log

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

printf "\033[94m"
echo "(Compiling ft_printf...)"
make -C ../
if [ $? -ne 0 ]; then
    rm -rf tmp/
    exit 1
fi
echo "(Compilation done!)"
echo '========================================================================================'
printf "\033[0m"

printf "\033[33m"
echo "(Compiling tester...)"
make
if [ $? -ne 0 ]; then
    rm -rf tmp/
    exit 1
fi
echo "(Compilation done!)"
echo '========================================================================================'
printf "\033[0m"

./tester $ARG1 $ARG2

rm -rf tester
rm -rf tmp/
