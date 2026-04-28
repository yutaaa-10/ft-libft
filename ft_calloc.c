/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukurosa <yukurosa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:09:29 by yukurosa          #+#    #+#             */
/*   Updated: 2026/04/28 17:10:24 by yukurosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	size_t			total;
	unsigned char	*ptr;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

#include <stdio.h>

int	main(void)
{
	int		*res;
	size_t	i;

	res = ft_calloc(5, sizeof(int));
	if (!res)
		return (1);
	i = 0;
	while (i < 5)
	{
		printf("%d ", res[i]);
		i++;
	}
	printf("\n");
	free(res);
	return (0);
}
