/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:15:38 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/08 12:20:30 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	isalpha is a function from <ctype.h>
	It checks if a character is a digit
*/

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int i)
{
	while ('0' <= i && i <= '9')
	{
		return (1);
	}
		return (0);
}

// int	main(void)
// {
// 	char test = '1';

// 	printf("ft_isdigit: ");
// 	if (ft_isdigit(test))
// 	{
// 		printf("%c is a digit.\n", test);
// 	}
// 	else
// 	{
// 		printf("%c is not a digit.\n", test);
// 	}

// 	printf("isdigit   : ");
// 	if (isdigit(test))
// 	{
// 		printf("%c is a digit.\n", test);
// 	}
// 	else
// 	{
// 		printf("%c is not a digit.\n", test);
// 	}

// 	return (0);
// }