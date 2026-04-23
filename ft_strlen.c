#include <stddef.h> //使って良いか

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "hello";
	int		a;

	a = ft_strlen(str);
	printf("%d", a);
	return (0);
}
