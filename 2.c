#include <stdio.h>
#include <string.h>
typedef unsigned long	t_s;
t_s	ft_strlcat(char * restrict dst, const char * restrict src, t_s dsize)
{
	t_s	i;
	t_s	m;
	t_s	k;

	i = 0;
	m = 0;
	while (src[i] != '\0')
		i++;
	while (dst[m] != '\0')
		m++;
	k = m + i;
	i = 0;
	if (dsize == 0 || m > dsize)
		return (k);
	while (m < (dsize -1) & src[i] != '\0')
	{
		dst[m] = src[i];
		m++;
		i++;
	}
	dst[m] = '\0';
	return (k - dsize);
}

int main () 
{
   char src[15];
   char	dst[13];
   unsigned long	n;
   strcpy(src,"This is string");
   strcpy(dst, "Yesl");
   n = strlcat(dst,src,2);
//    strcpy(str,"This is string.h library function");
   for (int i = 0; i < 20; i++)
   {
	printf("%c", dst[i]);
   }
   printf("\n");
   puts(dst);
   printf("\n The out come is %lu", n);
   return(0);
}
