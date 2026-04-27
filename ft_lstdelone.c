/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukurosa <yukurosa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 15:16:33 by yukurosa          #+#    #+#             */
/*   Updated: 2026/04/27 16:25:08 by yukurosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *content)
{
	(void)content;
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

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
	ft_lstdelone(list, del);
	return (0);
}
