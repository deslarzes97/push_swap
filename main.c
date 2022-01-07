/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:05:57 by adeslarz          #+#    #+#             */
/*   Updated: 2022/01/08 00:48:44 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	stacks;
	int			*copy;
	char		**temp;

	copy = NULL;
	ft_malloc(&stacks);
	if (!stacks.stack_a || !stacks.stack_b)
		return (0);
	stacks.stack_b->len = 0;
	if (argc-- == 1)
		exit (0);
	if (argc == 1)
	{
		temp = ft_split(argv[1], ' ');
		check_input_args(temp, stacks.stack_a, 0);
	}
	else
		check_input_args(argv, stacks.stack_a, 1);
	copy = get_ordered_array(&stacks, copy);
	stacks.stack_a->number = to_radix(&stacks, copy);
	preliminary_check(&stacks);
	if (!check_order(stacks.stack_a))
		ft_algo(&stacks);
	ft_free(&stacks, copy);
	return (0);
}
