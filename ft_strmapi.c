/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:36:07 by msekhsou          #+#    #+#             */
/*   Updated: 2022/10/23 14:26:57 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*pointer;

	if (!s || !f)
		return (NULL);
	i = 0;
	pointer = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!pointer)
		return (NULL);
	while (s[i] != '\0')
	{
		pointer[i] = f(i, s[i]);
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
}
