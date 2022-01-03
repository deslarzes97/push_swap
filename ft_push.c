/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:51:55 by desa              #+#    #+#             */
/*   Updated: 2022/01/03 13:22:58 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	redefine_stack_a(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i <= stack->stack_a->len)
		stack->stack_a->number[i] = stack->stack_a->number[i + 1];

}

static void	redefine_stack_b(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i <= stack->stack_b->len)
		stack->stack_b->number[i] = stack->stack_b->number[i + 1];

}

int	*push_b(t_stack *stack)
{
	int	*new_stack;
	int	i;
	int	j;

	new_stack = malloc(sizeof(int) * (stack->stack_b->len + 1));
	i = 0;
	j = 0;
	if (stack->stack_b->len != 0)
	{
		new_stack[0] = stack->stack_a->number[0];
		while (i < stack->stack_b->len - 1)
			new_stack[++i] = stack->stack_b->number[j++];
	}
	free(stack->stack_b->number);
	stack->stack_b->len += 1;
	stack->stack_a->len -= 1;
	redefine_stack_a(stack);
	ft_putstr_fd("pb\n", 1);
	return (new_stack);
}


int	*push_a(t_stack *stack)
{
	int	*new_stack;
	int	i;
	int	j;

	new_stack = malloc(sizeof(int) * (stack->stack_a->len + 1));
	i = 0;
	j = 0;
	if (stack->stack_a->len != 0)
	{
		new_stack[0] = stack->stack_b->number[0];
		while (i < stack->stack_a->len - 1)
			new_stack[++i] = stack->stack_a->number[j++];
	}
	free(stack->stack_a->number);
	stack->stack_a->len += 1;
	stack->stack_b->len -= 1;
	redefine_stack_b(stack);
	ft_putstr_fd("pa\n", 1);
	return (new_stack);
}
