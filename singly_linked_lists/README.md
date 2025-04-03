# Singly Linked Lists - Tasks

This project contains several tasks that involve working with singly linked lists in C.  A singly linked list is a data structure where each element (called a "node") points to the next element in the sequence.

## 0. Print list

**Mandatory**

* **Description:** Write a function that prints all the elements of a `list_t` linked list.
* **Prototype:** `size_t print_list(const list_t *h);`
    * `h`: A pointer to the head (first node) of the list.
* **Return:** The number of nodes in the list.
* **Format:**
    * For each node, print the string (`str`) and its length.
    * If the string is `NULL`, print `[0] (nil)` instead.
* **Example:**
    
    ```
    [5] Hello
    [5] World
    -> 2 elements
    ```
* **Allowed functions:** You are allowed to use `printf`.
* **File:** `0-print_list.c`

## 1. List length

**Mandatory**

* **Description:** Write a function that returns the number of elements in a `list_t` linked list.
* **Prototype:** `size_t list_len(const list_t *h);`
    * `h`:  A pointer to the head of the list.
* **File:** `1-list_len.c`

## 2. Add node

**Mandatory**

* **Description:** Write a function that adds a new node at the beginning of a `list_t` list.
* **Prototype:** `list_t *add_node(list_t **head, const char *str);`
    * `head`: A pointer to a pointer to the head of the list.  (This is important so you can modify the head).
    * `str`: The string to store in the new node.
* **Return:** The address of the new element (the new node), or `NULL` if it fails.
* **Important:** The string `str` needs to be duplicated using `strdup`.  This is because the original string might be freed, and your list should store its own copy.
* **File:** `2-add_node.c`

## 3. Add node at the end

**Mandatory**
* **Description**: Write a function that adds a new node at the end of a `list_t` list.
* **Prototype**: `list_t *add_node_end(list_t **head, const char *str);`
    * `head`: A pointer to a pointer to the head of the list.
    * `str`: The string to store in the new node.
* **Return**: The address of the new element, or `NULL` if it failed.
* **Important**: The string `str` needs to be duplicated using `strdup`.
* **File**: `3-add_node_end.c`

## 4. Free list

**Mandatory**

* **Description:** Write a function that frees a `list_t` list.  This means you need to release all the memory that was allocated for the nodes and their strings.
* **Prototype:** `void free_list(list_t *head);`
    * `head`:  A pointer to the head of the list.
* **File:** `4-free_list.c`

## Repository

* **GitHub repository:** `holbertonschool-low_level_programming`
* **Directory:** `singly_linked_lists`

