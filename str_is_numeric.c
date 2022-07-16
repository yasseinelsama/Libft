/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 07:56:36 by ymohamed          #+#    #+#             */
/*   Updated: 2022/05/28 16:00:35 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	c;
	int	ret;

	c = 0;
	ret = 1;
	while (str[c] != '\0')
	{
		if ((str[c] < '0') || (str[c] > '9'))
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
	char src[] = "123457553h4";
	int n;

	n = ft_str_is_numeric(src);
	printf("\n%d", n);
}*/
