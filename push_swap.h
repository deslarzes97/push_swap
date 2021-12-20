/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:06:34 by adeslarz          #+#    #+#             */
/*   Updated: 2021/12/17 21:37:21 by desa             ###   ########.fr       */
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
	long int	*number;
	int	len;
}				t_stack_a;

typedef struct s_stack
{
	t_stack_a		*stack_a;
	t_stack_a		*stack_b;
}				t_stack;

int		error_msg(char *str);
int		check_input(char *str);
void	ft_malloc(t_stack *stack, int i);
void	ft_free(t_stack *stack);
#endif
