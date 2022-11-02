/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:00:04 by msekhsou          #+#    #+#             */
/*   Updated: 2022/10/25 11:26:56 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int	x;
	int	sign;
	int	res;

	x = 0;
	res = 0;
	sign = 1;
	while (str[x] == 32 || (str[x] >= 9 && str[x] <= 13))
		x++;
	if (str[x] == '-')
	{
		sign = -1;
		x++;
	}
	else if (str[x] == '+')
		x++;
	while (str[x] != '\0' && str[x] >= '0' && str[x] <= '9')
	{
		res *= 10;
		res += str[x] - 48;
		x++;
	}
	return (res * sign);
}
