/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:51:51 by desa              #+#    #+#             */
/*   Updated: 2022/01/04 22:18:18 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Décale tout les éléments du tableau de 1 vers le haut.
void	rotate_a(t_stack *stack)
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
	stack->stack_b->number[i] = stack->stack_b->number[stack->stack_b->len - 1];
	stack->stack_b->number[stack->stack_b->len - 1] = temp;
	i = 1;
	while (i < stack->stack_b->len - 1)
	{
		temp = stack->stack_b->number[i];
		stack->stack_b->number[i] = stack->stack_b->number[i - 1];
		stack->stack_b->number[i - 1] = temp;
		i++;
	}
	ft_putstr_fd("rb\n", 1);
}
