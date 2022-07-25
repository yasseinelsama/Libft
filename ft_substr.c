/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <ymohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:52:56 by ymohamed          #+#    #+#             */
/*   Updated: 2022/07/25 14:04:54 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rp;
	char	*sp;
	size_t	i;
	size_t	sl;

	if (!s)
		return (0);
	rp = malloc(sizeof(char) * len + 1);
	if (rp == 0)
		return (0);
	sp = (char *)s;
	i = 0;
	sl = ft_strlen(s);
	while (i < len && i + start < sl)
	{
		rp[i] = sp[i + start];
		i++;
	}
	rp[i] = '\0';
	return (rp);
}
