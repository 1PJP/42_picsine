#include <stdio.h>

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
	char	str[] = "bonjour";
	int	i;

	i = ft_strlen(str);
	printf("%d\n", i);
	return (0);
}*/
