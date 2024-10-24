#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 33 && str[i] <= 126)
		{
			i++;
		}
		else 
			return (0);
	}
	return (1);
}
int main()
{
	printf("%d\n",ft_str_is_printable("92J!&)"));
	printf("%d\n",ft_str_is_printable("\n"));
	printf("%d\n",ft_str_is_printable("hhh\n"));
	printf("%d",ft_str_is_printable(""));
}
