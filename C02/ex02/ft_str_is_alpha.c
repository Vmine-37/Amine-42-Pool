#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		if((str[i] >= 'a' && str[i] <= 'z') || 
			(str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
		}
		else
			return (0);
			
	}
	return (1);
}
#include <stdio.h>

int main()
{
	printf("%d\n", ft_str_is_alpha("Hello"));
    printf("%d\n", ft_str_is_alpha("Hello123"));
    printf("%d\n", ft_str_is_alpha("78"));
    printf("%d\n", ft_str_is_alpha(""));
    return 0;
}
