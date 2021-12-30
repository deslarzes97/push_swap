/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:05:57 by adeslarz          #+#    #+#             */
/*   Updated: 2021/12/30 17:24:46 by desa             ###   ########.fr       */
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
	return (0);
}
