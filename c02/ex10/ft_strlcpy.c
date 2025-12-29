#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i_src;
	unsigned int	i;

	i_src = 0;
	while (src[i_src])
		i_src++;
	if (i_src > 0)
	{
		i = 0;
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (i_src);
}
/*int	main(void)
{
	char	dest[20];
	char	src[] = "salut, ca va?";
	unsigned int	size = 6;

	ft_strlcpy(dest, src, size);
	printf("%s\n", dest);
	return (0);
}*/
