/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasinda <anasinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:07:18 by anasinda          #+#    #+#             */
/*   Updated: 2025/11/02 13:07:21 by anasinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;

	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	if (dest != src)
	{
		if (p_dest > p_src)
		{
			while (n--)
				p_dest[n] = p_src[n];
		}
		else
		{
			while (n--)
			{
				*p_dest = *p_src;
				p_dest++;
				p_src++;
			}
		}
	}
	return (dest);
}
/*
int main()
{
    char arr_dest[5] = "aaa";
    //char arro_dest[5];
    char arr_src[5];
    char *arr_p = arr_src + 2;
    //printf("%c \n", *arr_p);
    //char arro_src[5] = "abcd";
    //printf("This is ours:%p \n", ft_memmove(arr_p, arr_src, 9));
    printf("ori:%s \n", memmove(arr_dest, arr_src, 10));
    //printf("This is ours:%s \n", arr_p);
    //printf("This is ori:%s \n", arro_dest);

}*/