/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukurosa <yukurosa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:43:50 by yukurosa          #+#    #+#             */
/*   Updated: 2026/04/23 13:43:52 by yukurosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = 0;
	srclen = 0;
	while (src[srclen] != '\0')
	{
		srclen++;
	}
	while (dstlen < dstsize && dst[dstlen] != '\0')
		dstlen++;
	if (dstlen == dstsize)
		return (dstsize + srclen);
	i = 0;
	while (src[i] != '\0' && (dstlen + i) < (dstsize - 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

#include <stdio.h>

int	main(void)
{
	char	dest[20] = "hello";
	char	src[] = " world";
	size_t	a;

	a = ft_strlcat(dest, src, sizeof(dest));
	printf("dest = %s\n", dest);
	printf("size=%zu\n", a);
	return (0);
}
