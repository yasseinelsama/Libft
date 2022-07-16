/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <ymohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:52:03 by ymohamed          #+#    #+#             */
/*   Updated: 2022/07/15 16:52:06 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *d, const void *s, unsigned long n)
{
	const char		*sptr;
	char			*dptr;
	unsigned long	i;

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
