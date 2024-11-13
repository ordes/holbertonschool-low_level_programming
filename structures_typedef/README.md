# Dog Struct Project

This project defines and manipulates a `dog` structure with several functions that handle initialization, printing, creation, and memory management.

## Files and Tasks

### 1. **dog.h**  
- **Task:** Define a new type `struct dog`.
- **Description:** This header file contains the definition of a `struct dog` that stores information about a dog, including its name, age, and owner.

### 2. **1-init_dog.c**  
- **Task:** Write a function that initializes a variable of type `struct dog`.
- **Description:** This file defines the function `init_dog()` that initializes a `dog` struct with specific values for its name, age, and owner.

### 3. **2-print_dog.c**  
- **Task:** Write a function that prints a `struct dog`.
- **Description:** This file contains the function `print_dog()` which takes a `dog` struct as an argument and prints its name, age, and owner to the console. It handles cases where the `dog` data may be missing or `NULL`.

### 4. **dog.h**  
- **Task:** Define a new type `dog_t` as a new name for `struct dog`.
- **Description:** This header file introduces `dog_t`, a typedef that provides an alias for the `struct dog`, making it easier to refer to the structure type throughout the program.

### 5. **4-new_dog.c**  
- **Task:** Write a function that creates a new dog.
- **Description:** This file defines the function `new_dog()` which dynamically allocates memory for a new `dog`, initializes it with given values (name, age, owner), and returns a pointer to the newly created `dog`.

### 6. **5-free_dog.c**  
- **Task:** Write a function that frees dogs.
- **Description:** This file contains the function `free_dog()` which frees the memory allocated for a `dog` struct and its associated members (e.g., name and owner), if applicable.