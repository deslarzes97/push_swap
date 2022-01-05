/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 20:17:43 by desa              #+#    #+#             */
/*   Updated: 2022/01/05 19:14:46 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_order(t_stack *stack)
{
	int	i;
	int	temp;

	i = 0;
	temp =	stack->number[i];
	while (i < stack->len - 1)
	{
		if (temp > stack->number[i + 1])
			return (0);
		i++;
		temp = stack->number[i];
	}
	return (1);
}

int	get_int_min(t_stacks *stack)
{
	int	i;
	int	min;

	i = 0;
	min = stack->stack_a->number[i];
	while (i < stack->stack_a->len)
	{

		if (min > stack->stack_a->number[i])
			min = stack->stack_a->number[i];
		i++;
	}
	return (min);
}

int	get_int_max(t_stacks *stack)
{
	int	i;
	int	max;

	i = 0;
	max = stack->stack_a->number[i];
	while (i < stack->stack_a->len)
	{

		if (max < stack->stack_a->number[i])
			max = stack->stack_a->number[i];
		i++;
	}
	return (max);
}
