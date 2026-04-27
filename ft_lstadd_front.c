/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukurosa <yukurosa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 09:16:31 by yukurosa          #+#    #+#             */
/*   Updated: 2026/04/27 09:52:02 by yukurosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

#include <stdio.h>

int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;

	list = NULL;
	node1 = ft_lstnew("A");
	node2 = ft_lstnew("B");
	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	// 出力確認
	while (list)
	{
		printf("%s\n", (char *)list->content);
		list = list->next;
	}
	return (0);
}
