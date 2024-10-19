/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:14:54 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/18 15:49:50 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strrchr is a function from <string.h>
	It searches for the last occurrence of a character in a string
*/

#include "libft.h"

char	*ft_strrchr(const char *ptr_string, int ptr_find)
{
	int		i;
	char	*last;

	i = 0;
	last = 0;
	while (ptr_string[i] != '\0')
	{
		if (ptr_string[i] == (char)ptr_find)
			last = (char *)&ptr_string[i];
		i++;
	}
	if (ptr_find == '\0')
		return ((char *)&ptr_string[i]);
	return (last);
}

// int	main(void)
// {
// 	char	string[] = "This is a string";
// 	char	*result_strrchr;
// 	char	*result_ft_strrchr;

// 	char find = 'i'; // Input

// 	printf("String  = %s\n", string);
// 	printf("To find = %c\n", find);
// 	printf("---------------------------\n");

// 	result_strrchr = strrchr(string, find);
// 	if (result_strrchr != 0)
// 		printf("strrchr    = %s\n", result_strrchr);
// 	else
// 		printf("strrchr    = character not found\n");

// 	result_ft_strrchr = ft_strrchr(string, find);
// 	if (result_ft_strrchr != 0)
// 		printf("ft_strrchr = %s\n", result_ft_strrchr);
// 	else
// 		printf("ft_strrchr = character not found\n\n");

// 	return (0);
// }