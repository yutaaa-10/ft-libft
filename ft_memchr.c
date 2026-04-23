#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((void *)&str[i]);
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

	res = ft_memchr(str, 'l', 4);
	printf("%s\n", res);
	return (0);
}
