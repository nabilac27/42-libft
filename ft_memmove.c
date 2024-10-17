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
	void	*p_dest;

	p_dest = dest;
	if (dest == 0 && src == 0)
		return (0);
	if (dest > src)
	{
		while (len--)
			*(char *)(dest + len) = *(unsigned char *)(src + len);
	}
	else
	{
		while (len--)
			*(unsigned char *)dest++ = *(unsigned char *)src++;
	}
	return (p_dest);
}

// int	main(void)
// {
//     char array1[20];
//     char array2[20];

//     // Test 1: Overlapping regions (copying forward)
//     memset(array1, 0, sizeof(array1));
//     strcpy(array1, "teststring");
//     memmove(array1 + 2, array1, strlen("teststring") + 1); 
//      +1 to include the null terminator
//     printf("memmove   (forward): %s\n", array1);

//     memset(array2, 0, sizeof(array2));
//     strcpy(array2, "teststring");
//     ft_memmove(array2 + 2, array2, strlen("teststring") + 1);
//     printf("ft_memmove(forward): %s\n\n", array2);

//     // Test 2: Overlapping regions (copying backward)
//     memset(array1, 0, sizeof(array1));
//     strcpy(array1, "teststring");
//     memmove(array1, array1 + 2, strlen("teststring") - 1);
// 	Copy excluding first 2 characters
//     printf("memmove   (backward): %s\n", array1);

//     memset(array2, 0, sizeof(array2));
//     strcpy(array2, "teststring");
//     ft_memmove(array2, array2 + 2, strlen("teststring") - 1);
//     printf("ft_memmove(backward): %s\n\n", array2);

//     // Test 3: Non-overlapping regions
//     memset(array1, 0, sizeof(array1));
//     strcpy(array1, "nonoverlap");
//     memmove(array1 + 5, array1, strlen("nonoverlap") + 1);
//     printf("memmove   (non-overlap): %s\n", array1);

//     memset(array2, 0, sizeof(array2));
//     strcpy(array2, "nonoverlap");
//     ft_memmove(array2 + 5, array2, strlen("nonoverlap") + 1);
//     printf("ft_memmove(non-overlap): %s\n\n", array2);

//     return (0);
// }