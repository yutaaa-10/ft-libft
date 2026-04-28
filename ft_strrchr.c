/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukurosa <yukurosa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:45:48 by yukurosa          #+#    #+#             */
/*   Updated: 2026/04/28 17:13:52 by yukurosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last;

	last = NULL;
	i = 0;
	while (1)
	{
		if (s[i] == (char)c)
		{
			last = ((char *)&s[i]);
		}
		if (s[i] == '\0')
		{
			break ;
		}
		i++;
	}
	return (last);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "hello";
	char	*res;

	res = ft_strrchr(str, 'l');
	printf("%s", res);
	return (0);
}
