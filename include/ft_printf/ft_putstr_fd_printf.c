/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_printf.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeslarz <adeslarz@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:48:57 by adeslarz          #+#    #+#             */
/*   Updated: 2021/12/14 16:11:01 by adeslarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Fonction qui imprime une chaîne de caractères dans le terminal.
void	ft_putstr_fd_printf(const char *s, int *count)
{
	int	i;

	if (!s)
	{
		write(1, "(null)", 6);
		*count += 6;
	}
	else
	{
		i = ft_strlen_printf(s);
		*count += i;
		write(1, s, i);
	}
}
