#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	int factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		printf("mark \n");
		factorial *= ft_recursive_factorial(nb - 1);
	}
	return (factorial);
}

int	main(void)
{
	printf("%i", ft_recursive_factorial(5));
}