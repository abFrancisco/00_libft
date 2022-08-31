int ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power > 0)
		result = nb * ft_recursive_power(nb, power - 1);
	else
		return (1);
	return (result);
}
/* int main(void)
{
	printf("%i\n", ft_recursive_power(10, -1));
	printf("%i\n", ft_recursive_power(10, 0));
	printf("%i\n", ft_recursive_power(10, 1));
	printf("%i\n", ft_recursive_power(10, 2));
	printf("%i\n", ft_recursive_power(-2, 50));
} */
