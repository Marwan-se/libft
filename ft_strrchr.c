/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:15:14 by msekhsou          #+#    #+#             */
/*   Updated: 2022/10/17 17:52:32 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*j;

	j = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *j && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
