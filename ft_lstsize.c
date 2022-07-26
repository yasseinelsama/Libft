
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		i;
	
	if (lst == 0)
		return (0);
	tmp = lst;
	i = 1;
	while (tmp->next != 0)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}