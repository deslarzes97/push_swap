/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:48:45 by adeslarz          #+#    #+#             */
/*   Updated: 2021/12/14 23:00:15 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*static int	check_args(t_stack *stack_t)
{
	if (*number < -2147483648 || *number > 2147483647)
		return (0);
	else
		return (1);
}*/

int	check_input(char *str)
{
	int		i;
	char	**temp;
	t_stack	*stack;

	temp = ft_split(str, ' ');
	i = 0;
	while (temp[i])
		i++;
	ft_printf("index = %i\n", i);
	stack = malloc(sizeof(t_stack) * i);
	if (!stack)
		return (0);
	ft_malloc(stack);
	i = 0;
	while (temp[i])
	{
		stack->stack_a->number[i] = ft_atoi(*temp);
		/*if (check_args(&stack->stack_a->number[i]) == 0)
		{
			free(temp);
			error_msg("N'est pas un (int).");
		}*/
		free(temp[i]);
		i++;
	}
	return (1);
}
