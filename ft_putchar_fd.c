/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:15:07 by msekhsou          #+#    #+#             */
/*   Updated: 2022/10/21 20:30:58 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// File descriptor is integer that uniquely 
// identifies an open file of the process

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
