/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_solve.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:21:54 by desa              #+#    #+#             */
/*   Updated: 2022/01/08 00:50:59 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	solve_three(t_stacks *stack)
{
	if (stack->stack_a->number[0] > stack->stack_a->number[1]
		&& stack->stack_a->number[0] > stack->stack_a->number[2])
	{
		rotate_a(stack);
		if (!check_order(stack->stack_a))
			swap_a(stack);
	}
	else if (stack->stack_a->number[0] > stack->stack_a->number[1]
		&& stack->stack_a->number[0] < stack->stack_a->number[2])
		swap_a(stack);
	else if (stack->stack_a->number[0] < stack->stack_a->number[1]
		&& stack->stack_a->number[0] < stack->stack_a->number[2])
	{
		stack->stack_b->number = push_b(stack);
		swap_a(stack);
		stack->stack_a->number = push_a(stack);
	}
	else if (stack->stack_a->number[0] < stack->stack_a->number[1]
		&& stack->stack_a->number[0] > stack->stack_a->number[2])
		rev_rotate_a(stack);
}

static void	solve_four(t_stacks *stack)
{
	int	min;
	int	i;

	i = 0;
	min = get_int_min(stack);
	while (i < stack->stack_a->len)
	{
		if (stack->stack_a->number[0] == min)
		{
			stack->stack_b->number = push_b(stack);
			break ;
		}
		else
			rotate_a(stack);
		i++;
	}
	if (!check_order(stack->stack_a))
		solve_three(stack);
	if (!check_order(stack->stack_b))
		swap_b(stack);
	stack->stack_a->number = push_a(stack);
}

static void	solve_five_2(t_stacks *stack)
{
	if (!check_order(stack->stack_a))
		solve_three(stack);
	if (!check_order(stack->stack_b))
		swap_b(stack);
	stack->stack_a->number = push_a(stack);
	stack->stack_a->number = push_a(stack);
	rotate_a(stack);
}

static void	solve_five(t_stacks *stack)
{
	int	min;
	int	max;
	int	i;
	int	get_both;

	get_both = 0;
	i = 0;
	min = get_int_min(stack);
	max = get_int_max(stack);
	while (i < stack->stack_a->len)
	{
		if (stack->stack_a->number[0] == min || \
			stack->stack_a->number[0] == max)
		{
			i = -1;
			stack->stack_b->number = push_b(stack);
			if (++get_both == 2)
				break ;
		}
		else
			rotate_a(stack);
		i++;
	}
	solve_five_2(stack);
}

void	preliminary_check(t_stacks *stack)
{
	if ((stack->stack_a->len == 2) && !check_order(stack->stack_a))
		swap_a(stack);
	else if ((stack->stack_a->len == 3) && !check_order(stack->stack_a))
		solve_three(stack);
	else if ((stack->stack_a->len == 4)
		&& !check_order(stack->stack_a))
		solve_four(stack);
	else if ((stack->stack_a->len == 5)
		&& !check_order(stack->stack_a))
		solve_five(stack);
}
