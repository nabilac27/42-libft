/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:03:53 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/17 18:55:02 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	bzero is a function from <strings.h>
	It sets the memory of a given block to zero

	Specifically, it takes a pointer to a block of memory
	and sets the first n bytes of that block to zero
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "Hello, World!";
// 	size_t n = sizeof(str);

// 	ft_bzero(str, n);
// 	printf("ft_bzero: %s\n", str);

// 	bzero(str, n);
// 	printf("bzero   : %s\n", str);

// 	return (0);
// }