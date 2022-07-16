/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 07:56:36 by ymohamed          #+#    #+#             */
/*   Updated: 2022/05/28 16:06:16 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	c;
	int	ret;

	c = 0;
	ret = 1;
	while (str[c] != '\0')
	{
		if ((str[c] < 'A') || (str[c] > 'Z'))
		{
			ret = 0;
			break ;
		}
		c++;
	}
	return (ret);
}
/*
int	main()
{
	char src[] = "DFGHTFFGH";
	int n;

	n = ft_str_is_uppercase(src);
	printf("\n%d", n);
}*/
