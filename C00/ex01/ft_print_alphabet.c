#include <unistd.h>

void ft_print_alphabet(void)
{
	
	
	
	char i;
	i = 'a';
	while (i <= 'z')
	{
		write(1, &i, 1);
		i++;
	}
	write(1, "\n",1);
	
}

int main()
{
	ft_print_alphabet();
	return 0;
}
