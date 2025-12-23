/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasinda <anasinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 02:36:56 by anasinda          #+#    #+#             */
/*   Updated: 2025/12/23 16:21:18 by anasinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (!lst || !(*lst) || !del)
		return ;
	while (*lst)
	{
		ptr = *lst;
		del(ptr->content);
		(*lst) = (*lst)->next;
		free(ptr);
	}
	(*lst) = NULL;
}
/*
   int main()
   {
   t_list *lst = malloc(sizeof(t_list));
   t_list *sec = malloc(sizeof(t_list));
   t_list *new = malloc(sizeof(t_list));

   lst->content = malloc(sizeof(char) * strlen("ZED") + 1);
   lst->content = strcpy(lst->content, "ZED");
   lst->next = sec;

   sec->next = new;
   new->next = NULL;


   void   (*ptr)(void *);
   ptr = del;
   ft_lstclear(&lst, ptr);
//ft_lstdelone(sec, ptr);
//ft_lstdelone(new, ptr);
}*/
