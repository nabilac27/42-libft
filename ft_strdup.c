/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:39:01 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/17 19:10:31 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strnstr is a function from <string.h>
	It  used to locate the first occurrence of a substring
	within a string, up to a specified number of characters
*/

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(src) + 1;
	dest = malloc(len);
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, src, len);
	return (dest);
}

// int	main(void)
// {
// 	char *original;
// 	char *copied;
// 	char *original_ft;
// 	char *copied_ft;

// 	original_ft = "Hello, World!";
// 	copied_ft = ft_strdup(original_ft);
// 	printf("Original: %s\n", original_ft);
// 	printf("Copied: %s\n", copied_ft);
// 	free(copied_ft);

// 	original = "Hello, World!";
// 	copied = strdup(original);
// 	printf("Original: %s\n", original);
// 	printf("Copied: %s\n", copied);
// 	free(copied);

// 	return (0);
// }