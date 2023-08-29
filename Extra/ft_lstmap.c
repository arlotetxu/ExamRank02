//
// Created by Jose Manuel Florido Perena on 12/30/22.
//

#include "ExamRank02_Prep.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;

	new_lst = NULL;
	while (lst)
	{
		new_lst -> content = f(lst -> content);
		new_lst -> next = lst -> next;
		del(lst -> content);
		free (lst);
		lst = NULL;
	}
	return (new_lst);
}