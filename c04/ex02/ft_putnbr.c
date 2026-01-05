#include <unistd.h>

void	ft_putchar(char j)
{
	write(1, &j, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb > 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}
/*int	main(void)
{
	ft_putnbr(-970107);
	return (0);
}*/
