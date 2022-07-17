/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <ymohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:53:46 by ymohamed          #+#    #+#             */
/*   Updated: 2022/07/17 18:11:05 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, t_s n)
{
	char	*c1;
	char	*c2;
	t_s		i;

	c1 = (char *)s1;
	c2 = (char *)s2;
	i = 0;
	while (i < n - 1 && c1[i] != '\0')
	{
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);
		i++;
	}
	return (c1[i] - c2[i]);
}
