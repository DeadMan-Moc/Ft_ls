/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 13:35:56 by amokgohl           #+#    #+#             */
/*   Updated: 2018/06/28 13:38:55 by amokgohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "libft.h"
#include <stdio.h>
int		main(void)
{
	int fd;
	int fr;
	char s[1200];
	char *s1;
	int i;
	int len;
	char *s2;
	int a;
	int b;

	fd = open ("jam.txt", O_RDONLY);
	if (fd < 0)
    {
        write (1,"not open\n", 8);
        return (0);
    }
	else
		write(1,"open\n",5);
	fr = read (fd, s, 1200);
	if (fr < 0)
	{
		write (1, "not read", 8);
	}
		
	else
		write (1, "read", 4);
	

	
//	len  = ft_strlen(ft_strdup(s));
//	s2 = (char *) malloc (sizeof(char *) *  (len + 1));
	s1 = ft_strchr(s, '\n');
	i = 0;
//	while (s[i])
//	{
//		write (1, &s1[i], 1);
//		i++;
//	}
	while (s[a] != '\n')
	a++;
   printf("\n%d",fr );
   b = 0;
  s2 = ft_strsub (s, b, a);

   printf("\n%s", s2);

}
