/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:33:52 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/10 22:30:53 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strlcpy is a function from <string.h>
	It copies a string with a size limit
*/

#include "libft.h"

size_t	ft_strlcpy(char *restrict dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (n == 0)
	{
		return (i);
	}
	j = 0;
	while (j < n - 1 && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}

// int	main(void)
// {
// 	char src[] = "Hello";
// 	char dest1[20];
// 	char dest2[20];

// 	size_t n = strlen(src)+1;

// 	printf("source		: %s\n", src);
// 	printf("-------------------------\n");

// 	size_t result_ft_strlcpy = ft_strlcpy(dest1, src, n);
// 	printf("ft_strlcpy	: %s\n", dest1);

// 	size_t result_strlcpy = ft_strlcpy(dest2, src, n);
// 	printf("strlcpy		: %s\n", dest2);

// 	return (0);
// }