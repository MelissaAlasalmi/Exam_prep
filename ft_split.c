#include <stdlib.h>
#include <stdio.h>

int		ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

int		ft_wordcount(char *str)
{
	int words;
	int i;
	words = 0;
	i = 0;
	while (ft_isspace(str[i]) == 1)
			i++;
	while (str[i] != '\0')
	{
		if (ft_isspace(str[i]) == 0)
		{
			while (ft_isspace(str[i]) == 0)
				i++;
			words++;
		}
		else
			i++;
	}
	return(words);
}

char	*malloc_word(char *str)
{
	char *word;
	int	i;

	i = 0;
	while (str[i] && !ft_isspace(str[i]))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && !ft_isspace(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char **array;
	int i = 0;

    array = (char **)malloc(sizeof(char *) * (ft_wordcount(str) + 1));
	while (*str)
	{
		while (*str && ft_isspace(*str) == 1)
			str++;
		if (*str && !ft_isspace(*str))
		{
			array[i] = malloc_word(str);
			i++;
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	array[i] = NULL;
	return (array);
}

int	main(void)
{
	char *str;
    char **array;
    int i = 0;

	str = "  hello     world  hi";
    array = ft_split(str);
    while (array[i])
    {
	    printf("%s\n", array[i]);
        i++;
    }
	return (0);
}
