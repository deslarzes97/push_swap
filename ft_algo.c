/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 11:43:22 by desa              #+#    #+#             */
/*   Updated: 2022/01/07 01:51:36 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	get_max_bits(t_stacks *stack)
{
	int	i;
	int	size;
	int	temp;
	int	max_bits;

	max_bits = 0;
	i = 0;
	size = stack->stack_a->len;
	temp = get_int_max(stack);
	while (temp >> max_bits != 0)
		max_bits++;
	return (max_bits);
}

void	ft_algo(t_stacks *stacks)
{
	int	j;
	int	i;
	int	size;
	int	max_bits;

	i = 0;
	size = stacks->stack_a->len;
	max_bits = get_max_bits(stacks);
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((stacks->stack_a->number[0] >> i) & 1)
				rotate_a(stacks);
			else
				stacks->stack_b->number = push_b(stacks);
			j++;
		}
		i++;
		while (stacks->stack_b->len)
			stacks->stack_a->number = push_a(stacks);
	}
}
