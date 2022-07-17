


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

int main () 
{
   char	fst[25];
   strcpy(fst,"Ysel");
   char sec[] = "123456789abcdef!@#$";
   unsigned long	n;
//     for (int i = 0; i < 30; i++)
//    {
// 	printf("%c", fst[i]);
//    }
//    printf("\n");
   n = ft_strlcat(fst,sec,25);
//strcpy(str,"This is string.h library function");
//    for (int i = 0; i < 30; i++)
//    {
// 	printf("%c", dst[i]);
//    }
	puts(fst);
	printf("The out come is %lu", n);
	return(0);
}

#include <ctype.h>
#include <stdio.h>
int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c = c - 32;
	return (c);
}

int main(void)
{
	printf("%c\n", toupper('$'));
	printf("%c\n",ft_toupper('$'));
	return (0);
}