/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_permision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:45:51 by amokgohl          #+#    #+#             */
/*   Updated: 2018/09/11 15:45:55 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_permision(char *star)
{
	struct stat		filetat;

	if (stat(star, &filetat) < 0)
		return ;
	ft_printf((S_ISDIR(filetat.st_mode)) ? "d" : "-");
	ft_printf((filetat.st_mode & S_IRUSR) ? "r" : "-");
	ft_printf((filetat.st_mode & S_IWUSR) ? "w" : "-");
	ft_printf((filetat.st_mode & S_IXUSR) ? "x" : "-");
	ft_printf((filetat.st_mode & S_IRGRP) ? "r" : "-");
	ft_printf((filetat.st_mode & S_IWGRP) ? "w" : "-");
	ft_printf((filetat.st_mode & S_IXGRP) ? "x" : "-");
	ft_printf((filetat.st_mode & S_IROTH) ? "r" : "-");
	ft_printf((filetat.st_mode & S_IWOTH) ? "w" : "-");
	ft_printf((filetat.st_mode & S_IXOTH) ? "x" : "-");
	return ;
}
