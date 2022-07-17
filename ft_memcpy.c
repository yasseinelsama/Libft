/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <ymohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:14:03 by ymohamed          #+#    #+#             */
/*   Updated: 2022/07/17 18:07:46 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, t_s n)
{
	const char	*sptr;
	char		*dptr;
	t_s			i;

	sptr = s;
	dptr = d;
	i = 0;
	while (i < n)
	{
		dptr[i] = sptr[i];
		i++;
	}
	return (d);
}
