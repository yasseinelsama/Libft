
#include "libft.h"

char	*split_strings(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}
int	count_strings(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}
char	**ft_split(char const *s, char c)
{
	char	**p;
	int		words;
	int		i;

	if (!s)
		return (0);
	words = count_strings(s, c);
	p = (char **)malloc(sizeof(char *) * (words + 1));
	if (!p)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			p[i] = split_strings(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	p[i] = 0;
	return (p);
}

// int main()
// {
// 	int i = 0;
// 	char a[] = "   My  Name  Is Yassein  38 years ";
// 	char	**split = ft_split(a, ' ');
// 	while (split[i])
// 	{
// 		printf("%s \n", split[i]);
// 		i++;
// 	}
// }