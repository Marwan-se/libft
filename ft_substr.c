/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:59:59 by msekhsou          #+#    #+#             */
/*   Updated: 2022/11/02 10:56:58 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;
	size_t	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	i = 0;
	if (start < slen)
		i = slen - start;
	if (i > len)
		i = len;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, i + 1);
	return (str);
}

// int	main(void)
// {
// 	char	s[] = "salam";
// 	int		start = 10;
// 	int		len = 3;

// 	printf("%s", ft_substr(s, start, len));
// 	return (0);
// }
