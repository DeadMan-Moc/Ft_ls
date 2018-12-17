/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 10:38:31 by amokgohl          #+#    #+#             */
/*   Updated: 2018/06/15 10:36:24 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		get_num_len(int n)
{
	size_t			len;

	len = 1;
	while (n /= 10)
		len++;
	return (len);
}

char				*ft_itoa(int n)
{
	char			*s;
	size_t			len;
	unsigned int	number;

	len = get_num_len(n);
	number = n;
	if (n < 0)
	{
		number = -n;
		len++;
	}
	if (!(s = ft_strnew(len)))
		return (NULL);
	s[--len] = number % 10 + '0';
	while (number /= 10)
		s[--len] = number % 10 + '0';
	if (n < 0)
		*(s + 0) = '-';
	return (s);
}
