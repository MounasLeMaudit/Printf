# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mounali <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/27 11:44:12 by mounali           #+#    #+#              #
#    Updated: 2023/02/28 21:23:13 by mounali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =  fonctions/ft_hex_adress fonctions/ft_putchar_fd fonctions/ft_putstr_fd fonctions/ft_putnbr_fd fonctions/ft_putnbr_unsign_fd fonctions/ft_tolower fonctions/ft_toupper fonctions/ft_isalpha fonctions/ft_putnbr_base ft_printf

SRCS = 	$(addsuffix .c, ${SRC})

OBJS = ${SRCS:.c=.o}

FLAG = -Wall -Wextra -Werror

.c.o:
			gcc ${FLAG} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			ar rc $(NAME) ${OBJS} 

all: $(NAME)

clean:
			rm -f $(OBJS)

fclean: 	clean
			rm -f $(NAME)

re: 		fclean all
