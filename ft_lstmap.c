/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <ymohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 01:27:48 by ymohamed          #+#    #+#             */
/*   Updated: 2022/07/29 01:42:49 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*toadd;
	t_list	*final;

	ptr = lst;
	final = 0;
	while (ptr)
	{
		toadd = ft_lstnew(f(ptr->content));
		ft_lstadd_back(&final, toadd);
		ft_lstdelone(toadd, del);
		ptr = ptr->next;
	}
	return (final);
}
