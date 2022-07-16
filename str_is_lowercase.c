/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 07:56:36 by ymohamed          #+#    #+#             */
/*   Updated: 2022/05/28 16:04:26 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	c;
	int	ret;

	c = 0;
	ret = 1;
	while (str[c] != '\0')
	{
		if ((str[c] < 'a') || (str[c] > 'z'))
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
	char src[] = "ljdmndfdfdef";
	int n;

	n = ft_str_is_lowercase(src);
	printf("\n%d", n);
}*/
