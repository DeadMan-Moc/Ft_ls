/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 16:21:28 by amokgohl          #+#    #+#             */
/*   Updated: 2018/05/23 15:06:52 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_toupper(int c)
{
	if ((c >= 'a' && c <= 'z'))
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}
