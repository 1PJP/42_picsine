#include <unistd.h>

void	ft_print_reverse_alphabete(void)
{
	char	rev;

	rev = 'z';
	while (rev >= 'a')
	{
		write(1, &rev, 1);
		rev --;
	}
}
/*int	main(void)
{
	ft_print_reverse_alphabete();
	return (0);

}*/
