/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasinda <anasinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 02:41:15 by anasinda          #+#    #+#             */
/*   Updated: 2025/11/02 16:53:18 by anasinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	if (!dst && src && size == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	i = 0;
	while (src[i] && dst_len + 1 < size)
		dst[dst_len++] = src[i++];
	dst[dst_len] = '\0';
	return (dst_len + ft_strlen(&src[i]));
}
// int main()
// {
//     printf("%zu\n", strlcat(NULL, "ddd", 0));
// }
/*int main(void)
{
	char buffer[15] = "Hello";
	char *src = "World!";
	size_t result;

	printf("=== Test 1: Normal case ===\n");
	printf("Before concatenation:\n");
	printf("buffer: \"%s\"\n", buffer);

	result = ft_strlcat(buffer, src, sizeof(buffer));

	printf("After concatenation:\n");
	printf("buffer: \"%s\"\n", buffer);
	printf("Returned length: %zu\n", result);
	printf("----------------------------\n\n");

	printf("=== Test 2: Small buffer ===\n");
	char small[8] = "Hi";
	result = ft_strlcat(small, "123456789", sizeof(small));

	printf("After concatenation:\n");
	printf("small: \"%s\"\n", small);
	printf("Returned length: %zu\n", result);
	printf("----------------------------\n\n");

	printf("=== Test 3: Zero size ===\n");
	char zero[10] = "Test";
	result = ft_strlcat(zero, "Add", 0);
	printf("Returned length: %zu (should be strlen(src) + size)\n", result);
	printf("----------------------------\n\n");

	printf("=== Test 4: Exact fit ===\n");
	char exact[12] = "Good";
	result = ft_strlcat(exact, "Morning", sizeof(exact));
	printf("After concatenation:\n");
	printf("exact: \"%s\"\n", exact);
	printf("Returned length: %zu\n", result);
	printf("----------------------------\n\n");

	printf("=== Test 5: Empty source ===\n");
	char empty_src[10] = "Hello";
	result = ft_strlcat(empty_src, "", sizeof(empty_src));
	printf("After concatenation:\n");
	printf("empty_src: \"%s\"\n", empty_src);
	printf("Returned length: %zu\n", result);
	printf("----------------------------\n\n");

	return (0);
}*/