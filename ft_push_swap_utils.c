/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 20:17:43 by desa              #+#    #+#             */
/*   Updated: 2022/01/03 19:34:21 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_order(t_stack *stack)
{
	int	i;
	int	temp;

	temp =	stack->stack_a->number[0];
	i = 0;
	while (i < stack->stack_a->len - 1)
	{
		if (temp > stack->stack_a->number[i + 1])
			return (0);
		i++;
		temp = stack->stack_a->number[i];
	}
	return (1);
}

int	get_int_min(t_stack *stack)
{
	int	i;
	int	min;

	i = 0;
	min = stack->stack_a->number[i];
	while (i <= stack->stack_a->len)
	{

		if (min > stack->stack_a->number[i])
			min = stack->stack_a->number[i];
		i++;
	}
	return (min);
}

int	get_int_max(t_stack *stack)
{
	int	i;
	int	max;

	i = 0;
	max = stack->stack_a->number[i];
	while (i <= stack->stack_a->len)
	{

		if (max < stack->stack_a->number[i])
			max = stack->stack_a->number[i];
		i++;
	}
	return (max);

}
