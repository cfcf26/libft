# Libft Project

## Overview

The Libft project is a foundational project in the 42 School curriculum. It involves coding a C library with general purpose functions that can be used in future C school assignments. The project includes mandatory and bonus parts, and emphasizes the importance of ensuring the functions used in the library are allowed in project guidelines.

## Each function does:

- `ft_atoi.c`: Converts a string to an integer.
- `ft_bzero.c`: Sets the bytes of a string to zero.
- `ft_calloc.c`: Allocates and fills memory block with zero.
- `ft_isalnum.c`: Checks if the character is alphanumeric.
- `ft_isalpha.c`: Checks if the character is alphabetic.
- `ft_isascii.c`: Checks if the character is an ASCII character.
- `ft_isdigit.c`: Checks if the character is a digit.
- `ft_isprint.c`: Checks if the character is printable.
- `ft_itoa.c`: Converts an integer to a string.
- `ft_lstadd_back.c`: Adds a new element at the end of a list.
- `ft_lstadd_front.c`: Adds a new element at the beginning of a list.
- `ft_lstclear.c`: Deletes and frees the given element and every successor.
- `ft_lstdelone.c`: Deletes and frees the given element.
- `ft_lstiter.c`: Applies a function to each element of a list.
- `ft_lstlast.c`: Returns the last element of a list.
- `ft_lstmap.c`: Applies a function to each element of a list and creates a new list.
- `ft_lstnew.c`: Creates a new list element.
- `ft_lstsize.c`: Counts the number of elements in a list.
- `ft_memchr.c`: Locates the first occurrence of a character in a string.
- `ft_memcmp.c`: Compares byte string.
- `ft_memcpy.c`: Copies memory area.
- `ft_memmove.c`: Copies memory area considering overlap.
- `ft_memset.c`: Fills memory with a constant byte.
- `ft_putchar_fd.c`: Outputs a character to a file descriptor.
- `ft_putendl_fd.c`: Outputs a string to a file descriptor, followed by a newline.
- `ft_putnbr_fd.c`: Outputs an integer to a file descriptor.
- `ft_putstr_fd.c`: Outputs a string to a file descriptor.
- `ft_split.c`: Splits a string using a character as a delimiter.
- `ft_strchr.c`: Locates the first occurrence of a character in a string.
- `ft_strdup.c`: Duplicates a string.
- `ft_striteri.c`: Applies a function to each character of a string.
- `ft_strjoin.c`: Concatenates two strings.
- `ft_strlcat.c`: Concatenates two strings with size limit.
- `ft_strlcpy.c`: Copies a string with size limit.
- `ft_strlen.c`: Calculates the length of a string.
- `ft_strmapi.c`: Applies a function to each character of a string and creates a new string.
- `ft_strncmp.c`: Compares two strings up to n characters.
- `ft_strnstr.c`: Locates the first occurrence of a substring in a string, where not more than n characters are searched.
- `ft_strrchr.c`: Locates the last occurrence of a character in a string.
- `ft_strtrim.c`: Trims the beginning and end of a string with a set of characters.
- `ft_substr.c`: Creates a substring from a string.
- `ft_tolower.c`: Converts a character to lowercase.
- `ft_toupper.c`: Converts a character to uppercase.

The `Makefile` is used to compile these functions into a library, and `libft.h` is the header file containing all the function prototypes.

## Usage

To use the library, clone the repository and run `make` in the root directory. This will compile the source files into a `libft.a` library file, which can be linked to your C projects.

<img width="629" alt="스크린샷 2024-03-29 오전 11 28 24" src="https://github.com/cfcf26/libft/assets/75878816/ceeba1dd-0587-4334-86d2-641f121558b3">

