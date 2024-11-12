# C Project: Dynamic Memory Allocation

This project includes several tasks focused on dynamic memory allocation using functions like `malloc`, `calloc`, and memory management techniques. Below is a description of each task and its corresponding file.

## Tasks

### Task 0: Malloc Checked
- **Filename**: `0-malloc_checked.c`
- **Description**: This task requires implementing a function that allocates memory using `malloc`. If the memory allocation fails (i.e., `malloc` returns `NULL`), the function should terminate the program with a status code of 98.

### Task 1: Concatenate Two Strings
- **Filename**: `1-string_nconcat.c`
- **Description**: This function concatenates two strings. It takes two strings as input and concatenates them up to `n` characters from the second string. It then returns a pointer to the newly allocated memory that holds the concatenated string.

### Task 2: Allocate Memory for an Array
- **Filename**: `2-calloc.c`
- **Description**: Implement a function that allocates memory for an array of a given number of elements using `malloc`, and initializes the memory to zero, similar to the `calloc` function. The function should return a pointer to the newly allocated memory.

### Task 3: Create an Array of Integers
- **Filename**: `3-array_range.c`
- **Description**: This function creates an array of integers. The function should take two arguments, `min` and `max`, and return an array containing all integers from `min` to `max` (inclusive). The function should allocate memory dynamically and return a pointer to the newly created array.