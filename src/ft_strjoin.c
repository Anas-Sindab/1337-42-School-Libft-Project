/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasinda <anasinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 02:41:08 by anasinda          #+#    #+#             */
/*   Updated: 2025/12/23 16:21:18 by anasinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	ptr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
		ptr[i++] = s1[j++];
	j = 0;
	while (s2[j])
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}
/*
int main(void)
{
    char *result;

    // Test 1: Normal case
    result = ft_strjoin("Hello, ", "World!");
    printf("Test 1: \"%s\"\n", result);
    free(result);

    // Test 2: s1 empty
    result = ft_strjoin("", "World!");
    printf("Test 2: \"%s\"\n", result);
    free(result);

    // Test 3: s2 empty
    result = ft_strjoin("Hello, ", "");
    printf("Test 3: \"%s\"\n", result);
    free(result);

    // Test 4: both empty
    result = ft_strjoin("", "");
    printf("Test 4: \"%s\"\n", result);
    free(result);

    // Test 5: special characters
    result = ft_strjoin("123!@#", "$%^&*()");
    printf("Test 5: \"%s\"\n", result);
    free(result);

    // Test 6: long strings
    char long1[1001], long2[1001];
    memset(long1, 'A', 1000);
    memset(long2, 'B', 1000);
    long1[1000] = '\0';
    long2[1000] = '\0';
    result = ft_strjoin(long1, long2);
    printf("Test 6: length = %zu\n", strlen(result)); // should be 2000
    free(result);

    // Test 7: one NULL string
    result = ft_strjoin(NULL, "World!");
    printf("Test 7: %s\n", result ? result : "(NULL)");

    // Test 8: both NULL
    result = ft_strjoin(NULL, NULL);
    printf("Test 8: %s\n", result ? result : "(NULL)");

    return 0;
}*/
