/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 09:04:31 by amokgohl          #+#    #+#             */
/*   Updated: 2018/06/12 14:09:17 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		length;

	length = ft_strlen((char *)s);
	while (0 != length && s[length] != (char)c)
		length--;
	if (s[length] == (char)c)
		return ((char *)&s[length]);
	return (0);
}
