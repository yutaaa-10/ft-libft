#include <stddef.h> //使って良いか

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (dst == src)
	{
		return (dst);
	}
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello,World!";
	char	dest[20];

	ft_memcpy(dest, src, 11);
	printf("%s", dest);
	return (0);
}
