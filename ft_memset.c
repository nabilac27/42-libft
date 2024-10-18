/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:36:08 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/16 19:43:39 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	memset is a function from <string.h>
	memset stands for "memory set"
	It sets a block of memory to a specific value

	It is often utilized for initializing or resetting memory areas,
	such as arrays or structures, to a known state.
*/

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	char	*string;
	size_t	i;

	string = (char *)ptr;
	i = 0;
	while (i < num)
	{
		string[i] = value;
		i++;
	}
	return (ptr);
}

// int	main(void)
// {
// 	char	str[] = "Hello, World!";
// 	size_t	size_str;
// 	int		c;

// 	size_str = sizeof(str) - 1;
// 	c = 'A';

// 	printf("Input		: %s\n", str);
// 	printf("-------------------------------\n");

// 	ft_memset(str, c, size_strn);
// 	printf("ft_memset	: %s\n", str);

// 	memset(str, c, size_strn);
// 	printf("memset		: %s\n", str);

// 	return (0);
// }

/* 
	void* is a Generic Pointer Type:
	It can point to any data type, but it does not have a specific data type
	associated with it.

	As such, you cannot directly dereference a void*
	or perform pointer arithmetic on it because the compiler does not know
	what type of data it points to.

	To set each byte in memory to a specific value,
	we need to treat the memory as an array of bytes.

	In C, a char is defined to be exactly one byte,
	so casting the void* pointer to a char* allows us to access and
	modify individual bytes

	Dereferencing: accessing the value that a pointer is pointing to
*/