/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:28:15 by msekhsou          #+#    #+#             */
/*   Updated: 2022/11/04 10:36:48 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*test;

	if (!lst || !f || !del)
		return (0);
	newlst = ft_lstnew(NULL);
	if (!newlst)
		return (NULL);
	newlst->content = (*f)(lst->content);
	lst = lst->next;
	while (lst)
	{
		test = ft_lstnew(NULL);
		if (!test)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		test->content = (*f)(lst->content);
		ft_lstadd_back(&newlst, test);
		lst = lst->next;
	}
	return (newlst);
}

// void	*fun(void *node)
// {
// 	node = ft_strdup("012");
// 	return (node);
// }

// void	del(void *node)
// {
// 	free (node);
// }
// 
// int	main(void)
// {
// 	t_list *tmp;
// 	t_list *node1 = ft_lstnew(ft_strdup("test"));
// 	t_list *node2 = ft_lstnew(ft_strdup("test3"));
// 	t_list *node3 = ft_lstnew(ft_strdup("test4"));
// 	t_list *node4 = ft_lstnew(ft_strdup("test5"));

// 	printf("%s\n",node1->content);
// 	printf("%s\n",node2->content);
// 	printf("%s\n",node3->content);
// 	printf("%s\n",node4->content);
// 	tmp = node1;
// 	ft_lstadd_back(&tmp, node2);
// 	ft_lstadd_back(&tmp, node3);
// 	ft_lstadd_back(&tmp, node4);
// 	t_list *node = ft_lstmap(tmp,fun,del);
// 	printf("%s\n","-------------------");
// 	while(node)
// 	{
//         printf("%s\n",node->content);
//         node = node -> next;
// 	}

// }
