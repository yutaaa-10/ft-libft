int	ft_isprintf(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	int	a;

	a = ft_isprint(44);
	printf("%d", a);
	return (0);
}
