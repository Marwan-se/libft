/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:19:11 by msekhsou          #+#    #+#             */
/*   Updated: 2022/10/24 16:28:49 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//A static function in C is a function that /
//has a scope that is limited to its object file

static size_t	ft_intsize(long nb)
{
	size_t	i;

	i = 0;
	if (nb == 0)
	{
		i++;
		return (i);
	}
	if (nb < 0)
	{
		nb = nb * -1;
		i++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*pointer;
	size_t	len;
	long	nb;

	nb = n;
	len = ft_intsize(nb);
	pointer = (char *)malloc(sizeof (char) * len + 1);
	if (!pointer)
		return (0);
	pointer[len--] = '\0';
	if (n == 0)
		pointer[0] = '0';
	if (nb < 0)
	{
		pointer[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		pointer[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (pointer);
}
