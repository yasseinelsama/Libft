#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rp;
	char	*sp;
	size_t	i;
	size_t	sl;
	
	rp = malloc(sizeof(char) * len + 1);
	if (rp == 0)
		return (0);
	sp = (char *)s;
	i = 0;
	sl = ft_strlen(s);
	while (i < len && i + start < sl)
	{
		rp[i] = sp[i + start];
		i++;
	}
	rp[i] = '\0';
	return (rp);
}
