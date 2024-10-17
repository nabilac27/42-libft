/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unfinished_ft_memcmp.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:34:51 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/16 20:10:39 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	memcmp is a function from <string.h>

	It used to compare a specified number of
	bytes from two blocks of memory.

	It will return - if the memory blocks are equal
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	int	a[2] = {4, 2};
// 	int	b[2] = {4, 2};

// 	printf("ft_memcmp: %d\n", ft_memcmp(a, b, sizeof(a)));
//     printf("memcmp   : %d\n", memcmp(a, b, sizeof(a)));
// 	return (0);
// }