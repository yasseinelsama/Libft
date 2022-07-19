/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <ymohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:27:31 by ymohamed          #+#    #+#             */
/*   Updated: 2022/07/19 21:13:31 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == 0)
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*s;
// 	char	m[] = "this a string to";
// 	int		i;
// 	i = 0;
// 	s = ft_calloc(25, sizeof(char) * 32);
// 	if (s == NULL)
// 		return (0);
// 	while (i <= (21))
// 	{
// 		s[i] = m[i];
// 		i++;
// 	}
// 	//puts(s);
// 	for (size_t i = 0; i < 30; i++)
// 	{
// 		printf("%c", s[i]);
// 	}
// 	printf("\n");
// 	return (0);
// }
