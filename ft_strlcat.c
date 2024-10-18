/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:36:54 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/17 17:51:25 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strlcat is a function from <string.h>
	It used to concatenate string to an specific size
*/

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src,
		size_t dst_size)
{
	size_t	i;
	size_t	j;

	i = 0, j = 0;
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

// int main(void) {
//     char dest1[30] = "123";
//     char dest2[30] = "123";
//     const char *src = "456";

//     size_t ret;

//     // Test ft_strlcat
//     ret = ft_strlcat(dest1, src, 5);
//     printf("ft_strlcat\n");
//     printf("dest = %s\nreturn (= %zu\n\n", dest1, ret));

//     // Test strlcat
//     ret = strlcat(dest2, src, 5);
//     printf("strlcat\n");
//     printf("dest = %s\nreturn (= %zu\n", dest2, ret));

//     return (0);
// }