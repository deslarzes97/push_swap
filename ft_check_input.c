/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:48:45 by adeslarz          #+#    #+#             */
/*   Updated: 2021/12/18 19:00:47 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_args(long int nbr)
{
	if (nbr < -2147483648 || nbr > 2147483647)
		return (0);
	else
		return (1);
}

int	check_input(char *str)
{
	t_stack	*stack;
	int		i;
	char	**temp;

	temp = ft_split(str, ' ');
	i = 0;
	while (temp[i])
		i++;
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (0);
	ft_malloc(stack, i);
	i = -1;
	while (temp[++i])
	{
		if (check_args(ft_atoi(temp[i])) == 0)
		{
			free(temp);
			error_msg("N'est pas un (int).\n");
		}
		stack->stack_a->number[i] = ft_atoi(temp[i]);
		printf("value = %li\n", stack->stack_a->number[i]);
		free(temp[i]);
	}
	return (1);
}
