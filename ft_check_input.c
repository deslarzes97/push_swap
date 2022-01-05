/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:48:45 by adeslarz          #+#    #+#             */
/*   Updated: 2022/01/05 15:49:24 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_duplicate(long nbr, t_stack *stack)
{
	int	i;

	i = 0;
	while (i <= stack->stack_a->len - 1)
	{
		if (stack->stack_a->number[i] == nbr)
		{
			error_msg("Doublons\n", stack);
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

int	check_input_string(char *str, t_stack *stack)
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
		check_duplicate(ft_atoi(temp[i]), stack);
		stack->stack_a->number[i] = ft_atoi(temp[i]);
		free(temp[i]);
	}
	stack->stack_a->len = i;
	free(temp);
	stack->stack_b->len = 1;
	//stack->stack_b->number[0] = 0;
	return (1);
}

int	check_input_args(char **argv, int argc, t_stack *stack)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	ft_malloc(stack, argc);
	while (argc)
	{
		if (check_args_is_int(ft_atoi(argv[i])) == 0)
			ft_clean_exit(stack);
		check_duplicate(ft_atoi(argv[i]), stack);
		stack->stack_a->number[j] = ft_atoi(argv[i]);
		i++;
		j++;
		argc--;
	}
	stack->stack_a->len = j;
	stack->stack_b->len = 1;
	//stack->stack_b->number[0] = 0;
	return (1);
}
