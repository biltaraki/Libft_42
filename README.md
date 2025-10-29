# 📚 Libft

![42](https://img.shields.io/badge/42-School-1E1E1E)
![C](https://img.shields.io/badge/Language-C-00599C)
![Norminette](https://img.shields.io/badge/Code%20Style-Norminette-FF6B6B)
![License](https://img.shields.io/badge/License-MIT-green)

## 🎯 Project Overview

Libft is the first core project at 42 School, where we reimplement a subset of standard C library functions along with additional utilities. This library serves as the foundation for all future C projects at 42.

**Score**: [Your Score Here] / 100 ⭐

## 🏗️ Project Structure

## 📋 Mandatory Functions

### 🔤 Character Classification (`ctype.h`)
| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks for alphabetic character |
| `ft_isdigit` | Checks for digit (0 through 9) |
| `ft_isalnum` | Checks for alphanumeric character |
| `ft_isascii` | Checks if character is ASCII |
| `ft_isprint` | Checks for printable character |
| `ft_toupper` | Converts character to uppercase |
| `ft_tolower` | Converts character to lowercase |

### 📝 String Manipulation (`string.h`)
| Function | Description |
|----------|-------------|
| `ft_strlen` | Calculates length of string |
| `ft_strlcpy` | Copies string with size limit |
| `ft_strlcat` | Concatenates strings with size limit |
| `ft_strchr` | Locates first occurrence of character |
| `ft_strrchr` | Locates last occurrence of character |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_strnstr` | Locates a substring in a string |
| `ft_strdup` | Duplicates a string |

### 🧮 Memory Operations
| Function | Description |
|----------|-------------|
| `ft_memset` | Fills memory with constant byte |
| `ft_bzero` | Zeros a byte string |
| `ft_memcpy` | Copies memory area |
| `ft_memmove` | Copies memory area (handles overlap) |
| `ft_memchr` | Scans memory for a character |
| `ft_memcmp` | Compares memory areas |
| `ft_calloc` | Allocates and zeros memory |

### 🔄 Conversion Functions
| Function | Description |
|----------|-------------|
| `ft_atoi` | Converts string to integer |
| `ft_itoa` | Converts integer to string |

### 📤 Output Functions
| Function | Description |
|----------|-------------|
| `ft_putchar_fd` | Outputs character to file descriptor |
| `ft_putstr_fd` | Outputs string to file descriptor |
| `ft_putendl_fd` | Outputs string + newline to file descriptor |
| `ft_putnbr_fd` | Outputs number to file descriptor |

## ⭐ Bonus Functions (Linked Lists)

### List Structure
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
