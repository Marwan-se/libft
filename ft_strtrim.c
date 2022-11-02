/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:20:56 by msekhsou          #+#    #+#             */
/*   Updated: 2022/11/01 10:26:26 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	ln;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	if (*s1 == '\0')
		return (ft_strdup(""));
	ln = ft_strlen(s1);
	while (ft_strchr(set, s1[ln]))
		ln--;
	ptr = ft_substr(s1, 0, ln + 1);
	return (ptr);
}

// int	main(void)
// {
//  		char	a[] = "cavisca barca";
//  		char	b[] = "ca";

// 	printf("%s\n", ft_strtrim(a, b));
// }
