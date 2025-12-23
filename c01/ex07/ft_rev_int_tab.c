#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i -1];
		tab[size - i -1] = temp;
		i++;
	}
}
/*int	main(void)
{
	int	tab[] = {10, 20, 30, 40, 50};
	int	size = 5;
	int	i;

	i = 0;
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}*/
