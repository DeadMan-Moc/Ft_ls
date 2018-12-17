/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 18:42:04 by amokgohl          #+#    #+#             */
/*   Updated: 2018/09/12 09:50:18 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void		main_malti(int argc, char **argv)
{
	if (ft_strcmp(argv[1], "-l") == 0)
		arguments(argv, argc);
	else if (ft_strcmp(argv[1], "-r") == 0)
		ft_ls_r(argv, argc);
	else if (ft_strcmp(argv[1], "-a") == 0)
		ft_ls_a(argv, argc);
	else
	{
		ft_printf("usage: ls [-ABCFGHLOPRSTUWabcdefgh\
				iklmnopqrstuwx1] [file ...]");
		ft_printf("Permision denied : ");
	}
}

int			main(int argc, char **argv)
{
	if (argc > 2)
		main_malti(argc, argv);
	else if (argc == 1)
		ft_ls();
	else if (ft_strcmp(argv[1], "-l") == 0)
		ls_l();
	else if (ft_strcmp(argv[1], "-r") == 0)
		flag_r();
	else if ((ft_strcmp(argv[1], "-a") == 0) || (ft_strcmp(argv[1], "-f") == 0))
		flag_a();
	else if (ft_strcmp(argv[1], "-g") == 0)
		ls_g();
	else
		ft_printf("usage: ls [-ABCFGHLOPRSTUWabc\
				defghiklmnopqrstuwx1] [file ...]");
}
