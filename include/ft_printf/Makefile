# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adeslarz <adeslarz@42lausanne.ch>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 11:47:01 by adeslarz          #+#    #+#              #
#    Updated: 2021/12/14 16:13:32 by adeslarz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_strlen_printf.c\
		ft_putchar_fd_printf.c\
		ft_putstr_fd_printf.c\
		ft_putnbr_fd_printf.c\
		ft_putnbr_fd_unsigned.c\
		ft_printf.c\
		ft_putnbr_fd_hexa.c\
		ft_putnbr_p.c\
		
NAME 		= libftprintf.a

CFLAGS 		= -Wall -Wextra -Werror

OBJS 		= ${SRCS:.c=.o}

AR 			= ar rcs

RM 			= rm -f

CC 			= gcc

all: 		${NAME}

${NAME}: 	${OBJS}
			${AR} ${NAME} ${OBJS}

%.o : %.c
			$(CC) -c $(CFLAGS) $< -o $@

clean:
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re:			fclean all

.PHONY: 	all clean fclean re