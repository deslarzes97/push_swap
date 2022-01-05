/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:14:12 by desa              #+#    #+#             */
/*   Updated: 2022/01/05 20:36:38 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Décale tout les éléments du tableau d'int de 1 vers le bas.
void	rev_rotate_a(t_stacks *stack)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack->stack_a->number[i];
	stack->stack_a->number[i] = stack->stack_a->number[stack->stack_a->len - 1];
	stack->stack_a->number[stack->stack_a->len - 1] = temp;
	i = 1;
	while (i < stack->stack_a->len - 1)
	{
		temp = stack->stack_a->number[i];
		stack->stack_a->number[i] = stack->stack_a->number[i + 1];
		stack->stack_a->number[i + 1] = temp;
		i++;
	}
	ft_putstr_fd("rra\n", 1);
}

void	rev_rotate_b(t_stacks *stack)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack->stack_a->number[i];
	stack->stack_b->number[i] = stack->stack_b->number[stack->stack_b->len - 1];
	stack->stack_b->number[stack->stack_b->len - 1] = temp;
	i = 1;
	while (i < stack->stack_b->len - 1)
	{
		temp = stack->stack_b->number[i];
		stack->stack_b->number[i] = stack->stack_b->number[i + 1];
		stack->stack_b->number[i + 1] = temp;
		i++;
	}
	ft_putstr_fd("rrb\n", 1);
}
