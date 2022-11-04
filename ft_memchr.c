/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:43:13 by msekhsou          #+#    #+#             */
/*   Updated: 2022/11/03 16:48:20 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char )c)
			return (str + i);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	// int x = 0b00000000 00000000 00000101 00111001;
// 	int x = 0b00000000000000000000010100111001;
// 	printf("%p\n", ft_memchr(&x, 0, 4));
// 	printf("%p\n", &x);
// }
