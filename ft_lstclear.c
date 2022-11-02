/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:12:04 by msekhsou          #+#    #+#             */
/*   Updated: 2022/11/01 17:55:33 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*yes;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		yes = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = yes;
	}
	*lst = NULL;
}

void	show(t_list *lst)
{
	while (lst)
	{
		if (lst->content)
			printf("%s\n", lst->content);
		lst = lst->next;
	}
	printf("\n");
}

static void	delt(void *content)
{
	free (content);
}

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;

	head = NULL;
	node1 = ft_lstnew(ft_strdup("aaa"));
	node2 = ft_lstnew(ft_strdup("bbb"));
	node3 = ft_lstnew(ft_strdup("ccc"));
	node4 = ft_lstnew(ft_strdup("ddd"));
	head = node1;
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	ft_lstadd_back(&head, node4);
	show(head);
	ft_lstclear(&head, delt);
	show(head);
}
