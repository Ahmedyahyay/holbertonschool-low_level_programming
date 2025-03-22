C - Variadic functions

This repository contains C programs that demonstrate the use of variadic functions.

## Tasks

### 0. Beauty is variable, ugliness is constant (mandatory)

* **Task:** Write a function that returns the sum of all its parameters.
* **Prototype:** `int sum_them_all(const unsigned int n, ...);`
* **Behavior:**
    * If `n == 0`, return `0`.
* **Example:**

    ```c
    #include <stdio.h>
    #include "variadic_functions.h"

    int main(void)
    {
        int sum;

        sum = sum_them_all(2, 98, 1024);
        printf("%d\n", sum);
        sum = sum_them_all(4, 98, 1024, 402, -1024);
        printf("%d\n", sum);
        return (0);
    }
    ```

* **Compilation:**

    ```bash
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
    ```

* **Output:**

    ```bash
    ./a
    1122
    500
    ```

* **File:** `0-sum_them_all.c`
* **Repository:** `holbertonschool-low_level_programming/variadic_functions`

### 1. To be is to be the value of a variable (mandatory)

* **Task:** Write a function that prints numbers, followed by a new line.
* **Prototype:** `void print_numbers(const char *separator, const unsigned int n, ...);`
* **Behavior:**
    * `separator` is the string to be printed between numbers.
    * `n` is the number of integers passed to the function.
    * Use `printf`.
    * If `separator` is `NULL`, don’t print it.
    * Print a new line at the end of the function.
* **Example:**

    ```c
    #include "variadic_functions.h"

    int main(void)
    {
        print_numbers(", ", 4, 0, 98, -1024, 402);
        return (0);
    }
    ```

* **Compilation:**

    ```bash
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b
    ```

* **Output:**

    ```bash
    ./b
    0, 98, -1024, 402
    ```

* **File:** `1-print_numbers.c`
* **Repository:** `holbertonschool-low_level_programming/variadic_functions`

### 2. One woman's constant is another woman's variable (mandatory)

* **Task:** Write a function that prints strings, followed by a new line.
* **Prototype:** `void print_strings(const char *separator, const unsigned int n, ...);`
* **Behavior:**
    * `separator` is the string to be printed between the strings.
    * `n` is the number of strings passed to the function.
    * Use `printf`.
    * If `separator` is `NULL`, don’t print it.
    * If one of the strings is `NULL`, print `(nil)` instead.
    * Print a new line at the end of the function.
* **Example:**

    ```c
    #include "variadic_functions.h"

    int main(void)
    {
        print_strings(", ", 2, "Jay", "Django");
        return (0);
    }
    ```

* **Compilation:**

    ```bash
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_strings.c -o c
    ```

* **Output:**

    ```bash
    ./c
    Jay, Django
    ```

* **File:** `2-print_strings.c`
* **Repository:** `holbertonschool-low_level_programming/variadic_functions`

### 3. To be is a to be the value of a variable (mandatory)

* **Task:** Write a function that prints anything.
* **Prototype:** `void print_all(const char * const format, ...);`
* **Behavior:**
    * `format` is a list of types of arguments passed to the function:
        * `c`: char
        * `i`: integer
        * `f`: float
        * `s`: char * (if the string is `NULL`, print `(nil)` instead)
        * Any other char should be ignored.
    * Use `printf`.
    * Print a new line at the end of the function.
    * Restrictions:
        * No `for`, `goto`, ternary operator, `else`, `do ... while`.
        * Maximum 2 `while` loops.
        * Maximum 2 `if` statements.
        * Maximum 9 variables.
* **Example:**

    ```c
    #include "variadic_functions.h"

    int main(void)
    {
        print_all("ceis", 'B', 3, "stSchool");
        return (0);
    }
    ```

* **Compilation:**

    ```bash
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-print_all.c -o d
    ```

* **Output:**

    ```bash
    ./d
    B, 3, stSchool
    ```

* **File:** `3-print_all.c`
* **Repository:** `holbertonschool-low_level_programming/variadic_functions`
