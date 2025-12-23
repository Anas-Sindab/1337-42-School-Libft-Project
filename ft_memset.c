/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasinda <anasinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 02:38:21 by anasinda          #+#    #+#             */
/*   Updated: 2025/11/02 13:57:44 by anasinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		*p = (unsigned char)c;
		p++;
	}
	return (s);
}
/*
int main()
{
    char arr[5];
    char arro[5];
    printf("This is ours:%p \n", ft_memset(arr, 65, 6));
    //printf("This is ori:%p \n", memset(arro, 65, 6));
    printf("This is ours:%s \n", arr);
    //printf("This is ori:%s \n", arro);

}*/
