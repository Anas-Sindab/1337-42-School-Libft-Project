/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasinda <anasinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 02:37:32 by anasinda          #+#    #+#             */
/*   Updated: 2026/01/05 06:38:43 by anasinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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
