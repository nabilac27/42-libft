# **libft**

This repository contains my implementation of the **42 Libft** project, 
a custom C library that replicates essential standard C library functions. 

It includes fundamental utilities for memory management, string manipulation, and more, 
acting as a core building block for many **42** projects.

## **Key Features**:
- **Memory Management**: Functions such as `malloc`, `free`, and `calloc` for dynamic memory handling.
- **String Manipulation**: Key string functions like `strlen`, `strcpy`, `strcmp`, etc.
- **Utility Functions**: Various helper functions for a wide range of operations.

This project is designed to help strengthen understanding of C programming, 
focusing on low-level memory manipulation, pointer management, and efficient coding practices.

---

## **Functions Overview**
### **Libc Functions `<ctype.h>`**

| **Function** | **Description** |
|--------------|-----------------|
| `ft_isalpha(int i)` | Checks if the character is an alphabetic letter (A-Z or a-z). |
| `ft_isdigit(int i)` | Checks if the character is a digit (0-9). |
| `ft_isalnum(int i)` | Checks if the character is alphanumeric (a letter or a digit). |
| `ft_isascii(int i)` | Checks if the character is an ASCII character. |
| `ft_isprint(int i)` | Checks if the character is printable (including space). |
| `ft_toupper(int i)` | Converts a lowercase letter to uppercase. |
| `ft_tolower(int i)` | Converts an uppercase letter to lowercase. |

### **Libc Functions: `<string.h>`**

| **Function** | **Description** |
|--------------|-----------------|
| `ft_strlen(const char *str)` | Returns the length of the string (excluding the null-terminator). |
| `ft_memset(void *ptr, int value, size_t num)` | Fills the first `num` bytes of the memory area pointed to by `ptr` with the value `value`. |
| `ft_bzero(void *ptr, size_t n)` | Sets the first `n` bytes of the memory area pointed to by `ptr` to zero. |
| `ft_memcpy(void *dest, const void *src, size_t n)` | Copies `n` bytes from memory area `src` to memory area `dest`. |
| `ft_memmove(void *dst, const void *src, size_t len)` | Moves `len` bytes from memory area `src` to memory area `dst`. Handles overlap. |
| `ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)` | Copies up to `dstsize - 1` characters from `src` to `dst` and null-terminates the result. |
| `ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)` | Appends `src` to the end of `dst` while ensuring no overflow (null-terminated). |
| `ft_strchr(const char *ptr_string, int ptr_find)` | Returns a pointer to the first occurrence of `ptr_find` in `ptr_string`. |
| `ft_strrchr(const char *ptr_string, int ptr_find)` | Returns a pointer to the last occurrence of `ptr_find` in `ptr_string`. |
| `ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares up to `n` characters of two strings. |
| `ft_memchr(const void *ptr_src, int ptr_find, size_t n)` | Scans the first `n` bytes of `ptr_src` for the first occurrence of `ptr_find`. |
| `ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares the first `n` bytes of memory areas `s1` and `s2`. |
| `ft_strnstr(const char *haystack, const char *needle, size_t len)` | Finds the first occurrence of `needle` in `haystack`, within `len` characters. |
| `ft_strdup(const char *s1)` | Duplicates the string `s1`, allocating memory for the new string. |

### **Libc Functions: `<stdlib.h>`**

| **Function** | **Description** |
|--------------|-----------------|
| `ft_atoi(const char *str)` | Converts the string `str` to an integer. |
| `ft_calloc(size_t count, size_t size)` | Allocates memory for `count` elements, each of size `size`, and initializes it to zero. |

### **Additional Functions**

| **Function** | **Description** |
|--------------|-----------------|
| `ft_substr(char const *s, unsigned int start, size_t len)` | Returns a substring from `s`, starting at `start` with a length of `len`. |
| `ft_strjoin(char const *s1, char const *s2)` | Concatenates `s1` and `s2` into a new string. |
| `ft_strtrim(char const *s1, char const *set)` | Trims characters from both ends of `s1` that are present in `set`. |
| `ft_split(char const *s, char c)` | Splits the string `s` into an array of strings, using `c` as the delimiter. |
| `ft_itoa(int n)` | Converts the integer `n` to a string. |
| `ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Applies the function `f` to each character of `s`, returning a new string. |
| `ft_striteri(char *s, void (*f)(unsigned int, char *))` | Applies the function `f` to each character of `s` (in place). |
| `ft_putchar_fd(char c, int fd)` | Writes the character `c` to the file descriptor `fd`. |
| `ft_putstr_fd(char *s, int fd)` | Writes the string `s` to the file descriptor `fd`. |
| `ft_putendl_fd(char *s, int fd)` | Writes the string `s` followed by a newline to the file descriptor `fd`. |
| `ft_putnbr_fd(int n, int fd)` | Writes the integer `n` to the file descriptor `fd`. |


---

# **libft_v2** - Enhanced Version

This repository contains my **enhanced version of Libft**, 
which builds on the original **42 Libft** by adding extra utilities and functionalities 
tailored to the more complex requirements of **42 projects**.

## **Key Additions**:
- **`ft_printf`**: A custom implementation of the `printf` function for formatted output.
- **`get_next_line`**: A function to read lines from a file descriptor efficiently.

