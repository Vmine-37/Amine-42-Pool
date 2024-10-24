#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		while (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
#include <stdio.h>

int main()
{
	char str[]= "UwhfhuewoFYIG";
	printf("%s",ft_strlowcase(str));
}
