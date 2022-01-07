/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:48:45 by adeslarz          #+#    #+#             */
/*   Updated: 2022/01/07 22:35:12 by desa             ###   ########.fr       */
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

int	check_args_is_int_2(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_isdigit(argv[i]) != 1)
		 {
			 if (argv[i] != '-')
				return (0);
			 else if (argv[i] == '-')
			 {
				 if (ft_isdigit(argv[i + 1]) != 1)
				 	return (0);
			 }
		 }
		i++;
	}
	return (1);
}

static int	check_args_is_int(char *argv, int *nbr, int i)
{
	long int temp;

	if (check_args_is_int_2(argv) == 0)
		return(0);
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

void	check_input_args(char **argv, t_stack *stack, int check)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	j = 0;
	l = 0;
	if (check == 1)
		i = 1;
	while (argv[j])
		j++;
	stack->number = malloc(sizeof(long int) * j);
	while (argv[i])
	{
		if (!check_args_is_int(argv[i], stack->number, l) ||
			!check_duplicate(stack->number, l))
		{
			free(stack->number);
			ft_putstr_fd("Error\n", 2);
			exit(0);
		}
		i++;
		l++;
	}
	stack->len = l;
}
