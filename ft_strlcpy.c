/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasinda <anasinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 02:41:21 by anasinda          #+#    #+#             */
/*   Updated: 2025/10/31 02:41:22 by anasinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (size == 0)
		return (len);
	i = 0;
	while (i < (size - 1) && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*int main()
{
    char src_o[] = "abc";
    char dst_o[1] = "";
    
    char src[] = "def";
    char dst[1] = "";
    
    printf("%ld \n", ft_strlcpy(dst_o, src_o, 10));
    printf("%s \n", dst_o);
    //printf("%d \n", strlcpy(dst, src, 1));
}*/
