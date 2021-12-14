/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_printf.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeslarz <adeslarz@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:04:35 by adeslarz          #+#    #+#             */
/*   Updated: 2021/12/14 16:08:39 by adeslarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Fonction qui calcule la taille du nombre.
static int	len_nbr(int nbr)
{
	int		size;

	size = 0;
	if (nbr == -2147483648)
		size += 11;
	else
	{
		if (nbr < 0)
		{
			nbr = nbr * -1;
			size++;
		}
		while (nbr > 0)
		{
			nbr = nbr / 10;
			size++;
		}
	}
	return (size);
}

//Fonction qui écrit le nombre dans le terminal.
void	write_nbr(int n)
{
	unsigned int	temp;
	unsigned int	nbr;

	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else
	{
		if (n < 0)
		{
			write(1, "-", 1);
			nbr = (unsigned int)(n * -1);
		}
		else
			nbr = (unsigned int) n;
		if (nbr >= 10)
			write_nbr(nbr / 10);
		temp = (char)(nbr % 10 + '0');
		write(1, &temp, 1);
	}
}

void	ft_putnbr_fd_printf(int n, int *count)
{
	if (n == 0)
		ft_putchar_fd_printf('0', count);
	else
	{
		*count += len_nbr(n);
		write_nbr(n);
	}
}
