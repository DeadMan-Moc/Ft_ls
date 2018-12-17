/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 14:02:39 by amokgohl          #+#    #+#             */
/*   Updated: 2018/06/14 11:17:43 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	unsigned int	st;
	unsigned int	e;
	unsigned int	i;
	unsigned int	wc;
	char			**table;

	wc = 0;
	table = NULL;
	i = 0;
	if (s && ((table = (char **)malloc(sizeof(*table) * ft_strlen(s)))))
	{
		while (i < ft_strlen(s))
		{
			while (s[i] == c && s[i])
				i++;
			st = i;
			while (s[i] != c && s[i])
				i++;
			e = i;
			if ((e - st) > 0)
				table[wc++] = ft_strsub(s, st, e - st);
		}
		table[wc] = 0;
	}
	return (table);
}
