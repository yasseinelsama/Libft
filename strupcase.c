/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 07:56:36 by ymohamed          #+#    #+#             */
/*   Updated: 2022/05/28 17:09:21 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 'a') && (str[c] <= 'z'))
		{
			str[c] = str[c] - 32;
		}
		c++;
	}
	return (str);
}
/*
int	main()
{
	char src[] = "my name is yassein";
	int n;
	
	n = 0;
	while(src[n] != '\0')
	{
	printf("%c", src[n]);
	n++;
	}
	ft_strupcase(src);
	n = 0;
	printf("\n");
	while(src[n] != '\0')
	{
		printf("%c", src[n]);
		n++;
	}
}*/
