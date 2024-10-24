#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;
	
	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;	
}
int main()
{
	int x,y;

	x = 10;
	y = 3;
	ft_ultimate_div_mod(&x,&y);
	printf("the div is %d | the mod is %d ", x,y);
}
