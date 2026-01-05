#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sig;
	int	tr;

	i = 0;
	sig = 1;
	tr = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sig *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		tr = (tr * 10) + (str[i] - '0');
		i++;
	}
	return (tr * sig);
}
/*int	main(void)
{
	char	*str = strdup(" 	---+--+1234ab567");

	printf("%d\n", ft_atoi(str));
	free(str);
	return (0);
}*/
