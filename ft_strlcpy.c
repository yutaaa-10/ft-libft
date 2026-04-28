/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukurosa <yukurosa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:44:13 by yukurosa          #+#    #+#             */
/*   Updated: 2026/04/28 17:13:27 by yukurosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	strlen;

	strlen = 0;
	while (src[strlen] != '\0')
	{
		strlen++;
	}
	if (dstsize == 0)
	{
		return (strlen);
	}
	i = 0;
	while ((i < dstsize - 1) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (strlen);
}

#include <stdio.h>

int	main(void)
{
	char	src[] = "hello";
	char	dest[3];
	int		a;

	a = ft_strlcpy(dest, src, sizeof(dest));
	printf("%d", a);
	return (0);
}
