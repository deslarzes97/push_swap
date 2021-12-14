/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:15:51 by adeslarz          #+#    #+#             */
/*   Updated: 2021/12/13 14:39:44 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_argv(char **argv)
{
	int	i;
	int	j;
	int max = -2^31-1;
	int	*numbers;
	numbers = malloc(sizeof(int) * ft_strlen(*argv));
	if (!numbers)
		return (0);
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == '-' || (argv[i][j] >= '0' && argv[i][j] <= '9'))
				j++;
			else
				error_msg("Only numbers (int).");
		}

		int a = ft_atoi(argv[i]);
		if (a > max)
		{
			max = a;
		}
		numbers[i] = a;
		i++;
	}
	printf("Number[1] = %i\n", numbers[1]);
	printf("Number[2] = %i\n", numbers[2]);
	printf("Number[3] = %i\n", numbers[3]);
	printf("max = %i\n", max);
	return (1);
}
