NAME	=	tester
LFT		= 	../libftprintf.a
CC		=	clang
CFLAGS	=	-Wall -Wextra -Werror
OBJ		=	$(SRC:.c=.o)
SRC		=	src/main.c \
			src/test.c \
			tests/mandatory/c_tests.c \
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

all:		$(NAME)

$(NAME):	$(OBJ)
			@$(CC) $(CFLAGS) -fsanitize=address -o $(NAME) $(OBJ) $(LFT)

%.o:		%.c
			@$(CC) $(CFLAGS) -I inc/ -I ../ -o $@ -c $<

clean:
			@rm -rf $(OBJ)

fclean:		clean
			@rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
