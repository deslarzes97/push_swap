/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeslarz <adeslarz@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:25:28 by adeslarz          #+#    #+#             */
/*   Updated: 2021/12/14 16:11:39 by adeslarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Fonction qui converti des décimals en hexadécimal.
static int	putnbr_p_convert_basehexa(unsigned long int nbr,
			int *count, int maj_min)
{
	char	temp;

	if (nbr)
	{
		putnbr_p_convert_basehexa(nbr / 16, count, maj_min);
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

//Fonction qui écrit l'adresse d'un pointeur en hexa
void	ft_putnbr_p(unsigned long int nbr, int *count)
{
	write(1, "0x", 2);
	*count += 2;
	if (nbr == 0)
		ft_putchar_fd_printf('0', count);
	else
		putnbr_p_convert_basehexa(nbr, count, 'a');
}
