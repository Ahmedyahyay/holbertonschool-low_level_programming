# Doubly Linked Lists - Tasks

This project contains several tasks that involve working with doubly linked lists in C. A doubly linked list is a data structure where each node has pointers to both the next and previous nodes in the sequence.

## 0. Print list

**Mandatory**

* **Description:** Write a function that prints all the elements of a `dlistint_t` list.
* **Prototype:** `size_t print_dlistint(const dlistint_t *h);`
    * `h`: A pointer to the head (first node) of the list.
* **Return:** The number of nodes in the list.
* **Format:** (See the example in `0-main.c`)
    * Print the value of `n` for each node, followed by a newline.
* **File:** `0-print_dlistint.c`

## 1. List length

**Mandatory**

* **Description:** Write a function that returns the number of elements in a `dlistint_t` list.
* **Prototype:** `size_t dlistint_len(const dlistint_t *h);`
    * `h`: A pointer to the head of the list.
* **File:** `1-dlistint_len.c`

## 2. Add node

**Mandatory**

* **Description:** Write a function that adds a new node at the beginning of a `dlistint_t` list.
* **Prototype:** `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
    * `head`: A pointer to a pointer to the head of the list.
    * `n`: The integer to store in the new node
* **Return:** The address of the new element (the new node), or `NULL` if it failed.
* **File:** `2-add_dnodeint.c`

## 3. Add node at the end

**Mandatory**

* **Description:** Write a function that adds a new node at the end of a `dlistint_t` list.
* **Prototype:** `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
     * `head`: A pointer to a pointer to the head of the list.
     * `n`: The integer to store in the new node
* **Return:** The address of the new element, or `NULL` if it failed.
* **File:** `3-add_dnodeint_end.c`

## 4. Free list

**Mandatory**

* **Description:** Write a function that frees a `dlistint_t` list.  This means you need to release all the memory that was allocated for the nodes.
* **Prototype:** `void free_dlistint(dlistint_t *head);`
    * `head`: A pointer to the head of the list.
* **File:** `4-free_dlistint.c`

## 5. Get node at index

**Mandatory**
* **Description:** Write a function that returns the nth node of a `dlistint_t` linked list.
* **Prototype:** `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
    * `head`: A pointer to the head of the list.
    * `index`: The index of the node, starting from 0.
* **Return:** the nth node, or `NULL` if the node does not exist
* **File**: `5-get_dnodeint.c`

## 6. Sum list
**Mandatory**
* **Description:** Write a function that returns the sum of all the data (n) of a `dlistint_t` linked list.
* **Prototype:** `int sum_dlistint(dlistint_t *head);`
* **Return**: the sum of all the data
* if the list is empty, return 0
* **File**: `6-sum_dlistint.c`

## 7. Insert at index
**Mandatory**
* **Description**: Write a function that inserts a new node at a given position.
* **Prototype**: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
    * `h`: pointer to the head
    * `idx`: index of the list where the new node should be added. Index starts at 0
    * `n`: The value to store in the new node
* **Return**: the address of the new node, or NULL if it failed
* if it is not possible to add the new node at index idx, do not add the new node and return NULL
* **File**: `7-insert_dnodeint.c`
* **Depends**: 2-add_dnodeint.c, 3-add_dnodeint_end.c

## 8. Delete at index
**Mandatory**
* **Description**:  Write a function that deletes the node at index index of a dlistint_t linked list.
* **Prototype**: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
    * `head`: pointer to the head
    * `index`: index of the node that should be deleted. Index starts at 0
* **Return**: 1 if it succeeded, -1 if it failed
* **File**: `8-delete_dnodeint.c`

## Repository

* **GitHub repository:** `holbertonschool-low_level_programming`
* **Directory:** `doubly_linked_lists`

