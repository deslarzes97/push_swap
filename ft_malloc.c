/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 22:25:18 by desa              #+#    #+#             */
/*   Updated: 2022/01/07 23:08:58 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_malloc(t_stacks *stacks)
{
	stacks->stack_a = malloc(sizeof(t_stack));
	stacks->stack_b = malloc(sizeof(t_stack));
	stacks->stack_b->number = malloc(sizeof(t_stack));
}

void	ft_free(t_stacks *stack, int *copy)
{
	free(stack->stack_a->number);
	free(stack->stack_b->number);
	free(stack->stack_a);
	free(stack->stack_b);
	free(copy);
}

void	ft_free_split(char **temp)
{
	int	i;

	i = 0;
	while(temp[++i])
		free(temp[i]);
	free(temp);
}
