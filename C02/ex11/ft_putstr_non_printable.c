#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}
void ft_putstr_non_printable(char *str)
{
	int i = 0;
	int hexa[16]= {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] <= 31) ||(str[i] == 127 ))
		{
			int a = (str[i] / 16);
			int b = (str[i] % 16);
			ft_putchar (hexa[a]);
			ft_putchar (hexa[b]);
		}
		else 
			write( 1, &str[i], 1);
		i++;
	}
}
int main()
{
	ft_putstr_non_printable("amine\nmans\touri");
}
