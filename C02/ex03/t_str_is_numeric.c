#include <unistd.h>
#include <stdio.h>

int	 ft_str_is_numeric(char *str)
{
	int i;
        i = 0;
        while (str[i])
        {
                if(str[i] >= 48 && str[i] <= 57)
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
	printf("%d\n",ft_str_is_numeric("123"));
	printf("%d\n",ft_str_is_numeric("abc"));
	printf("%d\n",ft_str_is_numeric("12a"));
	printf("%d\n",ft_str_is_numeric(""));
}
