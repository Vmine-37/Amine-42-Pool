#include <unistd.h>
#include <stdio.h>

char    *ft_strlowcase(char *str)
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
char	*ft_strcapitalize(char *str)
{
	int i;
	int j;
	i = 0;
	j = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			if(j == 1)
			{
				str[i] -= 32;
				j = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			j = 0;
		}
		else
			j = 1;
		i++;
	}
	return str;

}



int main()
{
	char str[]="hello wo4ld this is a stRINg chara=cte+r";
	printf("%s",ft_strcapitalize(str));
}
