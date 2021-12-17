/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeslarz <adeslarz@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:48:45 by adeslarz          #+#    #+#             */
/*   Updated: 2021/12/17 18:05:00 by adeslarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_input(char *str)
{
	t_stack	*stack;
	int		i;
	char	**temp;

	temp = ft_split(str, ' ');
	i = 0;
	while (temp[i])
		i++;
	ft_printf("index = %i\n", i);
	stack = malloc(sizeof(t_stack));
	//stack->stack_a = malloc(sizeof(t_stack_a));
	//stack->stack_a->number = malloc(sizeof(int) * i);
	if (!stack)
		return (0);
	ft_malloc(stack, i);
	i = 0;
	while (temp[i])
	{
		stack->stack_a->number[i] = ft_atoi(temp[i]);
		printf("value = %i\n", stack->stack_a->number[i]);
		/*if (check_args(&stack->stack_a->number[i]) == 0)
		{
			free(temp);
			error_msg("N'est pas un (int).");
		}*/
		//free(temp);
		i++;
	}
	return (1);
}
