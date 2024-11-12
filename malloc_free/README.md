# C Project: Dynamic Memory Allocation and String Manipulation

This project consists of several tasks designed to practice memory allocation, string manipulation, and handling 2D arrays in C. Each task is implemented in a separate file. Below is a description of each task and its corresponding file.

## Tasks

### Task 0: Create an Array of Chars
- **Filename**: `0-create_array.c`
- **Description**: This task involves writing a function that creates an array of characters and initializes it with a specific character. The function should return a pointer to the newly created array.

### Task 1: Duplicate a String
- **Filename**: `1-strdup.c`
- **Description**: The task is to implement a function that takes a string as a parameter and returns a pointer to a newly allocated memory space containing a copy of that string. The function should handle `NULL` inputs gracefully and ensure proper memory allocation.

### Task 2: Concatenate Two Strings
- **Filename**: `2-str_concat.c`
- **Description**: This function concatenates two strings, `s1` and `s2`. It should return a pointer to a new string that is the result of the concatenation of `s1` and `s2`. The function must allocate memory dynamically for the concatenated string and handle edge cases like `NULL` strings.

### Task 3: Create a 2D Integer Array
- **Filename**: `3-alloc_grid.c`
- **Description**: This task requires writing a function that returns a pointer to a 2-dimensional array of integers. The dimensions of the array are provided as parameters. The function should initialize all elements of the array to `0`. Proper memory allocation and error checking are essential.

### Task 4: Free a 2D Grid
- **Filename**: `4-free_grid.c`
- **Description**: This function frees the memory allocated for a 2-dimensional grid of integers that was created by the `alloc_grid` function. It must ensure that all allocated memory is properly deallocated to prevent memory leaks.