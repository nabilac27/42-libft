/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:20:41 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/08 12:30:36 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	isalnum is a function from <ctype.h>
	It checks if a character is an alphanumeric

	alphanumeric = contains letters (a-z, A-Z, 0-9) and numbers
*/

// #include <ctype.h>
// #include <stdio.h>

int	ft_isalnum(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z') || (i >= '0'
			&& i <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int	main(void)
// {
// 	char test = '/';

// 	printf("ft_isalnum: ");
// 	if (ft_isalnum(test))
// 	{
// 		printf("%c is alphanumeric.\n", test);
// 	}
// 	else
// 	{
// 		printf("%c is not alphanumeric.\n", test);
// 	}

// 	printf("isalnum   : ");
// 	if (isalnum(test))
// 	{
// 		printf("%c is alphanumeric.\n", test);
// 	}
// 	else
// 	{
// 		printf("%c is not alphanumeric.\n", test);
// 	}

// 	return (0);
// }