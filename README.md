| C Project | Grade |
| :-- | :-- |
| [Libft_42](#) | <img src="https://img.shields.io/badge/125%20%2F%20100-success" alt="125/100" /> |

# 📚 Libft

![42](https://img.shields.io/badge/42-School-1E1E1E)
![C](https://img.shields.io/badge/Language-C-00599C)
![Norminette](https://img.shields.io/badge/Code%20Style-Norminette-FF6B6B)
![License](https://img.shields.io/badge/License-MIT-green)

> **Score**: 125 / 100 ⭐  
> Libft is the first core project at 42 School.  
> It’s about re-implementing essential C standard library functions from scratch,  
> building a solid foundation for all future C projects.

---

## 🎯 Project Overview

Libft is a static library (`libft.a`) containing custom implementations of basic C functions  
such as memory manipulation, string handling, character checks, conversions, and linked lists.

🧠 **Goal:** Understand low-level C programming, memory, and modular code architecture.  
💪 **Output:** A reusable library built with your own hands.

---

## 🧩 Topics I Learned

- 🔹 Memory (stack vs heap)
- 🔹 File descriptors
- 🔹 Pointers & arrays
- 🔹 Binary and ASCII representation
- 🔹 Makefiles & compilation
- 🔹 Data structures (linked lists)
- 🔹 Debugging with `valgrind` / `gdb`

---

## 🏗️ Project Structure


---

## ⚙️ Build Commands

| Command | Description |
| :-- | :-- |
| `make` | Build the library |
| `make bonus` | Build with linked list (bonus) |
| `make clean` | Remove object files |
| `make fclean` | Remove objects + library |
| `make re` | Full rebuild |

---

## 🧾 Mandatory Functions

### 🔤 Character Checks (`ctype.h`)
| Function | Description |
| -- | -- |
| `ft_isalpha` | Check if character is alphabetic |
| `ft_isdigit` | Check if character is a digit |
| `ft_isalnum` | Check if character is alphanumeric |
| `ft_isascii` | Check if character is in ASCII |
| `ft_isprint` | Check if character is printable |
| `ft_toupper` | Convert to uppercase |
| `ft_tolower` | Convert to lowercase |

### 🧵 String Handling (`string.h`)
| Function | Description |
| -- | -- |
| `ft_strlen` | Return string length |
| `ft_strlcpy` | Copy string with size limit |
| `ft_strlcat` | Concatenate strings safely |
| `ft_strchr` | Find first occurrence of char |
| `ft_strrchr` | Find last occurrence of char |
| `ft_strncmp` | Compare two strings up to n chars |
| `ft_strnstr` | Locate substring |
| `ft_strdup` | Duplicate string |

### 🧮 Memory
| Function | Description |
| -- | -- |
| `ft_memset` | Fill memory with a byte |
| `ft_bzero` | Zero memory |
| `ft_memcpy` | Copy memory area |
| `ft_memmove` | Copy memory (handles overlap) |
| `ft_memchr` | Search memory for byte |
| `ft_memcmp` | Compare memory areas |
| `ft_calloc` | Allocate & zero memory |

### 🔄 Conversions
| Function | Description |
| -- | -- |
| `ft_atoi` | Convert string to integer |
| `ft_itoa` | Convert integer to string |

### 🖨️ Output
| Function | Description |
| -- | -- |
| `ft_putchar_fd` | Write character to fd |
| `ft_putstr_fd` | Write string to fd |
| `ft_putendl_fd` | Write string + newline to fd |
| `ft_putnbr_fd` | Write number to fd |

---

## ⭐ Bonus: Linked Lists

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
