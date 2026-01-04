#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main(void)
 {
	char	*dest = strdup("ca va? ");
	char	*src = strdup("ca va bien");

	printf("%s\n", ft_strcat(dest, src));
	free(dest);
	free(src);
	return (0);
}*/
