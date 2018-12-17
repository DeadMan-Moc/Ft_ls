/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 11:28:35 by amokgohl          #+#    #+#             */
/*   Updated: 2018/09/11 11:28:44 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static int		one(const struct dirent *unused)
{
	(void)unused;
	return (1);
}

void			flag_r(void)
{
	struct stat		statbuf;
	struct dirent	**sd;
	int				n;
	int				a;
	int				t;

	a = ft_ls_rr();
	n = scandir(".", &sd, one, alphasort);
	t = n - a;
	while (n > t)
	{
		if (stat(sd[n]->d_name, &statbuf) == 0)
		{
			ft_printf("%s\n", sd[n]->d_name);
		}
		n--;
	}
	free(sd);
}
