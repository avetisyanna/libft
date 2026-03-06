# 📚 Libft - My First C Library

## 📝 Project Overview
**Libft** is a foundational project that challenges you to recreate standard C library functions from scratch. The goal is to strip away the "magic" of standard headers like `<string.h>` or `<stdlib.h>` and understand exactly how memory allocation, pointer arithmetic, and data structures work under the hood.

This library serves as a personal toolkit for all future C projects in the curriculum.

---

## 🛠️ Function Categories

### 1. Standard Libc Recreations
These functions are designed to behave exactly like their counterparts in the standard C library:
* **Character Checks:** `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`.
* **String Manipulation:** `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strncmp`, `strnstr`.
* **Memory Management:** `memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`.
* **Conversions:** `toupper`, `tolower`, `atoi`.

### 2. Additional Utility Functions
These are extra functions that simplify string and memory manipulation:
* **ft_substr**: Extracts a specific portion of a string.
* **ft_strjoin**: Concatenates two strings into a newly allocated third string.
* **ft_strtrim**: Removes specified characters from the beginning and end of a string.
* **ft_split**: Splits a string into an array of strings based on a delimiter character.
* **ft_itoa**: Converts an integer into a string (the reverse of `atoi`).
* **ft_strmapi / ft_striteri**: Iterates through a string to apply custom functions to each character.
* **ft_putchar_fd / ft_putstr_fd / ft_putendl_fd / ft_putnbr_fd**: Reliable output functions using specific file descriptors.

### 3. Bonus Functions (Linked Lists)
Advanced functions to manage dynamic singly linked lists:

* `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

---

## 🚀 How to Use

### Compilation
The project comes with a **Makefile** to automate the build process.

| Command | Action |
| :--- | :--- |
| `make` | Compiles the mandatory part and creates `libft.a`. |
| `make bonus` | Includes the linked list functions in the library. |
| `make clean` | Deletes the object files (`.o`). |
| `make fclean` | Deletes object files AND the `libft.a` library. |
| `make re` | Performs a full re-compilation. |

### Implementation
To use this library in your own C project:
1. Copy `libft.a` and `libft.h` into your project folder.
2. Include the header at the top of your `.c` files:
   ```c
   #include "libft.h"

Compile your program by linking the library:
``` gcc main.c -L. -lft

### 🧠 Key Learnings
Memory Management: Handling malloc and free to prevent memory leaks.
Pointers: Deep diving into pointer arithmetic and void * casting.
Makefile: Creating a professional build system with rules and dependencies.
Robustness: Testing for edge cases like NULL pointers, empty strings, and maximum/minimum integer values.

### Developed as part of the C programming curriculum.
