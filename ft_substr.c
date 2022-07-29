/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <ymohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:52:56 by ymohamed          #+#    #+#             */
/*   Updated: 2022/07/29 21:52:27 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rp;
	char	*sp;
	size_t	i;

	if (start > len)
		len = 0;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (!s)
		return (0);
	rp = malloc(sizeof(char) * (len + 1));
	if (!rp)
		return (0);
	sp = (char *)s;
	i = 0;
	while (i < len)
	{
		rp[i] = sp[start++];
		i++;
	}
	rp[i] = '\0';
	return (rp);
}
