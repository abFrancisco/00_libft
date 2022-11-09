

char **ft_split(char const *s, char c);
{
	char	**result;
	char	**result_start;
	char	*word;
	int		i;

	result = malloc(strlen(s) * sizeof(char*));
	result_start = result;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			word = malloc(count + 1);
			//copy index s[0]-s[count]
		}
		else
		{

		}
		i++;
	}

}



//delimiter = 'x'
//string = "319283798x782391823987xx 3198273987x98723x8x8x9"