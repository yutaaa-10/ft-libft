

int	ft_isalpha(int c1)
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
