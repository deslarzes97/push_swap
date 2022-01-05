# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: desa <desa@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 11:47:01 by adeslarz          #+#    #+#              #
#    Updated: 2022/01/05 14:40:29 by desa             ###   ########.fr        #
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
		ft_algo.c\
		ft_radix_sort.c\
		ft_check_slove.c\

NAME		= push_swap

CFLAGS 		= -g -fsanitize=address -Wall -Wextra -Werror

OBJS 		= ${SRCS:.c=.o}

AR 			= ar rcs

RM 			= rm -f

CC			= gcc

LIBFT_DIR		= ./include/libft/

LIBFT =  libft.a

FRAMLIBS	= -L $(LIBFT_DIR) -lft

all: ${LIBFT} ${FT_PRINTF} ${NAME}

$(NAME): 	$(OBJS)
			$(CC) $(CFLAGS) -I $(LIBFT_DIR) -o $(NAME) $(OBJS) $(FRAMLIBS)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(FT_PRINTF):
	make -C $(FT_PRINTF_DIR)

%.o : %.c
			$(CC) -c $(CFLAGS) $< -o $@

clean:
			${RM} ${OBJS}
			make -C $(LIBFT_DIR) clean

fclean: 	clean
			${RM} ${NAME} ${LIBFT_DIR}${LIBFT}

re:			fclean all

.PHONY: 	all clean fclean re
