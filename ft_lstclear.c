
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst)
		return;
	if ((*lst)->next != 0)
		ft_lstclear(&(*lst)->next, del);
 	del((*lst)->content);
 	free(*lst);
 	*lst = 0;
}
// t_list	*ptr;
// 	while ((*lst)->next != 0)
// 	{
// 		ptr = (*lst)->next;
// 		del((*lst)->content);
// 		free(*lst);
// 		*lst = ptr;
// 	}
// 	del((*lst)->content);
// 	free(*lst);
// 	*lst = 0;