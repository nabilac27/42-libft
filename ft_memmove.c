/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:29:24 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/19 04:45:01 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	memmove is a function from <string.h>
	It moves a block of memory from one location to another
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;
	size_t				i;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (const unsigned char *)src;
	if (!dest && !src)
		return (0);
	if (ptr_dest > ptr_src)
	{
		while (len--)
			ptr_dest[len] = ptr_src[len];
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
	return (dest);
}

// int	main(void)
// {
// 	char	src[50] = "HelloTest";
// 	char	*dest	= src;

// 	size_t	len_str = 3;

// 	ft_memmove(dest, src, len_str);
// 	printf("ft_memmove	: %s\n\n", src);

// 	strcpy(src, "HelloTest"); // Restore the original string

// 	memmove(dest, src, len_str);
// 	printf("memmove		: %s\n", src);

// 	return (0);
// }