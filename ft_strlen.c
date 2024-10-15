/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:54:23 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/10 20:04:38 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strlen is a function from <string.h>
	It calculates the length of a string
*/

#include "libft.h"

int	ft_strlen(char str[])
{
	int i = 0;

	while (str[i] != '\0')
    {
        i++;
    }
	return (i);
}

// int main(void)
// {
//     char test[] = "this is 10";
//     printf("%d\n", ft_strlen(test));
//     return(0);
// }