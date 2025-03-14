More malloc, free

Description

This project focuses on dynamic memory allocation in C using malloc, calloc, and free. The goal is to understand how to allocate, use, and free memory properly while handling errors effectively.

Files & Functions

0. malloc_checked.c

Prototype:

void *malloc_checked(unsigned int b);

Allocates memory using malloc.

If malloc fails, terminates the process with exit status 98.

1. string_nconcat.c

Prototype:

char *string_nconcat(char *s1, char *s2, unsigned int n);

Concatenates s1 and the first n bytes of s2.

If n is greater than the length of s2, the entire s2 is used.

Returns a newly allocated string.

If the function fails, returns NULL.

2. _calloc.c

Prototype:

void *_calloc(unsigned int nmemb, unsigned int size);

Allocates memory for an array of nmemb elements, each of size bytes.

The memory is initialized to zero.

If nmemb or size is 0, returns NULL.

If malloc fails, returns NULL.

3. array_range.c

Prototype:

int *array_range(int min, int max);

Creates an array of integers from min to max (inclusive).

Returns a pointer to the allocated memory.

If min > max, returns NULL.

If malloc fails, returns NULL.
