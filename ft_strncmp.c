/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:16:29 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/17 17:48:22 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strncmp is a function from <string.h>
	It compares a specific number of characters from two strings
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// int	main(void)
// {
// 	char str1[] = "Hello, World!";
// 	char str2[] = "Hello, everyone!";
// 	size_t n = 5; // Input, compare the first n characters

// 	int result_ft_strncmp = ft_strncmp(str1, str2, n);

// 	if (result_ft_strncmp == 0)
// 	{
// 		printf("ft_strncmp: The strings are equal up to %zu characters.\n", n);
// 	}
// 	else
// 	{
// 		printf("ft_strncmp: The strings are not equal. Result: %d\n",
// 			result_ft_strncmp);
// 	}

// 	int result_strncmp = ft_strncmp(str1, str2, n);

// 	if (result_strncmp == 0)
// 	{
// 		printf("ft_strncmp: The strings are equal up to %zu characters.\n", n);
// 	}
// 	else
// 	{
// 		printf("ft_strncmp: The strings are not equal. Result: %d\n",
// 			result_strncmp);
// 	}

// 	return (0);
// }