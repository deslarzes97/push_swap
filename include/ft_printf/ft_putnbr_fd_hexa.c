/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_hexa.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeslarz <adeslarz@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:16:15 by adeslarz          #+#    #+#             */
/*   Updated: 2021/12/14 16:12:55 by adeslarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Fonction qui converti des décimals en hexadécimal.
static int	putnbr_int_convert_basehexa(unsigned int nbr,
		int *count, char maj_min)
{
	char	temp;

	if (nbr)
	{
		putnbr_int_convert_basehexa(nbr / 16, count, maj_min);
		temp = (nbr % 16);
		if (temp < 10)
			temp = temp + '0';
		else
			temp = temp - 10 + maj_min;
		*count += 1;
		write(1, &temp, 1);
	}
	return (0);
}

void	ft_putnbr_fd_hexa(unsigned int nbr, int *count, char maj_min)
{
	if (nbr == 0)
	{
		ft_putchar_fd_printf('0', count);
		count += 1;
	}
	else
		putnbr_int_convert_basehexa(nbr, count, maj_min);
}
