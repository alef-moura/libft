# Libft

<p align="center">
  <img src="https://img.shields.io/badge/Developer-joamoren-blue?style=for-the-badge" alt="Developer joamoren">
  <img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge" alt="Language C">
  <img src="https://img.shields.io/badge/Norminette-Passing-brightgreen?style=for-the-badge" alt="Norminette">
</p>

**Libft** is a personal C library built from scratch as part of the 42 curriculum. The core concept is straightforward: reimplement standard `libc` functions yourself to deeply understand how they operate internally, and then maintain and expand this library to use as a foundation for future projects in the course.

---

## How to Build

The project features a `Makefile` configured to automate the compilation process cleanly:

* `make` — Builds the mandatory functions and generates the static library file `libft.a`.
* `make bonus` — Includes the linked list functions into the library compilation.
* `make clean` — Removes all temporary object files (`.o`) generated during compilation.
* `make fclean` — Executes clean and removes the `libft.a` file, wiping everything out.
* `make re` — Cleans and rebuilds the entire project from scratch.

### How to use it in another project:
To compile a source file using your compiled library, simply link directly to the `.a` file:
```bash
cc your_file.c libft.a -o your_program

Implemented Files and Functions
Character Tests and Conversions
ft_isalpha.c — Checks if a character is alphabetic (a-z or A-Z).

ft_isdigit.c — Checks if a character is a decimal digit (0-9).

ft_isalnum.c — Checks if a character is alphanumeric.

ft_isascii.c — Checks if a character is part of the ASCII table.

ft_isprint.c — Checks if a character is printable on screen.

ft_toupper.c — Converts a lowercase letter to uppercase.

ft_tolower.c — Converts an uppercase letter to lowercase.

ft_atoi.c — Converts a string representation of numbers to an integer value (int).

Raw Memory Manipulation
ft_memset.c — Fills a memory area with a specific constant byte.

ft_bzero.c — Sets all bytes of a memory area to zero.

ft_memcpy.c — Copies n bytes from one memory area to another.

ft_memmove.c — Copies bytes between memory areas, handling overlapping regions safely.

ft_memchr.c — Scans memory for the first occurrence of a specific byte.

ft_memcmp.c — Compares two memory areas byte by byte.

ft_calloc.c — Dynamically allocates memory via malloc and initializes all bytes to zero.

String Manipulation
ft_strlen.c — Returns the length of a null-terminated string.

ft_strlcpy.c — Size-bounded string copying, always guaranteeing a null-terminator \0.

ft_strlcat.c — Size-bounded secure string concatenation.

ft_strchr.c — Locates the first occurrence of a character in a string.

ft_strrchr.c — Locates the last occurrence of a character in a string.

ft_strncmp.c — Compares two strings up to a maximum limit of n characters.

ft_strnstr.c — Locates a substring within another string, bounded by length.

ft_strdup.c — Duplicates a string by dynamically allocating memory.

Advanced Utility Functions
ft_substr.c — Allocates and returns a specific slice (substring) from a string.

ft_strjoin.c — Allocates and returns the concatenation of two strings.

ft_strtrim.c — Trims specific characters from both the start and end of a string.

ft_split.c — Splits a string by a delimiter character into an array of strings.

ft_itoa.c — Converts an integer to its string representation.

ft_strmapi.c — Creates a new string by applying a function to each character of the original string.

ft_striteri.c — Applies a function to each character of the original string in place (by reference).

Writing with File Descriptors (fd)
ft_putchar_fd.c — Outputs a single character to a specified file descriptor.

ft_putstr_fd.c — Outputs a string to a specified file descriptor.

ft_putendl_fd.c — Outputs a string followed by a newline to a specified file descriptor.

ft_putnbr_fd.c — Outputs an integer to a specified file descriptor.

Bonus Functions: Linked Lists
ft_lstnew.c — Allocates and returns a brand new linked list node.

ft_lstadd_front.c — Adds a node at the beginning of a linked list.

ft_lstsize.c — Counts the total number of nodes in a list.

ft_lstlast.c — Returns the last node of a linked list.

ft_lstadd_back.c — Adds a node at the end of a linked list.

ft_lstdelone.c — Frees the memory of a single node using a specified deletion function.

ft_lstclear.c — Deletes and frees all nodes of a list, setting its pointer to NULL.

ft_lstiter.c — Applies a function to the content of each node within the list.

ft_lstmap.c — Creates a new list by applying a function to each node of the original list.

Resources
Man Pages — The primary reference for understanding the behavior of all standard system functions using the man command or via Man7.org.

Cppreference — Detailed documentation of the C standard library (cppreference.com).

GeeksforGeeks — Foundational guide to understanding and designing Linked Lists logic in C (Linked Lists in C).