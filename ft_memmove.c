/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:29:24 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/17 18:48:31 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	memmove is a function from <string.h>
	memmove stands for "memory move"

	It moves a block of memory from one location to another,
	with special handling to ensure that the operation is safe
	even if the source and destination memory regions overlap
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;
	size_t				i;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (const unsigned char *)src;
	if (!dest || !src)
	{
		return (0);
	}
	if (ptr_dest > ptr_src)
	{
		i = len;
		while (i > 0)
		{
			i--;
			ptr_dest[i] = ptr_src[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
	}
	return (ptr_dest);
}

// int	main(void)
// {
// 	char str[50] 	= "Hello, World!";
// 	size_t len_str  = strlen(str);

// 	printf("Input		: %s\n", str);
// 	printf("-------------------------------\n");

// 	// Overlapping memory regions
// 	ft_memmove(str + 7, str, len_str);
// 	printf("ft_memmove	: %s\n", str);

// 	// Reset the string for the next demonstration
//     strcpy(str, "Hello, World!"); // Restore the original string

// 	memmove(str + 7, str, len_str);
// 	printf("memmove		: %s\n", str);

// 	return (0);
// }

/*
	The difference between memmove and memcpy

	memmove:
		Safely handles overlapping memory regions

	memcpy:
		Does not handle overlaps safely, which can lead to data corruption

*/