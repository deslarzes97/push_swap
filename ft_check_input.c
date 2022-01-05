/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:48:45 by adeslarz          #+#    #+#             */
/*   Updated: 2022/01/05 19:57:35 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_duplicate(int *nbr, int i)
{
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (j < i)
	{
		if (nbr[j] == nbr[i])
		{
			k++;
			break ;
		}
		j++;
		k++;
	}
	if (k != j)
		return (0);
	return (1);
}

static int	check_args_is_int(char *argv, int *nbr, int i)
{
	long int temp;

	if (argv[0] == '0')
	{
		nbr[i] = 0;
		return (1);
	}
	temp = ft_atoi(argv);
	if (temp < -2147483648 || temp > 2147483647)
		return (0);
	nbr[i] = temp;
	return (1);
}

void	check_input_string(char **argv, t_stack *stack)
{
	int		i;
	char	**temp;

	temp = ft_split(argv[1], ' ');
	i = 0;
	while (temp[i])
		i++;
	stack->number = malloc(sizeof(long int) * i);
	i = 0;
	while (temp[i])
	{
		if (!check_args_is_int(temp[i], stack->number, i) ||
			!check_duplicate(stack->number, i))
		{
			free(stack->number);
			error_msg("banane");
		}
		free(temp[i]);
		i++;
	}
	stack->len = i;
	free(temp);
}

void	check_input_args(char **argv, int argc, t_stack *stack)
{
	int	i;

	i = 0;
	stack->number = malloc(sizeof(long int) * argc);
	while (argc)
	{
		if (!check_args_is_int(argv[i + 1], stack->number, i) ||
			!check_duplicate(stack->number, i))
		{
			free(stack->number);
			error_msg("");
		}
		i++;
		argc--;
	}
	stack->len = i;
}
