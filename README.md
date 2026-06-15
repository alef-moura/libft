*This project has been created as part of the 42 curriculum by alesferr.*

# Libft - Your very first own library

## Description
The Libft project involves coding a custom C library that replicates a wide range of general-purpose standard functions from the C standard library (libc), along with additional utility functions. 

C programming can often become tedious without access to standard functions. The primary goal of this project is to deeply understand how these fundamental functions work by implementing them from scratch, mastering memory allocation, pointer manipulation, and creating a reliable toolset that will be reused in future 42 software engineering assignments.

---

## Library Description
The final output of this project is a static library file named `libft.a`. It provides functions divided into three main components:

### 1. Libc Functions (Part 1)
Reimplementation of standard functions adhering strictly to their definitions in the system's man pages, prefixed with `ft_`:
* **Character Classification & Conversion:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.
* **String Manipulation:** `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`.
* **Memory Management:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`.
* **Type Conversion & Dynamic Allocation:** `ft_atoi`, `ft_calloc`, `ft_strdup`.

### 2. Additional Functions (Part 2)
Functions designed to extend the basic capabilities of the standard library, focusing on string manipulation and file descriptor outputs:
* **String Generation:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`.
* **Functional Mapping:** `ft_strmapi`, `ft_striteri`.
* **File Descriptor Outputs:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

### 3. Linked List Functions (Part 3 - Bonus)
A set of functions dedicated to manipulating structures and dynamic linear collections using a custom list container (`t_list`):
* `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

---

## Instructions

### Technical Considerations
* Global variables are strictly forbidden.
* All code complies with the 42 Norm.
* Every `.c` file is compiled using `cc` with the mandatory flags `-Wall -Wextra -Werror`.

### Compilation
The project includes a `Makefile` that handles compiling the source files into the library without any unnecessary relinking. You can use the following commands at the root of the repository:

* **Compile the mandatory functions:**
```bash
  make
  ```
* **Compile the linked list bonus functions:**
```bash
  make bonus
  ```
* **Remove the generated object files (`.o`):**
```bash
  make clean
  ```
* **Remove the object files and the static library file (`libft.a`):**
```bash
  make fclean
  ```
* **Recompile the entire library from scratch:**
```bash
  make re
  ```

### Usage
To integrate `libft.a` into your own projects, include the header file and link the compiled static library during the compilation process:

1. Include the header in your source code:
```c
   #include "libft.h"
   ```
2. Compile your program specifying the path to the library:
```bash
   cc main.c -L. -lft -o my_program
   ```

---

## Resources

### References
* [GNU C Library (glibc) Documentation](https://www.gnu.org/software/libc/manual/)
* [Linux Manual Pages (man-pages)](https://man7.org/linux/man-pages/)
* [Understanding Linked Lists in C - GeeksforGeeks](https://www.geeksforgeeks.org/linked-list-data-structure/)

### AI Use Disclosure
In accordance with the 42 AI policy and learning rules, an AI model was used during this project as a conceptual guide. 
* **Tasks Assisted:** Explaining pointer arithmetic corner cases, analyzing specific operating system differences regarding `calloc(0)` behavior, and generating the structural layout for this documentation file.
* **Specific Parts:** AI was used to research implementation logic patterns for `ft_memmove` and `ft_split` to ensure safe heap management and avoid memory leaks. No direct code duplication was introduced without manual logic validation and compliance with peer-learning workflows.