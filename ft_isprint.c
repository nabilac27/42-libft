/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:35:02 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/08 20:55:21 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	isprint is a function from <ctype.h>
	It checks if a character is printable

    The printable standard defines 128 characters
    
    Control characters (0-31):
        Non-printing characters used for control purposes 
        (e.g., carriage return, line feed, tab)
    Printable characters (32-126):
        Include letters, digits, punctuation marks, and special symbols
*/

// #include <ctype.h>
// #include <stdio.h>

int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
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
// 	char test = '=';

// 	printf("ft_isprint: ");
// 	if (ft_isprint(test))
// 	{
// 		printf("%c is a printable character.\n", test);
// 	}
// 	else
// 	{
// 		printf("%c is not a printable character.\n", test);
// 	}

// 	printf("isprint   : ");
// 	if (isprint(test))
// 	{
// 		printf("%c is a printable character.\n", test);
// 	}
// 	else
// 	{
// 		printf("%c is not a printable character.\n", test);
// 	}

// 	return (0);
// }