/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 22:25:18 by desa              #+#    #+#             */
/*   Updated: 2022/01/05 19:36:26 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_stacks *stack)
{
	free(stack->stack_a->number);
	free(stack->stack_b->number);
	free(stack->stack_a);
	free(stack->stack_b);
}
