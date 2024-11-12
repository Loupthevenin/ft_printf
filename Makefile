# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 18:30:50 by ltheveni          #+#    #+#              #
#    Updated: 2024/11/12 22:06:08 by ltheveni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS_DIR = src/
OBJ_DIR = obj/
SRC_FILES = ft_printf.c\
			ft_utils_printf.c\

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
INCLUDE = -I includes

TEST_NAME = test_ft_printf
TEST_SRC = main.c

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -rf

SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS = $(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))

all: $(LIBFT) $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	@$(AR) $(NAME) $(OBJS)

$(LIBFT):
	@make -C $(LIBFT_DIR)

test: $(TEST_NAME)
	./$(TEST_NAME)

$(TEST_NAME): $(LIBFT) $(NAME)
	$(CC) $(CFLAGS) $(INCLUDE) $(TEST_SRC) $(NAME) $(LIBFT) -o $(TEST_NAME)

$(OBJ_DIR)%.o: $(SRCS_DIR)%.c
	@if [ ! -d $(OBJ_DIR) ];then mkdir $(OBJ_DIR); fi
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	make clean -C $(LIBFT_DIR)
	$(RM) $(OBJ_DIR)

fclean:
	make fclean -C $(LIBFT_DIR)
	$(RM) $(OBJ_DIR) $(NAME)

re: fclean all

.PHONY: all clean fclean re
