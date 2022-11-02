/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:30:57 by msekhsou          #+#    #+#             */
/*   Updated: 2022/10/24 18:07:18 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*i;

	if (count != 0)
		if ((size_t)(-1) / count < size)
			return (NULL);
	i = malloc(count * size);
	if (!i)
		return (NULL);
	ft_bzero(i, count * size);
	return (i);
}
