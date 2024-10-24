#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	
	}
	dest[i] = '\0';
		return (dest);
}
#include <stdio.h>
int main()
{
	char src1[]= "u'll never walk alone";
	char dest1[5];
	printf("%s",ft_strcpy(dest1,src1));
}
