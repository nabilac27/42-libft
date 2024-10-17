/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:27:30 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/17 17:39:49 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* applies a function to each character of a string */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*result;

	i = 0;
	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	result = (char *)malloc((sizeof(char) * (len + 1)));
	if (!result)
		return (0);
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// char	to_upper(unsigned int index, char c)
// {
// 	(void)index;
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }

// int	main(void)
// {
// 	char	*str;

// 	str = ft_strmapi("HeLlO wOrLd!", to_upper);
// 	printf("%s\n", str);
// }