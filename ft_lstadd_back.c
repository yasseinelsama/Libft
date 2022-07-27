
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;
	
	if (*lst == 0)
	{
		*lst =  new;
		lst[0]->next = 0; 
	}
	else
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
}