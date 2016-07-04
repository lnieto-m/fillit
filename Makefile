# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaubard <jaubard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 15:26:50 by jaubard           #+#    #+#              #
#    Updated: 2015/12/16 12:04:21 by jaubard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCS = 	ft_add_end_list.c ft_check_strings.c ft_check_dimensions.c \
		ft_check_spaces.c ft_diff.c ft_draw.c ft_errors.c ft_fill_lst.c \
		ft_generate_square.c ft_is_tetrimino.c main.c ft_pos_generator.c \
		ft_resolution.c ft_delete_piece.c ft_delete_lst.c ft_min_square.c \

OBJ = $(SRCS:.c=.o)

LIBFT = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJ)
	@$(CC) $(LIBFT) $(OBJ) -o $(NAME)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	@rm -fv $(OBJ)

fclean: clean
	@rm -fv $(NAME)

re: fclean all

norme:
	@norminette $(SRCS)
	@norminette $(INC_PATH)

.PHONY: clean fclean re
