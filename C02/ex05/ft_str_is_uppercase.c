#include <unistd.h>
#include <stdio.h>

int     ft_str_is_uppercase(char *str)
{
	int i;
        i = 0;
        while (str[i])
        {
                if(!(str[i] >= 'A' && str[i] <= 'Z'))
                {
                        return (0);
                }
                i++;
        }
        return (1);
}
#include <stdio.h>

int main()
{
        printf("%d\n", ft_str_is_uppercase("HELLO"));
    printf("%d\n", ft_str_is_uppercase("Hello"));
    printf("%d\n", ft_str_is_uppercase("78"));
    printf("%d\n", ft_str_is_uppercase(""));
    return 0;
}
