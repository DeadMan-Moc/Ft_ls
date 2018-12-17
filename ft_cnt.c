/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cnt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 10:12:12 by amokgohl          #+#    #+#             */
/*   Updated: 2018/09/12 10:12:14 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		ft_cnt(void)
{
	DIR				*dir;
	struct dirent	*sd;
	int				i;

	dir = opendir(".");
	if (!dir)
	{
		ft_printf("error");
		exit(1);
	}
	i = 0;
	while ((sd = readdir(dir)))
	{
		i++;
	}
	return (i);
}
