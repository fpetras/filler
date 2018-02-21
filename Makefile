# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpetras <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/15 07:29:36 by fpetras           #+#    #+#              #
#    Updated: 2018/02/21 11:25:09 by fpetras          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fpetras.filler

SRC = main.c \
	  map_piece_data.c \
	  place_piece.c \
	  attack_horizontal.c \
	  attack_vertical.c \
	  validate_position.c \
	  ft_free_tab.c

OBJ = $(SRC:.c=.o)

CC = gcc

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@make -C libft
	@$(CC) $(FLAGS) -o $(NAME) $(SRC) libft/libft.a

clean:
	@make clean -C libft
	@rm -f $(OBJ)

fclean: clean
	@make fclean -C libft
	@rm -f $(NAME)

re: fclean all
