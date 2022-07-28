
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst == 0)
	{
		*lst = new; 
		(*lst)->next = 0;
	}
	else 
	{
		new->next = *lst; //the pointer for the list should be copied first to the end of new
		*lst = new;
	}
}
	