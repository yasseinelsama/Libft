
#include "libft.h"

char	*setst(const char *s, char c)
{
	char	*psub;
	int		n;

	n = 0;
	while (s[n] != c && s[n])
			n++;
	psub = (char *)malloc(sizeof(char) * (n + 1));
	if (!psub)
		return (0);
	psub[n] = '\0';
	while (n > 0)
	{
		psub[n - 1] = s [n -1];
		n--;
	}
	return (psub);
}

char	**setword(char const *s, char c, int wordsnum)
{
	char	**p;
	int		i;

	p = (char **)malloc(sizeof(char *) * (wordsnum + 1));
	if (!p)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		p[i] = setst(s, c);
		i++;
		while (*s != c && *s)
			s++;
	}
	p[i] = 0;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	char	*p1;
	int		wordsnum;

	if (!s)
		return (0);
	p1 = (char *)s;
	wordsnum = 0;
	while (*p1 != '\0')
	{
		if (p1[0] != c && (p1[1] == c || p1[1] == '\0'))
			wordsnum++;
		p1++;
	}
	p = setword(s, c, wordsnum);
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
