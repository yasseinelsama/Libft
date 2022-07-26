
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n;

	n = malloc(sizeof(t_list));
	if (n == 0)
		return (0);
	n->content = content;
	n->next = 0;
	return (n);
}