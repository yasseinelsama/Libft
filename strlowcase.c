/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 07:56:36 by ymohamed          #+#    #+#             */
/*   Updated: 2022/05/28 17:10:34 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 'A') && (str[c] <= 'Z'))
		{
			str[c] = str[c] + 32;
		}
		c++;
	}
	return (str);
}
/*
int	main()
{
	char src[] = "HI MY NAME IS Z YASSEIN";
	int n;
	
	n = 0;
	while(src[n] != '\0')
	{
	printf("%c", src[n]);
	n++;
	}
	ft_strlowcase(src);
	n = 0;
	printf("\n");
	while(src[n] != '\0')
	{
		printf("%c", src[n]);
		n++;
	}
}*/
