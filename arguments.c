/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:24:51 by amokgohl          #+#    #+#             */
/*   Updated: 2018/09/12 09:46:30 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	arguments(char **arg, int count)
{
	struct stat		statbuf;
	struct group	*grp;
	struct passwd	*pwd;
	int				i;

	pwd = getpwuid((geteuid()));
	i = 2;
	while (count > i)
	{
		stat(arg[i], &statbuf);
		ft_permision(arg[i]);
		ft_printf(" %-2d %4s  ", statbuf.st_nlink, pwd->pw_name);
		if ((grp = getgrgid(statbuf.st_gid)) != NULL)
			ft_printf(" %-8.8s %5d %s %s\n", grp->gr_name,
					(int)statbuf.st_size, ft_grp(ctime(&statbuf.st_mtime)),
					arg[i]);
		else
			ft_printf(" %-8d %5d %s %s\n", statbuf.st_gid,
					(int)statbuf.st_size, ft_grp(ctime(&statbuf.st_mtime)),
					arg[i]);
		i++;
	}
}
