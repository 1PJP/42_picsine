#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_div;
	int	temp_mod;

	temp_div = *a / *b;
	temp_mod = *a % *b;
	*a = temp_div;
	*b = temp_mod;
}
/*int	main(void)
{
	int	ptr1;
	int	ptr2;
	int	tempd;
	int	tempm;

	ptr1 = 70;
	ptr2 = 15;
	tempd = ptr1 / ptr2;
	tempm = ptr1 % ptr2;

	ft_ultimate_div_mod(&ptr1, &ptr2);
	printf("%d, %d", tempd, tempm);
	return (0);
}*/
