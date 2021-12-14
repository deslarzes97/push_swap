/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeslarz <adeslarz@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:06:34 by adeslarz          #+#    #+#             */
/*   Updated: 2021/12/14 17:19:30 by adeslarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "./include/libft/libft.h"
# include "./include/ft_printf/ft_printf.h"

typedef struct s_stack_a
{
	int	*number;
	int	len;
}				t_stack_a;

typedef struct s_stack
{
	t_stack_a		*stack_a;
	t_stack_a		*stack_b;
}				t_stack;

int		error_msg(char *str);
int		check_input(char *str);
#endif
