/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukurosa <yukurosa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:49:35 by yukurosa          #+#    #+#             */
/*   Updated: 2026/04/27 13:50:30 by yukurosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// int	main(void)
// {
// 	t_list *list;
// 	t_list *node1;
// 	t_list *node2;
// 	int i;

// 	list = NULL;

// 	node1 = ft_lstnew("A");
// 	node2 = ft_lstnew("B");

// 	ft_lstadd_front(&list, node1);
// 	ft_lstadd_front(&list, node2);

// 	i = ft_lstsize(list);
// 	printf("%d", i);
// 	return (0);
// }