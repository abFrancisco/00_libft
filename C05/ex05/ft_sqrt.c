#include <stdio.h>

int ft_sqrt(int nb)
{
	int result;

	result = 0;
	if (nb <= 0)
		return (0);
	while (result * result < nb)
		result++;
	if (result * result == nb)
		return(result);
	return (0);
}

/* int main(void)
{
	printf("%i\n", ft_sqrt(10000));
} */