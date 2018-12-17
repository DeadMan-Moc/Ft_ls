/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:59:53 by amokgohl          #+#    #+#             */
/*   Updated: 2018/06/14 15:32:46 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *small)
{
	size_t n;

	n = ft_strlen(small);
	if (!*small)
		return ((char *)big);
	while (*big)
		if (!ft_memcmp(big++, small, n))
			return ((char *)big - 1);
	return (0);
}
