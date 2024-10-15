/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:36:54 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/15 00:47:01 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    strlcat is a function from <string.h>
    It used to concatenate string to an specific size
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = strlen(dst);
	src_len = strlen(src);
	i = 0;

	if (dstsize <= dst_len)
	{
		return (dstsize + src_len);
	}

	while (src[i] != '\0' && dst_len + i < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}

	dst[dst_len + i] = '\0';
	int total_len = dst_len + src_len;

	return (total_len);
}

// int main(void)
// {
//     char dest1[30] = "123";
//     char dest2[30] = "123";
//     const char *src = "456";

//     size_t ret;

//     ret = ft_strlcat(dest1, src, 5);
//     printf("ft_strlcat\n");
//     printf("dest = %s\nreturn = %zu\n\n", dest1, ret);

//     ret = strlcat(dest2, src, 5);
//     printf("strlcat\n");
//     printf("dest = %s\nreturn = %zu\n", dest2, ret);

//     return 0;
// }
