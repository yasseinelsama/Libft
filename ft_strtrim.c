
#include "libft.h"


char *ft_strtrim(char const *s1, char const *set)
{
	char	*sp;
	int		l;

	if (!s1)
		return (0);
	while (s1[0] && ft_strchr(set, s1[0]))
	{
		s1++;
	}
	l = ft_strlen(s1);
	while (l && ft_strchr(set, s1[l - 1]))
	{
		l--;
	}
	sp = malloc(sizeof(char) * (l + 1));
	if (sp == 0)
		return (0);
	sp[l] = '\0';
	while (l > 0)
	{
		sp[l - 1] = s1[l - 1];
		l--;
	}
	return (sp);
}
