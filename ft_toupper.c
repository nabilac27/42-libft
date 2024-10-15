/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:46:21 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/10 22:31:50 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	toupper is a function from <ctype.h>
	It converts character to uppercase

	Lowercase letters ('a' to 'z') have ASCII values ranging from 97 to 122
	Uppercase letters ('A' to 'Z') have ASCII values ranging from 65 to 90

	There is a consistent difference of 32 between the ASCII 
	values of lowercase and uppercase
*/

#include "libft.h"

int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
    {
        return (i - 32);
    }
	else
	{
		return (i);
	}
}

// int	main(void)
// {
// 	char test = 'z';
    
//     char result = ft_toupper(test);
      
// 	printf("ft_toupper: ");
// 	if (ft_toupper(result))
// 	{
// 		printf("%c\n", result);
// 	}
// 	else
// 	{
// 		printf("%c\n", result);
// 	}

// 	printf("toupper   : ");
// 	if (toupper(result))
// 	{
// 		printf("%c\n", result);
// 	}
// 	else
// 	{
// 		printf("%c\n", result);
// 	}

// 	return (0);
// }
