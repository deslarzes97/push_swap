/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeslarz <adeslarz@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:06:17 by adeslarz          #+#    #+#             */
/*   Updated: 2021/10/27 08:49:48 by adeslarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbr_words(char *s, char c)
{
	int	i;
	int	j;
	int	is_set;

	is_set = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && is_set == 0)
		{
			is_set = 1;
			j++;
		}
		else if (s[i] == c && is_set == 1)
			is_set = 0;
		i++;
	}
	return (j);
}

static int	ft_len_word(char *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		nbr_words;
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	nbr_words = ft_nbr_words((char *)s, c);
	tab = (char **)malloc(sizeof(char *) * (nbr_words + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (nbr_words)
	{
		while (*s == c && *s != '\0')
			s++;
		tab[i] = ft_substr((char *)s, 0, ft_len_word((char *)s, c));
		s = s + ft_len_word((char *)s, c);
		i++;
		nbr_words--;
	}
	tab[i] = NULL;
	return (tab);
}
