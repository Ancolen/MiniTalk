# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myerturk <myerturk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 15:30:36 by myerturk          #+#    #+#              #
#    Updated: 2023/10/23 15:30:38 by myerturk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
LIBFT = Libft

all: $(NAME)
	gcc server.c $(NAME) -o server
	gcc client.c $(NAME) -o client

$(NAME): $(LIBFT)
	make -C $(LIBFT)
	cp Libft/libft.a .

clean:
	make clean -C $(LIBFT)

bonus:
	gcc server_bonus.c $(NAME) -o server_bonus
	gcc client_bonus.c $(NAME) -o client_bonus
	
fclean: clean
	make fclean -C $(LIBFT)
	rm -rf $(NAME)
	rm -rf server client client_bonus server_bonus

re: fclean all
