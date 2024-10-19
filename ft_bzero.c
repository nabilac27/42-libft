/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:03:53 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/19 00:25:23 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	bzero is a function from <strings.h>
	It sets the values of the first n bytes to zero
*/

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	char	*string;
	size_t	i;

	string = (char *)ptr;
	i = 0;
	while (i < n)
	{
		string[i] = 0;
		i++;
	}
}

// int	main(void)
// {
// 	char str[] 		= "Hello, World!";
// 	size_t size_str = sizeof(str);

// 	printf("Input	: %s\n", str);
// 	printf("--------------------------\n");

// 	ft_bzero(str, size_str);
// 	printf("ft_bzero: %s\n", str);

// 	bzero(str, size_str);
// 	printf("bzero   : %s\n", str);

// 	return (0);
// }