/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 14:55:18 by amokgohl          #+#    #+#             */
/*   Updated: 2018/06/14 17:24:53 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, size_t start, size_t len)
{
	char *ret;

	if (!s || start + len > ft_strlen(s))
		return (NULL);
	ret = ft_strnew(len);
	if (!ret)
		return (NULL);
	return (ft_strncpy(ret, s + start, len));
}
