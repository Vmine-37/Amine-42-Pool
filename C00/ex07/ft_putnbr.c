#include <unistd.h>

void	ft_putchar(char v)
{
	write(1, &v, 1);
}
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);

	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr( nb / 10);
		ft_putnbr( nb % 10);

	}
	else 
		ft_putchar (nb + 48);
}
int main()
{
	ft_putnbr(35);
	ft_putchar('\n');
}
