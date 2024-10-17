/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:14:54 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/17 18:00:33 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strchr is a function from <string.h>
	It searches for the last occurrence of a character in a string
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((s[i]) == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}

/*int	main(void)
{
	char	str[] = "Vou ser duplicado e nem te apercebes!";
	char	str1[] = "Ve o valgrind!";
	char	str2[] = "Ou o pyhtontutor!";
	ft_putendl_fd(ft_strdup(str), 1);
	ft_putendl_fd(ft_strdup(str1), 1);
	ft_putendl_fd(ft_strdup(str2), 1);
}*/