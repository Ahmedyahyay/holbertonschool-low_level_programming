# Binary Conversion Tasks

This project contains several tasks that involve converting binary numbers to unsigned integers and performing other related operations.

## 0. 0

**Mandatory**

* **Description:** Write a function that converts a binary number to an unsigned int.
* **Prototype:** `unsigned int binary_to_uint(const char *b);`
    * `b`: A pointer to a string of 0 and 1 chars.
* **Return:**
    * The converted number.
    * 0 if:
        * There is one or more chars in the string `b` that is not 0 or 1.
        * `b` is NULL.
* **File:** `0-binary_to_uint.c`

## 1. 1

**Mandatory**

* **Description:** Write a function that prints the binary representation of a number.
* **Prototype:** `void print_binary(unsigned long int n);`
* **Format:** See the example in `1-main.c`
* **Restrictions:**
    * You are not allowed to use arrays.
    * You are not allowed to use `malloc`.
    * You are not allowed to use the `%` or `/` operators.
* **File:** `1-print_binary.c`

## 2. 10

**Mandatory**

* **Description:** Write a function that returns the value of a bit at a given index.
* **Prototype:** `int get_bit(unsigned long int n, unsigned int index);`
    * `index`: The index, starting from 0, of the bit you want to get.
* **Returns:**
    * The value of the bit at index `index`.
    * -1 if an error occurred.
* **File:** `2-get_bit.c`

## 3. 11

**Mandatory**

* **Description:** Write a function that sets the value of a bit to 1 at a given index.
* **Prototype:** `int set_bit(unsigned long int *n, unsigned int index);`
    * `index`: The index, starting from 0, of the bit you want to set.
* **Returns:**
    * 1 if it worked.
    * -1 if an error occurred.
* **File:** `3-set_bit.c`

## 4. 100

**Mandatory**

* **Description:** Write a function that sets the value of a bit to 0 at a given index.
* **Prototype:** `int clear_bit(unsigned long int *n, unsigned int index);`
    * `index`: The index, starting from 0, of the bit you want to set.
* **Returns:**
    * 1 if it worked.
    * -1 if an error occurred.
* **File:** `4-clear_bit.c`

## 5. 101

**Mandatory**

* **Description:** Write a function that returns the number of bits you would need to flip to get from one number to another.
* **Prototype:** `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
* **Restrictions:** You are not allowed to use the `%` or `/` operators.
* **File:** `5-flip_bits.c`

