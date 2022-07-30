/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <ymohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:52:56 by ymohamed          #+#    #+#             */
/*   Updated: 2022/07/30 04:02:13 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	m;

	if (!s)
		return (0);
	p = malloc(sizeof(char) * (len + 1));
	if (p == 0)
		return (0);
	i = start;
	m = 0;
	while (m < len && i < ft_strlen(s))
		p[m++] = s[i++];
	p[m] = '\0';
	return (p);
}
