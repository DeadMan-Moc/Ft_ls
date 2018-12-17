/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 10:12:48 by amokgohl          #+#    #+#             */
/*   Updated: 2018/06/15 11:36:19 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*x;
	int		i;

	if (!s || !f)
		return (NULL);
	x = ft_strnew(ft_strlen(s));
	if (!x)
		return (NULL);
	i = -1;
	while (s[++i])
		x[i] = f(s[i]);
	return (x);
}
