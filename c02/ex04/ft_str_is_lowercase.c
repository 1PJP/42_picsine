#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char	low[] = "bonjour";
	int	func;

	func = ft_str_is_lowercase(low);
	printf("%d\n", func);
	return (0);
}*/
