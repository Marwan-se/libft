/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:56:51 by msekhsou          #+#    #+#             */
/*   Updated: 2022/11/03 13:04:05 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
	lst = 0;
}

// void	delete(t_list *lst)
// {
// 	while (lst)
// 	{
// 		if (lst->content)
// 			printf("%s\n", lst->content);
// 		lst = lst->next;
// 	}
// 	printf("\n");
// }

// static void	delt(void *content)
// {
// 	free (content);
// }
// 
// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*node4;

// 	head = NULL;
// 	node1 = ft_lstnew(ft_strdup("aaa"));
// 	node2 = ft_lstnew(ft_strdup("bbb"));
// 	node3 = ft_lstnew(ft_strdup("ccc"));
// 	node4 = ft_lstnew(ft_strdup("ddd"));
// 	head = node1;
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);
// 	ft_lstadd_back(&head, node4);
// 	delete(head);
// 	ft_lstdelone(node3, delt);
// 	delete(head);
// }
