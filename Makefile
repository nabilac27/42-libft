# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/19 05:56:46 by nchairun          #+#    #+#              #
#    Updated: 2024/10/19 21:53:00 by nchairun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

SRCS = ./ft_isalnum.c ./ft_isalpha.c ./ft_isascii.c ./ft_isdigit.c \
       ./ft_isprint.c ./ft_toupper.c ./ft_tolower.c ./ft_strlen.c \
       ./ft_strlcpy.c ./ft_strlcat.c ./ft_strchr.c ./ft_strrchr.c \
       ./ft_strncmp.c ./ft_strnstr.c ./ft_substr.c ./ft_strjoin.c \
       ./ft_strtrim.c ./ft_split.c ./ft_strmapi.c ./ft_striteri.c \
       ./ft_memset.c ./ft_bzero.c ./ft_memcpy.c ./ft_memmove.c \
       ./ft_memchr.c ./ft_memcmp.c ./ft_calloc.c ./ft_strdup.c \
       ./ft_putchar_fd.c ./ft_putstr_fd.c ./ft_putendl_fd.c ./ft_putnbr_fd.c \
       ./ft_atoi.c ./ft_itoa.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)


$(NAME): $(OBJS)
		$(AR) $(NAME) $^


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)


re: fclean all

.PHONY: all clean fclean 

# NAME
#  sets the name of the output library file

# ar rcs: 
#  sets the archiver command to create a static library
#  static library: a collection of object files that are linked into an executable at compile time
       
       
# $(AR) $(NAME) $^
#  runs the archiver command to create the library $(NAME) from the object files 
#  ($^ is a shortcut for all the object files)

# $(CC) $(CFLAGS) -c $< -o $@
#  compiles the source file ($< is the source file, and $@ is the target file)
       
# %.o: %.c
#  a pattern rule to compile .c files into .o files

# clean
#  target removes the object files

# fclean
#  target removes the object files and the library file.

