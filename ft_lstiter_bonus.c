/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasinda <anasinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 02:37:18 by anasinda          #+#    #+#             */
/*   Updated: 2025/10/31 02:37:20 by anasinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	if (!lst || !f)
		return ;
	ptr = lst;
	while (ptr)
	{
		f(ptr->content);
		ptr = ptr->next;
	}
}
/*
int main()
{
    t_list *head = malloc(sizeof(t_list));
    t_list *sec = malloc(sizeof(t_list));
    t_list *last = malloc(sizeof(t_list));
    
    
    head->content = "He";
    sec->content = "test";
    last->content = "ye";
    
    head->content = malloc(sizeof(25));
    sec->content = malloc(sizeof(25));
    last->content = malloc(sizeof(25));

    
    
    head->next = sec;
    sec->next = last;
    last->next = NULL;
    
    ft_lstiter(head, frr);
    
    while (head != NULL)
    {
        printf("%s \n", (char *)(head->content));
        head = head->next;
    }
}*/
