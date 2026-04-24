/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukurosa <yukurosa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:04:24 by yukurosa          #+#    #+#             */
/*   Updated: 2026/04/24 15:05:08 by yukurosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_copy(char *res, const char *str, int *index)
{
	int	i;

	i = 0;
	while (str[i])
	{
		res[*index] = str[i];
		i++;
		(*index)++;
	}
	return (res);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		s1len;
	int		s2len;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (s1len + s2len + 1));
	if (!res)
		return (NULL);
	i = 0;
	ft_copy(res, s1, &i);
	ft_copy(res, s2, &i);
	res[i] = '\0';
	return (res);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "hello";
	char	src[] = "world";
	char	*res;

	res = ft_strjoin(str, src);
	printf("%s", res);
	free(res);
	return (0);
}
