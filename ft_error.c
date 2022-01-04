/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:10:46 by adeslarz          #+#    #+#             */
/*   Updated: 2022/01/03 22:53:35 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_clean_exit(t_stack *stack)
{
	ft_free(stack);
	exit(1);
}

int	error_msg(char *str, t_stack *stack)
{
	ft_free(stack);
	write(1, "Error\n", 7);
	write(1, str, ft_strlen(str));
	exit(1);
	return (1);
}
