# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adeslarz <adeslarz@42lausanne.ch>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 11:47:01 by adeslarz          #+#    #+#              #
#    Updated: 2021/12/09 20:47:10 by adeslarz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	main.c\
		ft_check_argv.c\
		ft_error.c\

NAME		= push_swap

CFLAGS 		= -Wall -Wextra -Werror

OBJS 		= ${SRCS:.c=.o}

AR 			= ar rcs

RM 			= rm -f

CC			= gcc

LIBFT_DIR		= ./include/libft/
LIBFT =  libft.a

FRAMLIBS	= -L $(LIBFT_DIR) -lft

all: ${LIBFT} ${NAME}

$(NAME): 	$(OBJS)
			$(CC) $(CFLAGS) -I $(LIBFT_DIR) -o $(NAME) $(OBJS) $(FRAMLIBS)

$(LIBFT):
	make -C $(LIBFT_DIR)

%.o : %.c
			$(CC) -c $(CFLAGS) $< -o $@

clean:
			${RM} ${OBJS}
			make -C $(LIBFT_DIR) clean

fclean: 	clean
			${RM} ${NAME} ${LIBFT_DIR}${LIBFT}

re:			fclean all

.PHONY: 	all clean fclean re 

#-fsanitize=address -g