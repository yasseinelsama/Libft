/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 07:56:36 by ymohamed          #+#    #+#             */
/*   Updated: 2022/05/28 19:37:51 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	m;

	c = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] -32;
	while (str[c] != '\0')
	{
		if ((str[c] >= 'A') && (str[c] <= 'Z'))
		{
			str[c] = str[c] + 32;
		}
		m = c -1;
		if (str[m] < '0' && str[c] >= 'a' && str[c] <= 'z' )
			str[c] = str[c] - 32;
		if (str[m] > '9' && str[m] < 'A' && str[c] >= 'a' && str[c] <= 'z')
			str[c] = str[c] - 32;
		if (str[m] > 'Z' && str [m] < 'a' && str[c] >= 'a' && str[c] <= 'z')
			str[c] = str[c] - 32;
		if (str[m] > 'z' && str[c] >= 'a' && str[c] <= 'z')
			str[c] = str[c] - 32;
		c++;
	}
	return (str);
}
/*
int	main()
{
	char src[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	int n;
	
	n = 0;
	while(src[n] != '\0')
	{
	printf("%c", src[n]);
	n++;
	}
	ft_strcapitalize(src);
	n = 0;
	printf("\n");
	while(src[n] != '\0')
	{
		printf("%c", src[n]);
		n++;
	}
}*/
