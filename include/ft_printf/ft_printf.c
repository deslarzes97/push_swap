/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeslarz <adeslarz@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:46:44 by adeslarz          #+#    #+#             */
/*   Updated: 2021/12/14 16:12:36 by adeslarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Fonction qui choisit la bon mode de print pour ft_printf
void	get_value(const char *str, va_list *args, int *count, int i)
{
	if (str[i] == 'c')
		ft_putchar_fd_printf(va_arg(*args, int), count);
	else if (str[i] == 's')
		ft_putstr_fd_printf(va_arg(*args, char *), count);
	else if (str[i] == 'i')
		ft_putnbr_fd_printf(va_arg(*args, int), count);
	else if (str[i] == 'd')
		ft_putnbr_fd_printf(va_arg(*args, int), count);
	else if (str[i] == 'u')
		ft_putnbr_fd_unsigned(va_arg(*args, unsigned int), count);
	else if (str[i] == '%')
		ft_putchar_fd_printf('%', count);
	else if (str[i] == 'x')
		ft_putnbr_fd_hexa(va_arg(*args, unsigned int), count, 'a');
	else if (str[i] == 'X')
		ft_putnbr_fd_hexa(va_arg(*args, unsigned int), count, 'A');
	else if (str[i] == 'p')
		ft_putnbr_p(va_arg(*args, unsigned long), count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar_fd_printf(str[i], &count);
		else
		{
			i++;
			get_value(str, &args, &count, i);
		}
		i++;
	}
	va_end(args);
	return (count);
}
