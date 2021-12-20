/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeslarz <adeslarz@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:48:45 by adeslarz          #+#    #+#             */
/*   Updated: 2021/12/20 16:11:54 by adeslarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_no_double(long nbr, t_stack *stack)
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

static int	check_args(long nbr)
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
	stack->stack_a->number[0] = 0;
	i = -1;
	while (temp[++i])
	{
		if (check_args(ft_atoi(temp[i])) == 0)
			ft_clean_exit(stack);
		stack->stack_a->len = i;
		stack->stack_a->number[i] = ft_atoi(temp[i]);
		check_no_double(ft_atoi(temp[i]), stack);
		free(temp[i]);
	}
	free(temp);
	return (1);
}
