/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_unsigned.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeslarz <adeslarz@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:49:03 by adeslarz          #+#    #+#             */
/*   Updated: 2021/12/14 16:11:28 by adeslarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_nbr_unsigned(unsigned int nbr)
{
	int	size;

	size = 0;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		size++;
	}
	return (size);
}

void	write_nbr_unsigned(unsigned int nbr)
{
	unsigned int	temp;

	if (nbr >= 10)
		write_nbr_unsigned(nbr / 10);
	temp = (char)(nbr % 10 + '0');
	write(1, &temp, 1);
}

void	ft_putnbr_fd_unsigned(unsigned int n, int *count)
{
	if (n == 0)
		ft_putchar_fd_printf('0', count);
	else
	{
		*count += len_nbr_unsigned(n);
		write_nbr_unsigned(n);
	}
}
