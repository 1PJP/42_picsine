#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char	number[] = "0107";
	int	func;

	func = ft_str_is_numeric(number);
	printf("%d\n", func);
	return (0);
}*/
