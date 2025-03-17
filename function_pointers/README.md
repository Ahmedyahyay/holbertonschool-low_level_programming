# Function Pointers in C

## Description
This project explores the use of function pointers in the C programming language. Function pointers allow us to write flexible and reusable code by passing functions as arguments. The project consists of multiple tasks demonstrating the application of function pointers in different scenarios.

## Files & Tasks

### **0. What's My Name**
**File:** `0-print_name.c`
- Implements a function `print_name()` that takes a string and a function pointer.
- Calls the provided function pointer to print the name in different formats.

**Prototype:**
```c
void print_name(char *name, void (*f)(char *));
```

**Usage Example:**
```c
print_name("Bob", print_name_as_is);
print_name("Bob Dylan", print_name_uppercase);
```

### **1. Function Pointer & Arrays**
**File:** `1-array_iterator.c`
- Implements `array_iterator()`, which applies a function to each element of an array.

**Prototype:**
```c
void array_iterator(int *array, size_t size, void (*action)(int));
```

**Usage Example:**
```c
int array[5] = {0, 98, 402, 1024, 4096};
array_iterator(array, 5, print_elem);
array_iterator(array, 5, print_elem_hex);
```

### **2. Searching for an Integer**
**File:** `2-int_index.c`
- Implements `int_index()`, which searches for an integer in an array using a function pointer for comparison.

**Prototype:**
```c
int int_index(int *array, int size, int (*cmp)(int));
```

**Usage Example:**
```c
int index = int_index(array, 20, is_98);
printf("%d\n", index);
```

### **3. Simple Calculator**
**Files:** `3-main.c`, `3-op_functions.c`, `3-get_op_func.c`, `3-calc.h`
- Implements a simple calculator that performs operations using function pointers.
- Supports the operators: `+`, `-`, `*`, `/`, `%`.
- Uses `get_op_func()` to select the appropriate function.

**Prototype:**
```c
int (*get_op_func(char *s))(int, int);
```

**Usage Example:**
```bash
./calc 1024 / 10  # Output: 102
./calc 97 + 1      # Output: 98
```

