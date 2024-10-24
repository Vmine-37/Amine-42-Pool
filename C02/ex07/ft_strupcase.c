#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		while (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	i++;
	}
	return (str);
}
int main()
{
	char str[]= "hhHhfiodnfoenofnjenjenjle6efjenH";
	printf("%s",ft_strupcase(str));
}
