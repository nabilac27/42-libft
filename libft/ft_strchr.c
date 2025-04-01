/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:18:02 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/28 19:48:51 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strchr is a function from <string.h>
	It searches for the first occurrence of a character in a string
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (0);
}

// int	main(void)
// {
// 	char	string[] = "This is a string";
// 	char	*result_strchr;
// 	char	*result_ft_strchr;

// 	char find = 'i'; // Input

// 	printf("String		= %s\n", string);
// 	printf("To find   = %c\n", find);
// 	printf("---------------------------\n");

// 	result_strchr = strchr(string, find);
// 	if (result_strchr != 0)
// 		printf("strchr    = %s\n", result_strchr);
// 	else
// 		printf("strchr    = character not found\n");

// 	result_ft_strchr = ft_strchr(string, find);
// 	if (result_ft_strchr != 0)
// 		printf("ft_strchr = %s\n", result_ft_strchr);
// 	else
// 		printf("ft_strchr = character not found\n\n");

// 	return (0);
// }