/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasinda <anasinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 22:33:17 by anasinda          #+#    #+#             */
/*   Updated: 2025/10/31 01:15:09 by anasinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int main()
{
    t_list *head = malloc(sizeof(t_list));
    t_list *sec = malloc(sizeof(t_list));
    t_list *last = malloc(sizeof(t_list));

    head->next = sec;
    sec->next = last;
    last->next = NULL;
    
    head->content = "ZED";
    sec->content = "YASUO";
    last->content = "KATARINA";
    
    t_list *ptr = malloc(sizeof(t_list));
    ptr = ft_lstlast(head);
    printf("%s \n", (char *)ptr->content);
    //printf("%s \n", (char *)last->content);
}*/