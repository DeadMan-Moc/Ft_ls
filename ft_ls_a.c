/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 09:57:00 by amokgohl          #+#    #+#             */
/*   Updated: 2018/09/12 09:57:04 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_ls_a(char **args, int ac)
{
	struct stat	statbuf;
	char		**str;
	int			i;

	str = ft_swap(args);
	i = 1;
	while (ac > i)
	{
		if (stat(str[i], &statbuf) == 0)
		{
			ft_printf("%s\n", str[i]);
		}
		i++;
	}
}
