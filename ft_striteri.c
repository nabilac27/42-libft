/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:28:34 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/17 18:13:23 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* applies a function to each character of a string */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		(*f)(i, (s + i));
		++i;
	}
}
// void	function(unsigned int i, char *c)
// {
// 	*c += i;
// }
// int	main(void)
// {
// 	char	str[] = "aaaaaa";

// 	ft_striteri(str, &function);
// 	printf("%s\n", str);
// 	return (0);
// }