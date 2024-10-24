#include <unistd.h>
#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
int main()
{
	int x;
	int y;

	x = 2;
	y = 4;
	ft_swap(&x , &y);
	printf("%d %d", x ,y);
}
