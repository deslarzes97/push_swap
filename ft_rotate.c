/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:51:51 by desa              #+#    #+#             */
/*   Updated: 2022/01/03 23:37:58 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Décale de 1 vers le haut tout les éléments du tableau d'int.
void	rotate_a(t_stack *stack)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack->stack_a->number[i];
	stack->stack_a->number[i] = stack->stack_a->number[stack->stack_a->len];
	stack->stack_a->number[stack->stack_a->len] = temp;
	i = 1;
	while (i < stack->stack_a->len)
	{
		temp = stack->stack_a->number[i];
		stack->stack_a->number[i] = stack->stack_a->number[i - 1];
		stack->stack_a->number[i - 1] = temp;
		i++;
	}
	ft_putstr_fd("ra\n", 1);
}

void	rotate_b(t_stack *stack)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack->stack_b->number[i];
	stack->stack_b->number[i] = stack->stack_b->number[stack->stack_b->len];
	stack->stack_b->number[stack->stack_b->len] = temp;
	i = 1;
	while (i < stack->stack_b->len)
	{
		temp = stack->stack_b->number[i];
		stack->stack_b->number[i] = stack->stack_b->number[i - 1];
		stack->stack_b->number[i - 1] = temp;
		i++;
	}
	ft_putstr_fd("rb\n", 1);
}
