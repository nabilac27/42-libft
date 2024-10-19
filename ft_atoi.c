/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:50:09 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/19 19:57:25 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	atoi is a function from <stdlib.h>
	It stands for ASCII to integer
	It converts a string representing a number into an integer
	It skips leading whitespace characters
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res * neg);
}

// int	main(void)
// {
// 	char str[] = "\t -271abc";

// 	printf("ft_atoi : %d\n", ft_atoi(str));
// 	printf("atoi	: %d\n", atoi(str));
// 	return (0);
// }

// /*
// 	line 41
// 	for example, num = 271
// 	(str[0] - '0') + (res * 10)
// 		('2' - '0')+ (0 * 10)
// 		(50 - 48)  + (0 * 10)
//  		2          + 0
// 	= 2

// 	ASCII table:
// 	0	48
// 	1	49
// 	2	50
// 	3	51
// 	4	52
// 	5	53
// 	6	54
// 	7	55
// 	8	56
// 	9	57
// */