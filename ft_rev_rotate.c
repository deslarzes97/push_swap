/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:14:12 by desa              #+#    #+#             */
/*   Updated: 2022/01/03 14:28:17 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_a(t_stack *stack)
{
	int	i;
	int	temp;

	i = 0;
	while (i < stack->stack_a->len)
	{
		temp = stack->stack_a->number[i];
		stack->stack_a->number[i] = stack->stack_a->number[stack->stack_a->len];
		stack->stack_a->number[stack->stack_a->len] = temp;
		i++;
	}
	ft_putstr_fd("rra\n", 1);
}

void	rev_rotate_b(t_stack *stack)
{
	int	i;
	int	temp;

	i = 0;
	while (i < stack->stack_b->len)
	{
		temp = stack->stack_b->number[i];
		stack->stack_b->number[i] = stack->stack_b->number[stack->stack_b->len];
		stack->stack_b->number[stack->stack_b->len] = temp;
		i++;
	}
	ft_putstr_fd("rrb\n", 1);
}
