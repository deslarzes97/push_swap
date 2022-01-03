/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:48:45 by adeslarz          #+#    #+#             */
/*   Updated: 2022/01/03 14:17:18 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_order(t_stack *stack)
{
	int	i;
	int	temp;

	temp =	stack->stack_a->number[0];
	i = 0;
	while (i < stack->stack_a->len - 1)
	{
		if (temp > stack->stack_a->number[i + 1])
			return (0);
		i++;
		temp = stack->stack_a->number[i];
	}
	return (1);
}

static int	check_duplicate(long nbr, t_stack *stack)
{
	int	i;

	i = 0;
	while (i <= stack->stack_a->len - 1)
	{
		if (stack->stack_a->number[i] == nbr)
		{
			error_msg("Doublons", stack);
		}
		else
			i++;
	}
	return (1);
}

static int	check_args_is_int(long nbr)
{
	if (nbr < -2147483648 || nbr > 2147483647)
		return (0);
	else
		return (1);
}

int	check_input(char *str, t_stack *stack)
{
	int		i;
	char	**temp;

	temp = ft_split(str, ' ');
	i = 0;
	while (temp[i])
		i++;
	ft_malloc(stack, i);
	i = -1;
	while (temp[++i])
	{
		if (check_args_is_int(ft_atoi(temp[i])) == 0)
			ft_clean_exit(stack);
		stack->stack_a->len = i;
		stack->stack_a->number[i] = ft_atoi(temp[i]);
		check_duplicate(ft_atoi(temp[i]), stack);
		free(temp[i]);
	}
	free(temp);
	stack->stack_b->len = 1;
	stack->stack_b->number[0] = 0;
	return (1);
}
