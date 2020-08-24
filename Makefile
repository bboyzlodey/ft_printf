NAME = libftprintf.a
LIBFTA = libft.a
SRCS = functions_que.c ft_integers.c calculate_managment.c flag_management.c ft_float.c ft_printf.c precision_management.c size_management.c \
string.c t_long_num.c t_long_num_str.c t_long_num_util.c utils.c width_management.c ft_double.c
OBJ = $(SRCS:.c=.o)
LIBDIR = libft/
LIBNAME = libft/libft.a
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(OBJ): %.o: %.c
	gcc -c $(CFLAGS) $< -o $@

$(NAME): $(OBJ)
	@make -C $(LIBDIR)
	@cp libft/libft.a ./$(NAME)
	@ar rc $(NAME) $(OBJ)
	
clean:
	@/bin/rm -f $(OBJ)
	@make -C $(LIBDIR) clean
	@echo OBJECTS FILES HAS BEEN DELETED.

test:
	@gcc *.c -L libft -lft -o test

fclean: clean
	@/bin/rm -f $(NAME)
	@make -C $(LIBDIR) fclean
	@echo OBJECT FILES AND EXECUTABLE HAS BEEN DELETED.

re: fclean all
