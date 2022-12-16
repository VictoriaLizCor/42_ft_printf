# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lilizarr <lilizarr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/30 13:32:36 by lilizarr          #+#    #+#              #
#    Updated: 2022/12/14 16:23:32 by lilizarr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ./libftprintf.a
# ft_printf library
SRC =	./ft_printf.c				\
		#./ft_bzero.c				\#
OBJS = $(SRC:.c=.o)

# libft library
LIBFT_PATH = ./lib/libft/
LIBFT = libft.a
FLAGS = -Wall -Wextra -Werror

# Make libft
$(NAME): $(OBJS) $(addprefix $(LIBFT_PATH), $(LIBFT))

all: $(NAME)

$(NAME): 
	cc -c $(FLAGS) $(SRC)
	ar -rc $(NAME) ./ft_*.o

clean:
	rm -f ./ft_*.o

fclean:	clean
		rm -f $(NAME)

re: fclean all