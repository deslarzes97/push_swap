/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:51:45 by desa              #+#    #+#             */
/*   Updated: 2022/01/05 19:21:40 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stacks *stack)
{
	int	temp;

	if (stack->stack_a->len >= 2)
	{
		temp = stack->stack_a->number[0];
		stack->stack_a->number[0] = stack->stack_a->number[1];
		stack->stack_a->number[1] = temp;
	}
	ft_putstr_fd("sa\n", 1);
}

void	swap_b(t_stacks *stack)
{
	int	temp;

	if (stack->stack_b->len >= 2)
	{
		temp = stack->stack_b->number[0];
		stack->stack_b->number[0] = stack->stack_b->number[1];
		stack->stack_b->number[1] = temp;
	}
	ft_putstr_fd("sb\n", 1);
}
