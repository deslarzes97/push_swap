/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:07:04 by desa              #+#    #+#             */
/*   Updated: 2022/01/07 22:45:29 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *number1, int *number2)
{
	int	temp;

	temp = *number1;
	*number1 = *number2;
	*number2 = temp;
}

int	*get_ordered_array(t_stacks *stacks, int *copy)
{
	int	len;
	int	i;
	int	j;

	i = -1;
	j = 1;
	len = stacks->stack_a->len;
	copy = malloc(sizeof(int) * len);
	while (++i < len)
		copy[i] = stacks->stack_a->number[i];
	i = 0;
	while (i < len)
	{
		while (j < len)
		{
			if (copy[i] > copy[j])
				ft_swap(&copy[i], &copy[j]);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (copy);
}

int	*to_radix(t_stacks *stacks, int *copy)
{
	int	i;
	int	j;
	int	len;
	int	*new_stack;

	i = 0;
	len = stacks->stack_a->len;
	new_stack = malloc(sizeof(int) * len);
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (stacks->stack_a->number[i] == copy[j])
			{
				new_stack[i] = j;
			}
			j++;
		}
		i++;
	}
	free(stacks->stack_a->number);
	return (new_stack);
}
