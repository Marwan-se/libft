/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 13:20:49 by msekhsou          #+#    #+#             */
/*   Updated: 2022/10/24 14:10:12 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void uppercase(unsigned int a, char *s)
// {
// 	*s = '0';
// }

// void	print__p(unsigned int i, char *s)
// {
// 	(void)i;
// 	*s = *s - 32;
// 	printf("%c", *s);	
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// int	main(void)
// {
// 	char	*s = ft_strdup("oussama");
// 	ft_striteri(s, &uppercase);
// 	printf("%s", s);
// }
