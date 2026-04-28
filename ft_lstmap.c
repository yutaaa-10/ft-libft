/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukurosa <yukurosa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:33:24 by yukurosa          #+#    #+#             */
/*   Updated: 2026/04/28 13:30:04 by yukurosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*to_upper(void *content)
{
	char	*s;
	char	*res;

	s = (char *)content;
	res = malloc(2);
	if (!res)
		return (NULL);
	res[0] = s[0] - 32;
	res[1] = '\0';
	return (res);
}
void	del(void *content)
{
	free(content);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;

	if (!lst || !f || !del)
		return (NULL);
	newlist = NULL;
	while (lst)
	{
		newnode = ft_lstnew(f(lst->content));
		if (!newnode)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newnode);
		lst = lst->next;
	}
	return (newlist);
}

int	main(void)
{
	t_list *list;
	t_list *node1;
	t_list *node2;

	t_list *res;

	list = NULL;

	node1 = ft_lstnew("a");
	node2 = ft_lstnew("b");

	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);

	res = ft_lstmap(list, to_upper, del);

	while (res)
	{
		printf("%s\n", (char *)res->content);
		res = res->next;
	}
	return (0);
}