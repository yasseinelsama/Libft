/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 07:56:36 by ymohamed          #+#    #+#             */
/*   Updated: 2022/05/29 16:43:59 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	c;
	int	ret;

	c = 0;
	ret = 1;
	while (str[c] != '\0')
	{
		if ((str[c] < ' ') || (str[c] > '~'))
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
	char src[] = {};
	int n;

	n = ft_str_is_printable(src);
	printf("\n%d", n);
}*/
