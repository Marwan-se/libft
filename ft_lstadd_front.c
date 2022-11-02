/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:00:35 by msekhsou          #+#    #+#             */
/*   Updated: 2022/10/31 16:52:50 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL && new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*node1 = ft_lstnew("aaa");
// 	t_list	*new = ft_lstnew("bbb");

// 	ft_lstadd_front(&node1, new);
// 	printf("%s", node1->content);
// }
