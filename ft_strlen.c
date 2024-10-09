/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:54:23 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/08 21:02:21 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strlen is a function from <string.h>
	It calculates the length of a string
*/

// #include <stdio.h>
// #include <string.h>

int	ft_strlen(char str[])
{
	int i;

	i = 0;
	while (str[i])
    {
        i++;
    }
	return (i);
}

// int main(void)
// {
//     char test[] = "this is 9";
//     printf("%d\n", ft_strlen(test));
//     return(0);
// }