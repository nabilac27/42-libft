/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:14:54 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/10 20:04:46 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    strchr is a function from <string.h>
	It searches for the last occurrence of a character in a string
*/

#include "libft.h"

char	*ft_strrchr(const char *pString, int pFind)
{
    int i = ft_strlen(pString);

	while (i >= 0)
	{
		if (pString[i] == (char)pFind)
		{
			return ((char*)pString + i);
		}
		i--;
	}
	return (0);
}

// int main(void)
// {
//     char string[] = "This is a string";
//     char find = 'i';    // Input

//     char *result_strrchr     = strrchr(string, find);
//     char *result_ft_strrchr  = ft_strrchr(string, find);

//     if (result_strrchr != 0)
//     {
//         printf("strchr    = %s\n", result_strrchr);
//     }
//     else
//     {
//         printf("strchr    = character not found\n");
//     }

//     if (result_ft_strrchr != 0)
//     {
//         printf("ft_strchr = %s\n", result_ft_strrchr);
//     }
//     else
//     {
//         printf("ft_strchr = character not found\n");
//     }

//     return(0);
// }
