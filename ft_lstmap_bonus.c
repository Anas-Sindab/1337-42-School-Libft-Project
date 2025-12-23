/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasinda <anasinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 02:37:32 by anasinda          #+#    #+#             */
/*   Updated: 2025/11/02 13:46:33 by anasinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head_ptr;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	head_ptr = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&head_ptr, del);
			return (NULL);
		}
		ft_lstadd_back(&head_ptr, new);
		lst = lst->next;
	}
	return (head_ptr);
}

/*t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head_ptr;
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	head_ptr = ft_lstnew(f(lst->content));
	if (!head_ptr)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&head_ptr, del);
			return (NULL);
		}
		ft_lstadd_back(&head_ptr, new);
		lst = lst->next;
	}
	return (head_ptr);
}
int	main(void)
{
	t_list *lst = NULL;
	t_list *map_lst;
	t_list *tmp;

	// create a test list: "one" -> "two" -> "three"
	ft_lstadd_back(&lst, ft_lstnew("one"));
	ft_lstadd_back(&lst, ft_lstnew("two"));
	ft_lstadd_back(&lst, ft_lstnew("three"));

	// map the list
	map_lst = ft_lstmap(lst, f, del);

	// print mapped list
	printf("Mapped list contents:\n");
	tmp = map_lst;
	while (tmp)
	{
		printf("%s -> ", (char *)tmp->content);
		tmp = tmp->next;
	}
	printf("NULL\n");

	// free lists
	ft_lstclear(&lst, del);      // original list content is not malloc'ed,
		so it's safe
	ft_lstclear(&map_lst, del);  // mapped list content is malloc'ed by f

	return (0);
}*/