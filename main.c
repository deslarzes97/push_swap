/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:05:57 by adeslarz          #+#    #+#             */
/*   Updated: 2022/01/04 21:34:40 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main (int argc, char **argv)
{
	t_stack	*stack;
	int		*copy;
	int		i;

	i = -1;
	copy = NULL;
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (0);
	if (argc == 1)
		exit (0);
	if (argc == 2)
		check_input(argv[1], stack);
	else
		check_input(*argv, stack);
	copy = get_ordered_array(stack, copy);
	stack->stack_a->number = to_radix(stack, copy);
	preliminary_check(stack);
	if (!check_order(stack->stack_a))
		ft_algo(stack);
	ft_free(stack);
	return (0);
}
