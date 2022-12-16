# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eshakhge <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/10 16:56:42 by eshakhge          #+#    #+#              #
#    Updated: 2022/03/10 16:56:50 by eshakhge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =  ft_printf.c \
		utils/ft_print_char.c \
		utils/ft_print_num.c \
		utils/ft_print_ptr.c \
		utils/ft_print_str.c \
		utils/ft_print_u.c \
		utils/ft_print_xX.c \
		utils/ft_printf_utils.c \
		utils/ft_putnbr.c


OBJS	= ${SRCS:.c=.o}

OPTION = -c -I  utils/ft_printf.h

CFLAGS = -Wall -Wextra -Werror

CC = cc

RM = /bin/rm -f

all: ${NAME}

$(NAME):	${OBJS}
	ar rc ${NAME} ${OBJS}

bonus: fclean all

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.O_PHONY: fclean clean all re