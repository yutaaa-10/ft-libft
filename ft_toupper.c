
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

#include <stdio.h>

int	main(void)
{
	int	a;

	a = ft_toupper('a');
	printf("%c", a);
	return (0);
}
