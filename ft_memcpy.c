/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <ymohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:14:03 by ymohamed          #+#    #+#             */
/*   Updated: 2022/07/15 16:54:07 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *restrict d, const void *restrict s, unsigned long n)
{
	const char	*restrict		sptr;
	char	*restrict			dptr;
	unsigned long				i;

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
