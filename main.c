/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:05:57 by adeslarz          #+#    #+#             */
/*   Updated: 2021/12/28 17:26:40 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;
	int	i;

	i = -1;
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (0);
	if (argc == 1)
		exit (0);
	if (argc == 2)
		check_input(argv[1], stack);
	else
		check_input(*argv, stack);
	//swap_a(stack);
	//push_b(stack);
	//push_b(stack);
	stack->stack_b->number = push_b(stack);
	stack->stack_b->number = push_b(stack);
	stack->stack_b->number = push_b(stack);
	ft_printf("____AVANT____\n");
	ft_printf("stack_b->number %i\n", stack->stack_b->number[0]);
	ft_printf("stack_b->number %i\n", stack->stack_b->number[1]);
	ft_printf("stack_b->number %i\n", stack->stack_b->number[2]);
	swap_b(stack);
	printf("_____APRES_____\n");
	ft_printf("stack_b->number %i\n", stack->stack_b->number[0]);
	ft_printf("stack_b->number %i\n", stack->stack_b->number[1]);
	ft_printf("stack_b->number %i\n", stack->stack_b->number[2]);
	i = -1;
	while (++i <= stack->stack_a->len)
		ft_printf("a->number[i] = %i\n", stack->stack_a->number[i]);
	return (0);
}
