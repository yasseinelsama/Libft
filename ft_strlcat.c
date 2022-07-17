/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <ymohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 03:20:50 by ymohamed          #+#    #+#             */
/*   Updated: 2022/07/17 18:10:22 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_s	ft_strlcat(char *dst, const char *src, t_s dsize)
{
	t_s	i;
	t_s	m;
	t_s	k;

	i = 0;
	m = 0;
	while (src[i] != '\0')
		i++;
	while (dst[m] != '\0')
		m++;
	k = m + i;
	if (dsize == 0)
		return (i);
	i = 0;
	while (m < (dsize -1) && src[i] != '\0')
	{
		dst[m] = src[i];
		m++;
		i++;
	}
	dst[m] = '\0';
	if (dsize <= m)
		return (k - m + dsize);
	return (k);
}
