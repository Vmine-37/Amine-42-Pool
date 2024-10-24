#include <unistd.h>

void    ft_print_combn(int n)
{
        n = '0';
	int i;
	while (n <= '8')
	{
		i = n + 1;
		while (i <= '9')
		{
			write (1, &n, 1);
			write (1, &i, 1);
			i++;
			if (n % 10 == '0')
			{
				i = i + 2;
			}
			else if (n != '8')
			{
				write (1, ", ", 2);
			}
		}
		n++;
	}
}	
int main()
{
        ft_print_combn(10);
        return 0;
}
