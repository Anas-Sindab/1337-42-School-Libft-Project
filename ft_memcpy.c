/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasinda <anasinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 02:38:09 by anasinda          #+#    #+#             */
/*   Updated: 2025/10/31 02:38:11 by anasinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (const unsigned char *)src;
	if (dest != src)
	{
		while (n--)
		{
			*ptr_dest = *ptr_src;
			ptr_dest++;
			ptr_src++;
		}
	}
	return (dest);
}
/*
int main()
{
    char arr_dest[5] = "abc";
    char arro_dest[5] = "aaa";
    char arr_src[5] = "abcd";
    char arro_src[5] = "abcd";
    //printf("This is ours:%s \n", ft_memcpy(NULL, arr_src, 4));
    //printf("This is ori:%p \n", memcpy(arro_dest, arro_src, 4));
    printf("This is ori:%s \n", memcpy(arro_dest, arro_src, 6));
    //printf("This is ori:%s \n", arro_dest);
}*/