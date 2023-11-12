NAME := minishell
CC   := gcc
INCLUDES := ./lib
CFLAGS	:= -ggdb -I $(INCLUDE) -I ./libft
LIBFT = libft
FLAGS = -Wall -Wextra -Werror

SRC := src/exec_free.c \
	   src/is_space.c \
	   src/quote_check.c \
	   src/signals.c \
	   src/libft/ft_putstr_fd.c \
	   src/main.c

OBJ := /objectives
OBJ	:= $(SRC:%.c=$(OBJDIR)/%.o)

$(NAME): $(OBJ)
	make -C $(LIBFT)
	cp libft/libft.a .
	@$(CC) -L /goinfre/homebrew/Cellar/readline/8.2.1/lib -I /goinfre/homebrew/Cellar/readline/8.2.1/include $(FLAGS) $(CFLAGS) $(OBJ) libft.a -lreadline -o $@

$(OBJDIR)/%.o: %.c
	@mkdir -p $(@D)
	$(CC) -I ~/.brew/opt/readline/include -I /goinfre/homebrew/Cellar/readline/8.2.1/include $(FLAGS) $(CFLAGS) -c $< -o $@

clean:
	make clean -C $(LIBFT)
	rm -rf libft.a
	@rm -rf $(OBJDIR)

fclean:
	make fclean -C $(LIBFT)
	rm -rf libft.a
	@rm -rf $(OBJDIR)
	@rm -f $(NAME)

valgrind:
	valgrind --leak-check=full --show-leak-kinds=definite ./$(NAME)

norm:
	norminette libft

re:	fclean all