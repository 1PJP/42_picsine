#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*int	main(void)
{
	char	*str = strdup("spasiba");

	printf("%d\n", ft_strlen(str));
	free(str);
	return (0);
}*/
