/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:23:04 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/19 00:37:32 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	memcpy is a function from <string.h>
	It used to copy memory from one location to another
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*ptr_dest;
	const char	*ptr_src;
	size_t		i;

	ptr_dest = (char *)dest;
	ptr_src = (const char *)src;
	i = 0;
	if (!dest && !src)
	{
		return (0);
	}
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[32] = "Hello!";
// 	char	dest[32] = "Destination";

// 	printf("Source		: %s\n", src);
// 	printf("Destination	: %s\n", dest);
// 	printf("-------------------------------\n");
// 	ft_memcpy(dest, src, sizeof(src));
// 	printf("ft_memcpy: \"%s\"\n", dest);
// 	memcpy(dest, src, sizeof(src));
// 	printf("memcpy   : \"%s\"\n", dest);
// }

// /*
// 	The difference between memcpy and strcpy
// 	memcpy:
// 	Copies a specified number of bytes from source to destination
// 	strcpy:
// 	Copies a null-terminated string from source to destination
// */