/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_g.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:22:20 by amokgohl          #+#    #+#             */
/*   Updated: 2018/09/12 10:12:49 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

static int		one(const struct dirent *unused)
{
	(void)unused;
	return (1);
}

void			ls_g(void)
{
	struct stat		statbuf;
	struct group	*grp;
	struct passwd	*pwd;
	struct dirent	**sd;
	int				n;
	int				i;

	pwd = getpwuid((geteuid()));
	n = scandir(".", &sd, one, alphasort);
	i = 1;
	while (i < n)
	{
		while (strncmp(sd[i]->d_name, ".", 1) == 0)
			i++;
		if (stat(sd[i]->d_name, &statbuf) == 0)
		{
			ft_permision(sd[i]->d_name);
			ft_printf(" %-2d ", statbuf.st_nlink);
			if ((grp = getgrgid(statbuf.st_gid)) != NULL)
				ft_printf(" %-8.8s %5d %s %s\n", grp->gr_name,
						(int)statbuf.st_size, 
						ft_grp(ctime(&statbuf.st_mtime)),
						sd[i]->d_name);
			else
				ft_printf(" %-8d %5d %s %s\n", statbuf.st_gid,
						(int)statbuf.st_size, 
						ft_grp(ctime(&statbuf.st_mtime)),
						sd[i]->d_name);
		}
		free(sd[i]);
		i++;
	}
	free(sd);
}
