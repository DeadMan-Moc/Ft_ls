/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_r.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:45:10 by amokgohl          #+#    #+#             */
/*   Updated: 2018/09/11 15:45:17 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_ls_r(char **args, int count)
{
	struct stat	statbuf;
	char		**str;
	int			i;

	str = ft_swap_r(args);
	i = 1;
	while (count > i)
	{
		if (stat(str[i], &statbuf) == 0)
		{
			ft_printf("%s\n", str[i]);
		}
		i++;
	}
}
