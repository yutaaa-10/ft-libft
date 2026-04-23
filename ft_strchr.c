/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukurosa <yukurosa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:42:57 by yukurosa          #+#    #+#             */
/*   Updated: 2026/04/23 13:43:04 by yukurosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (1)
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		if (s[i] == '\0')
		{
			break ;
		}
		i++;
	}
	return (NULL);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "hello";
	char	*res;

	res = ft_strchr(str, 'h');
	printf("%s", res);
	return (0);
}
