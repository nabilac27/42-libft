/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:23:04 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/17 18:02:06 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	memcpy is a function from <string.h>
	memcpy stands for "memory copy"
	It used to copy memory from one location to another
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (dest);
	d = dest;
	s = src;
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}

// int	main(void)
// {
// 	char src[32] = "Hello World!";
// 	char dest[32] = "Destination";

// 	ft_memcpy(dest, src, sizeof(src));
// 	printf("ft_memcpy: \"%s\"\n", dest);

// 	memcpy(dest, src, sizeof(src));
// 	printf("memcpy   : \"%s\"\n", dest);
// }