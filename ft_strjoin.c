/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:01:57 by msekhsou          #+#    #+#             */
/*   Updated: 2022/10/21 12:11:27 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*pointer;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	pointer = (char *)malloc(sizeof(char) * len);
	if (!pointer)
		return (NULL);
	ft_strlcpy(pointer, s1, len);
	ft_strlcat(pointer, s2, len);
	return (pointer);
}

/*int	main(void)
{
	char	s1[] = "visca";
	char		s2[] = "barca";

	printf("%s", ft_strjoin(s1, s2));
	return (0);
}
*/