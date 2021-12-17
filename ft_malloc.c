/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeslarz <adeslarz@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 22:25:18 by desa              #+#    #+#             */
/*   Updated: 2021/12/17 17:54:08 by adeslarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_malloc(t_stack *stack, int i)
{
	stack->stack_a = malloc(sizeof(t_stack_a));
	stack->stack_b = malloc(sizeof(t_stack_a));
	stack->stack_a->number = malloc(sizeof(int) * i);
}
