/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:52:43 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/17 19:23:58 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	calloc is a function from <stdlib.h>

	It allocates memory and sets its bytes' values to 0.

	It allocates memory for an array of elements,
	initializes all bytes to zero, and returns a pointer
	to the allocated memory.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*temp;
	size_t	n;

	n = count * size;
	temp = malloc(n);
	if (!temp)
	{
		return (0);
	}
	ft_bzero(temp, n);
	return (temp);
}

// int	main(void)
// {
// 	char *str;
// 	int i;

// 	i = 0;
// 	str = (char *)ft_calloc(10, sizeof(char));
// 	if (!str)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}
// 	while (i < 9)
// 	{
// 		str[i] = '0';
// 		i++;
// 	}
// 	str[i] = '\0';

// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }