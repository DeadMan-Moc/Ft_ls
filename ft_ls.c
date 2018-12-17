/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 09:57:46 by amokgohl          #+#    #+#             */
/*   Updated: 2018/09/12 09:57:51 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static	int		one(const struct dirent *unused)
{
	(void)unused;
	return (1);
}

void			ft_ls(void)
{
	struct stat		statbuf;
	struct passwd	*pwd;
	struct dirent	**sd;
	int				n;
	int				i;

	pwd = getpwuid((geteuid()));
	n = scandir(".", &sd, one, alphasort);
	i = 0;
	while (i < n)
	{
		while (sd[i]->d_name[0] == '.')
			free(sd[i++]);
		if (stat(sd[i]->d_name, &statbuf) == 0)
		{
			ft_printf("%s\n", sd[i]->d_name);
		}
		free(sd[i]);
		i++;
	}
	free(sd);
}
