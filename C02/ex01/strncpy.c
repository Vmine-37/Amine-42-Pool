#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;
        i = 0;
        while (src[i] != '\0' && i < n)
        {
                dest[i] = src[i];
                i++;

        }
	while (i < n)
	{
        dest[i] = '\0';
	i++;
	}
                return (dest);
}
#include <stdio.h>

int	main()
{
	char dest1[20];
	char src1[]= "hello world";
	printf("%s\n", ft_strncpy(dest1,src1,5));
}
