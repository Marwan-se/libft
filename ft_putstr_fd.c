/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:36:20 by msekhsou          #+#    #+#             */
/*   Updated: 2022/10/22 18:42:06 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
}

	// int	main(){
	// int fd = open("HH", O_CREAT | O_RDWR);
	// if (fd == -1)
	// 	ft_putstr_fd("fd failed opened", 2);
	// printf("fd  = %d\n", fd);
	// ft_putstr_fd("oussama\n", fd);
	// close(fd);
	// int fd1 = open("HH2", O_CREAT | O_RDWR);
	// if (fd1 == -1)
	// 	ft_putstr_fd("fd failed to open", 2);
	// printf("fd1  = %d\n", fd1);
	// ft_putstr_fd("ouu\n", fd1);
	// close(fd1);
	// }