/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukurosa <yukurosa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:35:21 by yukurosa          #+#    #+#             */
/*   Updated: 2026/04/24 12:29:48 by yukurosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		// write(1, &s[i], 1);
		i++;
	}
}

void	ft_making(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = 'a';
}

int	main(void)
{
	char s[] = "hello";
	ft_striteri(s, ft_making);
	return (0);
}