/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:37:07 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/19 05:00:42 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	strnstr is a function from <string.h>
	It  used to locate the first occurrence of a substring
	within a string, up to a specified number of characters
*/

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
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char str[]		= "This is a test string";
// 	char substr[] 	= "t";
// 	size_t n 		= 25;

// 	char *result_ft_strnstr = ft_strnstr(str, substr, n);
// 	char *result_strnstr	= strnstr(str, substr, n);

// 	printf("ft_strnstr :");
// 	if (result_ft_strnstr != 0)
// 	{
// 		printf("%s\n", result_ft_strnstr);
// 	}
// 	else
// 	{
// 		printf("Substring not found.\n");
// 	}

// 	printf("strnstr		:");
// 	if (result_strnstr != 0)
// 	{
// 		printf("%s\n", result_strnstr);
// 	}
// 	else
// 	{
// 		printf("Substring not found.\n");
// 	}

// 	return (0);
// }