#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		while (nb > 0)
		{
			factorial *= nb--;
		}
	return (factorial);
}

/* int	main(void)
{
	printf("%i", ft_iterative_factorial(13));
} */