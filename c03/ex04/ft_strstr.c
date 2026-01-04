#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			j++;
		}
		if (to_find[j] == 0)
			return (str + i);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	char	*find = strdup("hello word i'm IROMAN");
	char	*str = strdup("i'm");

	printf("%s\n", ft_strstr(find, str));
	free(find);
	free(str);
	return (0);
}*/
