# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dshepele <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/29 16:36:10 by dshepele          #+#    #+#              #
#    Updated: 2019/04/29 16:47:02 by dshepele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
NAME = fillit
FILES = main.c\
		onemore.c\
		backtrack1.c\
		check_for_input.c\
		ft_error.c\
		change_coordinats.c\
		create_map.c\
		del_from_map.c\
		mmr_free.c\
		save_coordinat.c\
		save_into.c\
		somefile.c
OBJ = $(FILES:.c=.o)
LIBFTFLAGS = -L ./libft -l ft

all: $(NAME)

%.o: %.c
	gcc $(CFLAGS) -I ./libft -c $< -o $@

$(NAME): libft $(OBJ)
	gcc $(CFLAGS) $(OBJ) -I ./libft $(LIBFTFLAGS) -o $(NAME)

libft:
	make -C ./libft

clean:
	rm -f $(OBJ)
	make clean -C ./libft 

fclean: clean
	rm -f $(NAME) 
	make fclean -C ./libft

re: fclean all

.PHONY: re clean fclean all libft $(NAME)
