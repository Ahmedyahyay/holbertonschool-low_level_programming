C - malloc, free

Description

This project focuses on dynamic memory allocation in C using malloc and free. The tasks involve creating, duplicating, concatenating, and managing arrays and strings dynamically.

Requirements

Code should be compiled using gcc with the flags: -Wall -pedantic -Werror -Wextra -std=gnu89

All functions must be correctly prototyped in the main.h header file.

Memory allocation failures should be properly handled by returning NULL.

Files & Functions

0-create_array.c

Function:

char *create_array(unsigned int size, char c);

Creates an array of chars, initialized with a specific char.

Returns NULL if size is 0 or if memory allocation fails.

1-strdup.c

Function:

char *_strdup(char *str);

Returns a pointer to a newly allocated space containing a duplicate of str.

Uses malloc, and can be freed using free().

Returns NULL if str is NULL or if memory allocation fails.

2-str_concat.c

Function:

char *str_concat(char *s1, char *s2);

Concatenates two strings dynamically.

Returns a pointer to a newly allocated space containing s1 followed by s2.

If NULL is passed as input, treats it as an empty string.

Returns NULL on failure.

3-alloc_grid.c

Function:

int **alloc_grid(int width, int height);

Returns a pointer to a 2D array of integers initialized to 0.

Returns NULL if width or height is 0 or negative.

Returns NULL if memory allocation fails.

4-free_grid.c

Function:

void free_grid(int **grid, int height);

Frees a 2D grid previously allocated by alloc_grid.

Compilation Example

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main.c 0-create_array.c -o create_array

Usage Example

./create_array

Repository

GitHub repository: holbertonschool-low_level_programming
Directory: malloc_free
