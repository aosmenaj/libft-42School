# libft-42School

> A custom implementation of standard C library functions – built from scratch as part of the 42 School core curriculum.

## 📚 Project Overview

**libft** is a foundational project at 42 School that reimplements key functions from the C standard library. It serves as an introduction to low-level programming, memory management, and understanding how basic functions work under the hood.

By coding these utilities yourself, you gain a deeper grasp of how C works and how to write clean, efficient, and reusable code.

## ⚙️ Features

The library includes functions in the following categories:

### Part 1 – Libc Functions

- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- String and memory: `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`
- Conversion: `ft_atoi`, `ft_toupper`, `ft_tolower`

### Part 2 – Additional Functions

- Memory allocation: `ft_calloc`, `ft_strdup`
- String manipulation: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`
- File descriptor output: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Bonus Part – Linked Lists

- Basic list operations: `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`
- Advanced list handling: `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## 🛠️ Usage

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/libft.git
   cd libft
2. Compile the library:
   make
3. Include it in your C projects:
   #include "libft.h"
4. Link with the library when compiling:
   gcc your_file.c -L. -lft
