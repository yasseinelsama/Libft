
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst && del)
	{
		(*(lst - 1))->next = 0;
		del((*lst)->content);
		
	}
}