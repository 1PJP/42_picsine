#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char	print[] = "ca va bien e toi?";
	int	func;

	func = ft_str_is_printable(print);
	printf("%d\n", func);
	return (0);
}*/
