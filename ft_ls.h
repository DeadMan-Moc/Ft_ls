/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:19:59 by amokgohl          #+#    #+#             */
/*   Updated: 2018/09/11 10:33:46 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H
# include <stdio.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <pwd.h>
# include <uuid/uuid.h>
# include <stdlib.h>
# include <grp.h>
# include <sys/types.h>
# include <sys/dir.h>
# include <sys/param.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <dirent.h>
# include <pwd.h>
# include <time.h>
# include <locale.h>
# include <langinfo.h>
# include <stdint.h>
# include <fcntl.h>
# include <string.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

void	ft_permision(char *star);
char	*ft_grp(char *tim);
int		ft_cnt ();
void	ls_l();
void	ft_ls();
void	flag_a();
int		ft_ls_rr();
void	flag_r();
void	ft_ls_r(char **args, int count);
void	arguments(char **arg, int count);
char	**ft_swap(char **str);
char	**ft_swap_r(char **str);
void	ls_g(void);
void	ft_ls_a(char **args, int ac);
#endif
