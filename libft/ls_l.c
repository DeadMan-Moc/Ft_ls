/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_l.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:08:06 by amokgohl          #+#    #+#             */
/*   Updated: 2018/09/12 10:13:10 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

static int		one(const struct dirent *unused)
{
	(void)unused;
	return (1);
}

void			ls_l(void)
{
	struct stat		statbuf;
	struct group	*grp;
	struct passwd	*pwd;
	struct dirent	**sd;
	int				n;
	int				i;
	char			*s;

	pwd = getpwuid((geteuid()));
	n = scandir(".", &sd, one, alphasort);
	i = 1;
	while (i < n)
	{
		while(sd[i]->d_name[0] == '.')
			free(sd[i++]);
		if (stat(sd[i]->d_name, &statbuf) == 0)
		{
			s = ft_grp(ctime(&statbuf.st_mtime));
			ft_permision(sd[i]->d_name);
			ft_printf(" %-2d %4s  ", statbuf.st_nlink, pwd->pw_name);
			if ((grp = getgrgid(statbuf.st_gid)) != NULL)
				ft_printf(" %-8.8s %5d %s %s\n",grp->gr_name,
						(int)statbuf.st_size,s,
						sd[i]->d_name);
			else
				ft_printf(" %-8d %5d %s %s\n", statbuf.st_gid,
						(int)statbuf.st_size,s,sd[i]->d_name);
		}
		free(s);
		free(sd[i]);
		i++;
	}
	free(sd);
}
