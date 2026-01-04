#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	char	*j = strdup("holu");
	char	*p = strdup("hola");
	int	func;

	func = ft_strncmp(j, p, 3);
	printf("%d\n", func);
	free(j);
	free(p);
	return (0);
}*/
