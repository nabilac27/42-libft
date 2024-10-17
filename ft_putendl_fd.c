/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:32:22 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/17 18:13:50 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  output a string to a file descriptor,
	followed by a new line */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

// int	main(void)
// {
// 	char	str[] = "Hello World!";

// 	ft_putendl_fd(str, 1);
// 	return (0);
// }