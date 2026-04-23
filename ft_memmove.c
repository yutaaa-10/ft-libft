/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukurosa <yukurosa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:40:36 by yukurosa          #+#    #+#             */
/*   Updated: 2026/04/23 13:42:33 by yukurosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*sr;

	i = 0;
	dst = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (dst == sr)
	{
		return (dest);
	}
	if (dst > sr)
	{
		i = n;
		while (i > 0)
		{
			i--;
			dst[i] = sr[i];
		}
	}
	else
		;
	{
		i = 0;
		while (i < n)
		{
			dst[i] = sr[i];
			i++;
		}
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	src[] = "yutakurosawa";
	char	dst[20];

	ft_memmove(dst, src, 10);
	printf("%s", dst);
	return (0);
}
