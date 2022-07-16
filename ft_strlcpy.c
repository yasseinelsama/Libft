/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <ymohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 19:09:03 by ymohamed          #+#    #+#             */
/*   Updated: 2022/07/15 19:58:44 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long	t_s;

t_s	ft_strlcpy(char *restrict d, const char *restrict s, t_s k)
{
	t_s	i;
	t_s	m;

	i = 0;
	m = 0;
	while (s[i] != '\0')
		i++;
	if (k == 0)
		return (i);
	while (m < (k -1) & s[m] != '\0')
	{
		d[m] = s[m];
		m++;
	}
	d[m] = '\0';
	return (i);
}
