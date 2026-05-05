*This project has been created as part of the 42 curriculum by dsutormi.*

## Description
Libft is the first project of the 42 curriculum. The goal is to create a personal C library by recoding a set of standard C library functions, along with additional utility functions that will be used throughout the rest of the course. 

By building this library from scratch, I have gained a deep understanding of memory management, data structures (like linked lists), and the inner workings of fundamental C functions. This library serves as a foundation for all future C projects at 42.

## Instructions

### Compilation
The project includes a `Makefile` that compiles the source files into a `libft.a` static library.

* **To compile:** Run `make` in the root directory.
* **To clean objects:** Run `make clean`.
* **To remove objects and library:** Run `make fclean`.
* **To recompile:** Run `make re`.

### Usage
To use this library in your own project, include the header file and link the compiled library:

1. Include the header in your code: `#include "libft.h"`
2. Compile your program with the library:
   `gcc main.c -L. -lft -o my_program`

## Library Contents
The library is divided into three main sections:

### 1. Libc Functions
Standard functions from the `<ctype.h>`, `<string.h>`, and `<stdlib.h>` headers:
* **Memory:** `memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`, `calloc`.
* **Strings:** `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strncmp`, `strnstr`, `strdup`.
* **Types:** `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`, `atoi`.

### 2. Additional Functions
Functions not found in the standard C library or implemented in a specific way for 42:
* `ft_substr`: Extracts a substring from a string.
* `ft_strjoin`: Concatenates two strings into a new string.
* `ft_strtrim`: Trims specific characters from the beginning and end of a string.
* `ft_split`: Splits a string into an array of strings based on a delimiter.
* `ft_itoa`: Converts an integer to a string.
* `ft_strmapi` / `ft_striteri`: Applies a function to each character of a string.
* `ft_putchar_fd` / `ft_putstr_fd` / `ft_putendl_fd` / `ft_putnbr_fd`: Output functions using file descriptors.

### 3. Linked Lists
A set of functions to manipulate a simple linked list structure:
* `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

## Resources
* **Man Pages:** `man <function_name>` was the primary source for understanding standard behavior.
* **Man Pages:** `man <make>` for understandig logic of makefiles.
* **habr.com:** `articles/155201/` for understandig logic of makefiles.
* **Grokking Algorithms by BHARGAVA, ADITYA Y.:** for understanding logic of linked lists.

### AI Usage
During this project, AI (Gemini/ChatGPT) was used for:
* **Refining logic:** To clarify edge cases in functions.
* **Documentation:** Assistance in structuring this README and generating boilerplate comments.
