/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:28:11 by msekhsou          #+#    #+#             */
/*   Updated: 2022/11/01 15:04:43 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*node4;

// 	node1 = ft_lstnew("aaa");
// 	node2 = ft_lstnew("bbb");
// 	node3 = ft_lstnew("ccc");
// 	node4 = ft_lstnew("ddd");
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;
// 	printf("%s", ft_lstlast(node1)->content);
// }
