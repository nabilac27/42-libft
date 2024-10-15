/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:12:55 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/10 20:04:28 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strchr is a function from <string.h>
	It searches for the first occurrence of a character in a string
*/

#include "libft.h"

char	*ft_strchr(const char *pString, int pFind)
{
	while (*pString != '\0')
	{
		if (*pString == (char)pFind)
		{
			return ((char *)pString);
		}
		pString++;
	}
	if (pFind == '\0')
	{
		return ((char *)pString);
	}
	return (0);
}

// int main(void)
// {
//     char string[] = "This is a string";
//     char find = 'i';    // Input

//     char *result_strchr     = strchr(string, find);
//     char *result_ft_strchr  = ft_strchr(string, find);

//     if (result_strchr != 0)
//     {
//         printf("strchr    = %s\n", result_strchr);
//     }
//     else
//     {
//         printf("strchr    = character not found\n");
//     }

//     if (result_ft_strchr != 0)
//     {
//         printf("ft_strchr = %s\n", result_ft_strchr);
//     }
//     else
//     {
//         printf("ft_strchr = character not found\n");
//     }

//     return(0);
// }
