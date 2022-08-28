#include <stdlib.h>
#include <unistd.h>

int	error(void)
{
	char *str;

	str = "Error\n";
	while (*str != '\0')
	{
		write(1, str, 1);
	}
	return -1;
}

//*values can be a pointer to values pointer, or possibilities pointer declared in main function
// cant use printf, change later
void    print_grid(int *values, int size)
{
	int i;
	int j;
	int current_value;
	char newline;
	char space;

	newline = '\n';
	space = ' ';
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			current_value = values[j+(i*size)];// + '0';
			printf("%i ",current_value);
			/* write(1, &current_value, 1);
			write(1, &space, 1); */
			j++;
		}
		printf("\n");
		/* write(1, &newline, 1); */
		i++;
	}
}

int check_input(int *input, int size)
{
	int i;

	i = 0;
	while (i < (size * 2) + size)
	{
		if (input[i] + input [i + size] > size + 1)
			return (error());
		if (i == size)
			i += size;
		else
			i++;
	}
	return 0;
}

/*calculates cell values that are ceratin
for example:
 - if col1up is 1(min value) then the first cell of col1 will be 4(max value)
 - if col1up is 4(max value) then col1 will be filled with the numbers 1 2 3 4 in order as it is the only option
*/
void certain_input(char *values, char *possibilities, int size, int *input)
{
	//wip
}

//converts x, y coordinate to a single value that can be used when accessing memory allocated to values or possibilities grid
int	coordinate_to_linear(int x, int y, int size)
{
	return (x + y * size);
}
void	set_value(int pos, int *values, int value)
{
	values[pos] = value;
}

void	remove_possibilities(int pos, int size, int *possibilities, int value)
{
	int i;

	i = 0;
	while (i < size)
	{
		possibilities[(pos % size)+(i*size)] -= 1 << (value - 1);
		possibilities[i + ((pos / size) * size)] -= 1 << (value - 1);
		i++;
	}
	possibilities[pos] += 1 << (value - 1);
}

int	*allocate_values(int size)
{
	int i;
	int *pointer;

	pointer = malloc(size * size * 4);
	i = 0;
	while (i < size*size)
		pointer[i++] = 0;
	return (pointer);
}

int	*allocate_possibilities(int size)
{
	int i;
	int *pointer;

	pointer = malloc(size * size * 4);
	i = 0;
	while (i < size*size)
		pointer[i++] = (1 << (size))-1;
	return (pointer);
}

int	rush_main(char *values, char *possibilities, int size, int *input)
{
	if (check_input(input, size) != 0)
		return (error());
	certain_input(values, possibilities, size, input);//calculate certain inputs
	//go line by line, check all possible combinations and remove_possibilities based on possible combinations
}

int main()
{
	//lets start solving only for size 4
	//here goes input checking and processing code that should generate an array of ints similar to row below
	int *input = {2, 1, 2, 4, 2, 4, 2, 1, 2, 1, 3, 2, 3, 3, 2, 1};
	int size;
	int i = 0;
	int *values;
	int *possibilities;

	size = 4;
	values = allocate_values(size);
	possibilities = allocate_possibilities(size);

	/*debuggin code :)
	remove_possibilities(coordinate_to_linear(2, 2, size), size, possibilities, 4);
	remove_possibilities(coordinate_to_linear(2, 2, size), size, possibilities, 1);

	print_grid(possibilities, size);
	*/

	//rush_main(values, possibilities, size, input);
}