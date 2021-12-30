# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: desa <desa@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 11:47:01 by adeslarz          #+#    #+#              #
#    Updated: 2021/12/28 14:38:20 by desa             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	main.c\
		ft_check_input.c\
		ft_error.c\
		ft_malloc.c\
		ft_push_swap_utils.c\
		ft_swap.c\
		ft_rotate.c\
		ft_rev_rotate.c\
		ft_push.c\

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
