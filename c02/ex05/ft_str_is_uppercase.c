#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char	upp[] = "BONJOUR";
	int	func;

	func  = ft_str_is_uppercase(upp);
	printf("%d\n", func);
	return (0);
}*/
