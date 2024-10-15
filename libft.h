/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:02:27 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/10 20:15:04 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int	ft_isalnum(int i);
int	ft_isalpha(int i);
int	ft_isascii(int i);
int	ft_isdigit(int i);
int	ft_isprint(int i);
char	*ft_strchr(const char *pString, int pFind);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
int	ft_strlen(char str[]);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *str, const char *substr, size_t n);
char	*ft_strrchr(const char *pString, int pFind);
int	ft_tolower(int i);
int	ft_toupper(int i);

#endif