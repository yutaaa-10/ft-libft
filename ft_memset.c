#include <stddef.h> //使っていいか

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*buf;
	unsigned char	uc;

	i = 0;
	buf = (unsigned char *)b;
	uc = (unsigned char)c;
	while (i < len)
	{
		buf[i] = uc;
		i++;
	}
	return (b);
}

#include <stdio.h>

int	main(void)
{
	char	str[10];
	int		a;

	a = 'A';
	ft_memset(str, a, sizeof(str));
	str[9] = '\0';
	printf("%s\n", str);
	return (0);
}
