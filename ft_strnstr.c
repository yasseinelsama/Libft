/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <ymohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:49:41 by ymohamed          #+#    #+#             */
/*   Updated: 2022/07/17 18:13:30 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, t_s len)
{
	char	*hsp;
	char	*nep;
	t_s		i;
	t_s		m;
	t_s		nl;

	hsp = (char *)haystack;
	nep = (char *)needle;
	i = 0;
	if (nep[0] == '\0')
		return (&hsp[0]);
	nl = ft_strlen(needle);
	while (hsp[i] != '\0' && i < len)
	{
		m = 0;
		if (hsp[i] == nep[m])
		{
			while (m < nl && hsp[i + m] == nep[m] && m + i < len)
				m++;
			if (m == nl)
				return (&hsp[i]);
		}
		i++;
	}
	return (0);
}
