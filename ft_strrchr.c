/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:15:14 by msekhsou          #+#    #+#             */
/*   Updated: 2022/11/03 12:19:23 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*j;
	size_t		i;

	i = ft_strlen(s);
	j = s;
	while (((char)c != s[i]) && i)
		i--;
	if ((char)c == s[i])
		return ((char *)(s + i));
	return (0);
}
