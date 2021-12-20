/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeslarz <adeslarz@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:10:46 by adeslarz          #+#    #+#             */
/*   Updated: 2021/12/20 16:06:26 by adeslarz         ###   ########.fr       */
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
