/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:29:45 by msekhsou          #+#    #+#             */
/*   Updated: 2022/11/02 10:58:05 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	l;

	l = 0;
	while (lst != NULL)
	{
		l++;
		lst = lst->next;
	}
	return (l);
}

// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*node4;
// 	t_list	*node5;

// 	node1 = ft_lstnew("aaa");
// 	node2 = ft_lstnew("bbb");
// 	node3 = ft_lstnew("ccc");
// 	node4 = ft_lstnew("ddd");
// 	node5 = ft_lstnew("eee");
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;
// 	node4->next = node5;
// 	printf("%d", ft_lstsize(node1));
// }
