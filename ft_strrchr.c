#include <stddef.h>

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

	res = ft_strrchr(str, 'l'); // もらうのはアドレスだからstrでもらうと配列だから、*resを作らなければいけない
	printf("%s", res);
	return (0);
}
