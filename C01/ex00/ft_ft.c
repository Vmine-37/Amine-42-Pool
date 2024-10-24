#include <stdio.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
int	main()
{	
	int *nb;
	int num;
	nb = &num;
	ft_ft(nb);
	printf("%d",num);
}
