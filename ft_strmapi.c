/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukurosa <yukurosa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:22:19 by yukurosa          #+#    #+#             */
/*   Updated: 2026/04/28 17:13:38 by yukurosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*res;

	if (!s || !f)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	ft_alpha(unsigned int i, char c)
{
	(void)i;
	c = 'a';
	return (c);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "hello";
	char	*res;

	res = ft_strmapi(str, ft_alpha);
	printf("%s", res);
	free(res);
	return (0);
}
