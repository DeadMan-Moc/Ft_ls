/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 09:59:21 by amokgohl          #+#    #+#             */
/*   Updated: 2018/09/12 10:11:47 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static	int		one(const struct dirent *unused)
{
	(void)unused;
	return (1);
}

void			flag_a(void)
{
	struct stat		statbuf;
	struct passwd	*pwd;
	struct dirent	**sd;
	int				n;
	int				i;

	pwd = getpwuid((geteuid()));
	n = scandir(".", &sd, one, alphasort);
	i = 1;
	while (i < n)
	{
		if (stat(sd[i]->d_name, &statbuf) == 0)
		{
			ft_printf("%s\n", sd[i]->d_name);
		}
		free(sd[i]);
		i++;
	}
	free(sd);
}
