/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:21:09 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/19 19:45:57 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* concatenates two strings into a new string */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (s1 == 0 || s2 == 0)
		return (0);
	new_str = (char *)malloc(s1_len + s2_len + 1);
	if (new_str == 0)
		return (0);
	ft_strlcpy(new_str, s1, s1_len + 1);
	ft_strlcpy(new_str + (s1_len), s2, s2_len + 1);
	return (new_str);
}

// int	main(void)
// {
// 	char str1[] = "Hello ";
// 	char str2[] = "World!";

// 	printf("%s\n", ft_strjoin(str1, str2));

// 	return (0);
// }

// /*
// 	to compile:
// 	cc ft_strjoin.c ft_strlcpy.c ft_strlen.c
// */