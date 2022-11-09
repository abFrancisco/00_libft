

char **ft_split(char const *s, char c);
{
	char	**result;
	char	**result_start;
	char	*word;
	int		i;
	int		j;

	result = malloc(strlen(s) * sizeof(char*));
	result_start = result;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && j)
		{
			word = malloc(j + 1);
			ft_strlcpy(word, s[i - j], j + 1);
			*result++ = word;
			j = 0;
		}
		else
			j++;
		i++;
	}
	return (result_start);
}



//delimiter = 'x'
//string = "319283798x782391823987xx 3198273987x98723x8x8x9"