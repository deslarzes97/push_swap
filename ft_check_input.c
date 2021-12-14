/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeslarz <adeslarz@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:48:45 by adeslarz          #+#    #+#             */
/*   Updated: 2021/12/14 17:19:24 by adeslarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_args(int *number)
{
	if (*number < -2147483648 || *number > 2147483647)
		return (0);
	else
		return (1);
}

int	check_input(char *str)
{
	int		i;
	char	**temp;
	t_stack	*stack;

	temp = ft_split(str, ' ');
	i = 0;
	while (temp[i])
		i++;
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (0);
	i = 0;
	while (temp[i])
	{
		stack->stack_a->number[i] = ft_atoi(*temp);
		if (check_args(&stack->stack_a->number[i]) == 0)
		{
			free(temp);
			error_msg("N'est pas un (int).");
		}
		free(temp[i]);
		i++;
	}
	return (1);
}
