#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}
#include <stdio.h>
int main()
{
	int a;
	int b;
	int x,y;

	a = 10;
	b = 5;
	ft_div_mod( a, b, &x, &y);
	printf("%d %d", x,y);

}
