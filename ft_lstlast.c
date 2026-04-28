/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukurosa <yukurosa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:38:33 by yukurosa          #+#    #+#             */
/*   Updated: 2026/04/28 12:29:21 by yukurosa         ###   ########.fr       */
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
// 	t_list *list;
// 	t_list *node1;
// 	t_list *node2;

// 	t_list *res;

// 	list = NULL;

// 	node1 = ft_lstnew("a");
// 	node2 = ft_lstnew("b");

// 	ft_lstadd_front(&list, node1);
// 	ft_lstadd_front(&list, node2);

// 	res = ft_lstlast(list);

// 	printf("%s", (char *)res->content);
// 	return (0);
// }