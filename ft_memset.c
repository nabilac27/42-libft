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
*/

#include "libft.h"

void	*ft_memset(void *x, int c, size_t len)
{
	size_t	i;
	char	*string;

	string = (char *)x;
	i = 0;
	while (i < len)
	{
		string[i] = c;
		i++;
	}
	return (x);
}

// int	main(void)
// {
// 	char str[] = "Hello, World!";
// 	size_t n = sizeof(str) - 1;

// 	int c = 'x';

// 	ft_memset(str, c, n);
// 	printf("ft_memset: %s\n", str);

// 	memset(str, c, n);
// 	printf("memset		: %s\n", str);

// 	return (0);
// }