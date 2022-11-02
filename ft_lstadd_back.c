/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:03:00 by msekhsou          #+#    #+#             */
/*   Updated: 2022/11/01 14:50:44 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*i;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		i = ft_lstlast(*lst);
		if (i)
		{
			i->next = new;
		}
	}
}

// int	main(void)
// {
// 	t_list	*new ;
// 	t_list	*node1 ;
// 	t_list	*node2 ;
// 	t_list	*node3 ;

// 	new = ft_lstnew("aaa");
// 	node1 = ft_lstnew("bbb");
// 	node2 = ft_lstnew("ccc");
// 	node3 = ft_lstnew("ddd");
// 	node1->next = node2;
// 	node2->next = node3;
// 	ft_lstadd_back(&node1, new);
// 	printf("%s", ft_lstlast(node1)->content);
// }
