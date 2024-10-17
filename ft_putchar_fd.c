/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:30:17 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/17 17:43:18 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* output a char to a file descriptor */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	int fd;

// 	fd = -1;
// 	ft_putchar_fd('a', fd);
// 	return (0);
// }