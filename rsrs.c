


#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int d)
{
	if (d > 47 & d < 58)
		return (d);
	else
		return (0);
}

int main(void)
{
	if (isdigit(47))
		printf("this is True");
	else
		printf("Noooooo");	
	return 0;
}


int main () 
{
   char src[34];
   char	dst[38];
   unsigned long	n;
   strcpy(src,"This is string.h library function");
   strcpy(dst, "Y");
   n = strlcpy(dst,src,38);
//    strcpy(str,"This is string.h library function");
   for (int i = 0; i < 38; i++)
   {
	printf("%c", dst[i]);
   }
   printf("\n");
   puts(dst);
   printf("\n The out come is %lu", n);
   return(0);
}
