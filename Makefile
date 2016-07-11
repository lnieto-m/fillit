# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaubard <jaubard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 15:26:50 by jaubard           #+#    #+#              #
#    Updated: 2016/07/11 19:36:15 by lnieto-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC_PATH = srcs

OBJ_PATH = obj

SRC_NAME = ft_add_end_list.c ft_check_strings.c ft_check_dimensions.c \
		ft_check_spaces.c ft_diff.c ft_draw.c ft_errors.c ft_fill_lst.c \
		ft_generate_square.c ft_is_tetrimino.c main.c ft_pos_generator.c \
		ft_resolution.c ft_delete_piece.c ft_delete_lst.c ft_min_square.c \

OBJ_NAME = $(SRC_NAME:.c=.o)

INC =  -I./includes -I./libft/includes

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

LIBFT_PATH = libft/libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft/
	@$(CC) $(LIBFT_PATH) $(OBJ) -o $(NAME)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<

clean:
	make -C libft/ clean
	rm -rf $(OBJ)
	rm -rf $(OBJ_PATH)

fclean: clean
	make -C libft/ fclean
	rm -rf $(NAME)

re: fclean all

norme:
	@norminette $(SRCS)
	@norminette $(INC_PATH)

.PHONY: clean fclean re
