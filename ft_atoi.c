/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unfinished_ft_atoi.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:50:09 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/10 22:57:51 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	atoi is a function from <stdlib.h>
	It stands for ASCII to integer
	It converts a string to an integer
*/

#include "libft.h"

int	ft_atoi(char *str)
{
	int	negative;
	int	result;

	negative = 1;
	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			negative = negative * -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * negative);
}

// int	main(void)
// {
// 	char test1[] = " ---+--+1234ab567";
// 	char test2[] = " \n\r-12abb345";
// 	char test3[] = "123 123";
// 	char test4[] = "---123";

// 	printf("test 1\n");
// 	printf("ft_atoi : %d\n", ft_atoi(test1));
// 	printf("atoi	: %d\n\n", atoi(test1));

// 	printf("test 2\n");
// 	printf("ft_atoi	: %d\n", ft_atoi(test2));
// 	printf("atoi	: %d\n\n", atoi(test2));

// 	printf("test 3\n");
// 	printf("ft_atoi	: %d\n", ft_atoi(test3));
// 	printf("atoi	: %d\n\n", atoi(test3));

// 	printf("test 4\n");
// 	printf("ft_atoi	: %d\n", ft_atoi(test4));
// 	printf("atoi	: %d\n", atoi(test4));

// 	return (0);
// }