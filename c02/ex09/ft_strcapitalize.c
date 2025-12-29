#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] +32;
		i++;
	}
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] -32;
	i++;
	while (str[i])
	{
		if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			&& !(str[i - 1] >= 'a' && str[i - 1] <= 'z')
			&& !(str [i - 1] >= '0' && str[i - 1] <= '9'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] -32;
		}
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char	change[] = "salut, commet tu vas? 
		42mots quarente-dex; cinquante+et+un";

	ft_strcapitalize(change);
	printf("%s\n", change);
	return (0);
}*/
