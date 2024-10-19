/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:36:54 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/19 04:58:52 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strlcat is a function from <string.h>
	It used to concatenate string to an specific size
	It appends the src string to the end of the dst string
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < dst_size)
	{
		i++;
	}
	while (src[j] && (i + j + 1) < dst_size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dst_size)
	{
		dst[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}

// int	main(void)
// {
// 	char dst[30] = "123";
// 	const char *src = "456";

// 	size_t dst_size = 7;

// 	ft_strlcat(dst, src, dst_size);
// 	printf("resulting string = %s\n", dst);
// 	printf("total length	= %zu\n", dst_size);

// 	return (0);
// }