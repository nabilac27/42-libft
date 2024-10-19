/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:39:01 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/18 17:34:16 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strdup is a function from <stdlib.h>
	It  duplicate a string by allocating sufficient memory
	to hold a copy of the source string and returning a
	pointer to the new string
*/

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(src) + 1;
	dest = malloc(len);
	if (dest == 0)
		return (0);
	ft_memcpy(dest, src, len);
	return (dest);
}

// int	main(void)
// {
// 	char *src;
// 	char *dest_strdup;
// 	char *dest_ft_strdup;

// 	src = "Hello, World!";
// 	dest_ft_strdup = ft_strdup(src);

// 	printf("src: %s\n", src);
// 	printf("-----------------------\n");

// 	printf("ft_strdup: %s\n", dest_ft_strdup);
// 	free(dest_ft_strdup);

// 	dest_strdup = strdup(src);
// 	printf("strdup		: %s\n", dest_strdup);
// 	free(dest_strdup);

// 	return (0);
// }