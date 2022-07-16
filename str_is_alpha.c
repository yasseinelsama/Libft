/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 07:56:36 by ymohamed          #+#    #+#             */
/*   Updated: 2022/05/28 15:56:08 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	c;
	int	ret;

	c = 0;
	ret = 1;
	while (str[c] != '\0')
	{
		if ((str[c] < 'A') || (str[c] > 'z'))
		{
			ret = 0;
			break ;
		}
		if (str[c] < 'A' && str[c] > 'a')
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
	char src[] = "Hello there, hope it works!";
	int n;
	
	n = ft_str_is_alpha(src);
	printf("\n%d", n);
}*/
