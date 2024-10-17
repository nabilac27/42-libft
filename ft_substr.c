/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:19:39 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/17 18:08:12 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* returns a substring from a string */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*result;

	i = 0;
	j = start;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (i < len && s[j] != '\0')
	{
		result[i++] = s[j++];
	}
	result[i] = '\0';
	return (result);
}

// int	main(void)
// {
// 	char	*str;

// 	str = ft_substr("Hello, World!", 7, 5);
// 	printf("%s\n", str);
// 	return (0);
// }