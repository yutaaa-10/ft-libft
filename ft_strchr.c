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

	res = ft_strchr(str, 'h'); // もらうのはアドレスだからstrでもらうと配列だから、*resを作らなければいけない
	printf("%s", res);
	return (0);
}
