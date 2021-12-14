# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adeslarz <adeslarz@42lausanne.ch>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 11:47:01 by adeslarz          #+#    #+#              #
#    Updated: 2021/12/14 17:14:52 by adeslarz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	main.c\
		ft_check_input.c\
		ft_error.c\

NAME		= push_swap

CFLAGS 		= -g -fsanitize=address -Wall -Wextra -Werror

OBJS 		= ${SRCS:.c=.o}

AR 			= ar rcs

RM 			= rm -f

CC			= gcc

FT_PRINTF_DIR	= ./include/ft_printf/
LIBFT_DIR		= ./include/libft/

LIBFT =  libft.a
FT_PRINTF = libftprintf.a

FRAMLIBS	= -L $(LIBFT_DIR) -lft -L $(FT_PRINTF_DIR) -lftprintf

all: ${LIBFT} ${FT_PRINTF} ${NAME}

$(NAME): 	$(OBJS)
			$(CC) $(CFLAGS) -I $(LIBFT_DIR) -I $(FT_PRINTF_DIR) -o $(NAME) $(OBJS) $(FRAMLIBS)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(FT_PRINTF):
	make -C $(FT_PRINTF_DIR)

%.o : %.c
			$(CC) -c $(CFLAGS) $< -o $@

clean:
			${RM} ${OBJS}
			make -C $(LIBFT_DIR) clean
			make -C $(FT_PRINTF_DIR) clean

fclean: 	clean
			${RM} ${NAME} ${LIBFT_DIR}${LIBFT} ${FT_PRINTF_DIR}${FT_PRINTF}

re:			fclean all

.PHONY: 	all clean fclean re

# -g -fsanitize=address