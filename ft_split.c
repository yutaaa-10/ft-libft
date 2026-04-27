/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukurosa <yukurosa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 09:16:15 by yukurosa          #+#    #+#             */
/*   Updated: 2026/04/26 11:09:19 by yukurosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	isseparator(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

static int	ft_countwords(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && isseparator(s[i], c))
			i++;
		if (s[i])
			count++;
		while (s[i] && !isseparator(s[i], c))
			i++;
	}
	return (count);
}

static char	*ft_worddup(char const *s, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_free_all(char **res, int j)
{
	while (j > 0)
		free(res[--j]);
	free(res);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**res;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && isseparator(s[i], c))
			i++;
		start = i;
		while (s[i] && !isseparator(s[i], c))
			i++;
		if (i > start && !(res[j] = ft_worddup(s, start, i)))
			return (ft_free_all(res, j), NULL);
		if (i > start)
			j++;
	}
	return (res[j] = NULL, res);
}

#include <stdio.h>

int	main(void)
{
	char	**res;
	int		i;

	res = ft_split(" hello world japan  ", ' ');
	if (!res)
		return (1);
	i = 0;
	while (res[i])
	{
		printf("%s\n", res[i]);
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
}
