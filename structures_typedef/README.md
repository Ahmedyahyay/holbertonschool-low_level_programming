# Project: Structures and Typedef in C

## Description
This project explores the definition and manipulation of structures in C, focusing on representing a dog with specific attributes. The tasks involve creating a `struct dog`, initializing it, printing its details, creating new instances dynamically, and managing memory appropriately.

## Tasks

### 0. Poppy
**Mandatory**

Define a new type `struct dog` with the following elements:
- `name`: type = `char *`
- `age`: type = `float`
- `owner`: type = `char *`

**File:** `dog.h`

**Example Usage:**
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
1. A dog is the only thing on earth that loves you more than you love yourself
Mandatory

Write a function that initializes a variable of type struct dog.

Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

File: 1-init_dog.c

Example Usage:

c
Copy
Edit
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
Mandatory

Write a function that prints a struct dog.

Prototype: void print_dog(struct dog *d);

Format:

If an element of d is NULL, print (nil) instead of this element.
If d is NULL, print nothing.
File: 2-print_dog.c

Example Usage:

c
Copy
Edit
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
Mandatory

Define a new type dog_t as a new name for the type struct dog.

File: dog.h

Example Usage:

c
Copy
Edit
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
4. A door is what a dog is perpetually on the wrong side of
Mandatory

Write a function that creates a new dog.

Prototype: dog_t *new_dog(char *name, float age, char *owner);

You have to store a copy of name and owner.
Return NULL if the function fails.
File: 4-new_dog.c

Example Usage:

c
Copy
Edit
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
Mandatory

Write a function that frees dogs.

Prototype: void free_dog(dog_t *d);

File: 5-free_dog.c

Example Usage:

c
Copy
Edit
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}
