/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeslarz <adeslarz@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:46:57 by adeslarz          #+#    #+#             */
/*   Updated: 2021/12/14 16:19:01 by adeslarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
size_t	ft_strlen_printf(const char *str);
void	ft_putstr_fd_printf(const char *s, int *count);
void	ft_putchar_fd_printf(const char c, int *count);
void	ft_putnbr_fd_hexa(unsigned int nbr, int *count, char maj_min);
void	ft_putnbr_fd_printf(int n, int *count);
void	ft_putnbr_fd_unsigned(unsigned int n, int *count);
void	ft_putnbr_p(unsigned long int n, int *count);

#endif
