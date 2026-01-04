#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int	main(int argc, char **argv)
{
	if (argc != 3)
		write(1, "ERROR\n", 6);
	printf("%d\n", ft_strcmp(argv[1], argv[2]));

	return (0);
}*/
