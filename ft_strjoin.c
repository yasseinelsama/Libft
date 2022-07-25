/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <ymohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:52:15 by ymohamed          #+#    #+#             */
/*   Updated: 2022/07/25 14:03:00 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fs;
	size_t	l;
	size_t	m;
	size_t	i;

	l = ft_strlen(s1);
	m = ft_strlen(s2);
	fs = malloc(sizeof(char) * (l + m + 1));
	if (fs == 0)
		return (0);
	i = 0;
	while (i < l)
	{
		fs[i] = (char)s1[i];
		i++;
	}
	l = 0;
	while ((char)s2[l] != '\0')
	{
		fs[i] = (char)s2[l];
		l++;
		i++;
	}
	fs[i] = (char)s2[l];
	return (fs);
}
