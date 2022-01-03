/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:07:04 by desa              #+#    #+#             */
/*   Updated: 2022/01/03 14:19:15 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *num1, int *num2)
{
	int	temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int	*get_ordered_array(t_stack *stack, int *copy)
{
	int	len;
	int	i;
	int	j;

	i = -1;
	j = 1;
	len = stack->stack_a->len;
	copy = malloc(sizeof(int) * len);
	while (++i < len)
		copy[i] = stack->stack_a->number[i];
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

int	*to_radix(t_stack *stack, int *copy)
{
	int	i;
	int	j;
	int	len;
	int	*new_tab;

	i = 0;
	j = 0;
	len = stack->stack_a->len;
	new_tab = malloc(sizeof(int) * len);
	while (i < len)
	{
		while (j < len)
		{
			if (stack->stack_a->number[i] == copy[j])
			{
				new_tab[i] = j;
			}
			j++;
		}
		j = 0;
		i++;
	}
	free(stack->stack_a->number);
	return (new_tab);
}