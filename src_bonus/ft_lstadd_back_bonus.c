/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasinda <anasinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:06:41 by anasinda          #+#    #+#             */
/*   Updated: 2025/12/23 16:21:18 by anasinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ptr = *lst;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
}
/*
   int main()
   {
   t_list *lst = malloc(sizeof(t_list));
   t_list *sec = malloc(sizeof(t_list));
   t_list *new = malloc(sizeof(t_list));

   char *str = "Zed";
   char *strt = "Akali";
   char *nnn = "Yasuo";

   lst->content = str;
   lst->next = sec;

   sec->content = strt;
   sec->next = NULL;

   new->content = nnn;
   ft_lstadd_back(&lst, new);

   while (lst != NULL)
   {
   printf("%s \n", (char *)lst->content);
   lst = lst->next;
   }
   }*/
