/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unfinished_ft_memchr.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:20:26 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/16 20:06:41 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	memchr is a function from <string.h>

	It finds the first occurrence of a byte in a memory block

	It locates the first occurrence of a specific character
	in a block of memory. It is useful for searching raw memory
	areas rather than just null-terminated strings
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char source[] = "Hello, world!";
// 	char find = 'o'; // Input
// 	int n = 12;      // Input

// 	char *result_ft_memchr;
// 	char *result_memchr;

// 	// Search for the character 'o' in the first 12 bytes
// 	result_ft_memchr = ft_memchr(source, find, 12);

// 	printf("ft_memchr\n");
// 	if (result_ft_memchr != NULL)
// 	{
// 		printf("Character found   : %c\n", *result_ft_memchr);
// 		printf("Position in string: %ld\n\n", result_ft_memchr - source);
// 	}
// 	else
// 	{
// 		printf("Character not found within the given range.\n");
// 	}

// 	result_memchr = memchr(source, find, 12);

// 	printf("memchr\n");
// 	if (result_memchr != NULL)
// 	{
// 		printf("Character found   : %c\n", *result_memchr);
// 		printf("Position in string: %ld\n", result_memchr - source);
// 	}
// 	else
// 	{
// 		printf("Character not found within the given range.\n");
// 	}
// 	return (0);
// }