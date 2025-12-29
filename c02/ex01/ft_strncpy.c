#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*int	main(void)
{
	char	src[] = "ca va bien";
	char	dest[11];
	unsigned int	n = 8;

	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}*/
