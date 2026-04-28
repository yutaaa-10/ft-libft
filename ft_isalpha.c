/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukurosa <yukurosa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:36:26 by yukurosa          #+#    #+#             */
/*   Updated: 2026/04/28 17:10:34 by yukurosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalgha(int c1)
{
	if ((c1 >= 'a' && c1 <= 'z') || (c1 >= 'A' && c1 <= 'Z'))
	{
		return (1);
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	int		a;
	char	b;

	b = 'a';
	a = ft_isalgha(b);
	printf("%d\n", a);
	return (0);
}
