/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:37:07 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/17 16:06:20 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	strnstr is a function from <string.h>
	It  used to locate the first occurrence of a substring
	within a string, up to a specified number of characters
*/

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (substr[0] == '\0')
	{
		return ((char *)str);
	}
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (str[i + j] == substr[j] && (i + j) < n)
		{
			if (substr[j + 1] == '\0')
			{
				return ((char *)&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char str[]		= "This is a test string";
// 	char substr[] = "test";
// 	size_t n 		= 25; // Input, limit the search to the first n characters.

// 	char *result_ft_strnstr = ft_strnstr(str, substr, n);
// 	char *result_strnstr	= strnstr(str, substr, n);

// 	if (result_ft_strnstr != 0)
// 	{
// 		printf("ft_strnstr: %s\n", result_ft_strnstr);
// 	}
// 	else
// 	{
// 		printf("ft_strnstr: Substring not found.\n");
// 	}

// 	if (result_strnstr != 0)
// 	{
// 		printf("strnstr		: %s\n", result_strnstr);
// 	}
// 	else
// 	{
// 		printf("strnstr		: Substring not found.\n");
// 	}

// 	return (0);
// }