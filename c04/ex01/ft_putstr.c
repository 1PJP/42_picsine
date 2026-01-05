#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*int	main(void)
{
	char	*str = strdup("Spasiba!");

	ft_putstr(str);
	free(str);
	return (0);
}*/
