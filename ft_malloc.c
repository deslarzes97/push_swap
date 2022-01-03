/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 22:25:18 by desa              #+#    #+#             */
/*   Updated: 2022/01/03 19:18:18 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_malloc(t_stack *stack, int len)
{
	stack->stack_a = malloc(sizeof(t_stack_a));
	stack->stack_b = malloc(sizeof(t_stack_a));
	stack->stack_a->number = malloc(sizeof(long int) * len);
	stack->stack_b->number = malloc(sizeof(long int) * len);
}

void	ft_free(t_stack *stack)
{
	free(stack->stack_a->number);
	free(stack->stack_b->number);
	free(stack->stack_a);
	free(stack->stack_b);
	free(stack);
}
