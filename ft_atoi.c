/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:50:09 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/17 18:59:21 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	atoi is a function from <stdlib.h>
	It stands for ASCII to integer
	It converts a string to an integer
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	minus;
	int	result;

	minus = 1;
	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * minus);
}

// int main()
// {
// 	char str1[] = "15613";
// 	char str2[] = "-15613";
// 	char str3[] = "+15asd613";
// 	char str4[] = "-1561dase3";
// 	ft_putnbr_fd(ft_atoi(str1), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(ft_atoi(str2), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(ft_atoi(str3), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(ft_atoi(str4), 1);
// 	ft_putchar_fd('\n', 1);
// }