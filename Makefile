CFLAGS  = -Wall -Wextra -Werror
NAME    = libftprintf.a
AR		= ar -rcs
SRC		= ft_printf.c ft_printf_utils.c ft_printf_utils2.c ft_itoa.c ft_hex.c
OBJ		= ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@echo 🔥 🔥 Compliling Everything ✅ ✅

clean:
	@rm -rf *.o
	@echo 🔥 🔥 Deleting all .o Files 🗑️ 🗑️
fclean: clean
	@rm -f $(NAME)
	@echo 🔥 🔥 Deleting .a File 🗑️ 🗑️

%.o: %.c
	@gcc $(CFLAGS) -o $@ -c $<

re: fclean all

.PHONY: all clean fclean re