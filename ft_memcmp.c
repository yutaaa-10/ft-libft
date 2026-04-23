/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukurosa <yukurosa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:39:28 by yukurosa          #+#    #+#             */
/*   Updated: 2026/04/23 13:39:30 by yukurosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	a[] = "hello";
	char	b[] = "heLlo";
	int		res;

	res = ft_memcmp(a, b, 5);
	printf("result = %d\n", res);
	if (res == 0)
		printf("同じ\n");
	else if (res > 0)
		printf("aの方が大きい\n");
	else
		printf("bの方が大きい\n");
	return (0);
}
