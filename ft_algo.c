/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 11:43:22 by desa              #+#    #+#             */
/*   Updated: 2022/01/03 13:32:19 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_bits(t_stack *stack)
{
	int	temp;
	int	max_bits;

	max_bits = 0;
	temp = get_int_max(stack);
	while (temp >> max_bits != 0)
		max_bits++;
	return (max_bits);
}

void	ft_algo(t_stack *stack)
{
	int	j;
	int	i;
	int	len;
	int	max_bits;

	i = 0;
	j = 0;
	len = stack->stack_a->len;
	max_bits = get_max_bits(stack);
	while (i < max_bits)
	{
		while (j < len)
		{
			if ((stack->stack_a->number[0] >> i) & 1)
				rotate_a(stack);
			else
				stack->stack_b->number = push_b(stack);
			j++;
		}
		j = 0;
		i++;
		while (stack->stack_b->len)
			stack->stack_a->number = push_a(stack);
	}
}