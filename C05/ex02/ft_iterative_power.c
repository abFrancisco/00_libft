int ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power-- > 0)
		result *= nb;
	return (result);
}

/* int main(void)
{
	printf("%i\n", ft_iterative_power(10, -1));
	printf("%i\n", ft_iterative_power(10, 0));
	printf("%i\n", ft_iterative_power(10, 1));
	printf("%i\n", ft_iterative_power(10, 2));
	printf("%i\n", ft_iterative_power(-2, 25));
}
 */