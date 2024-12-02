# Project README

This C project contains a set of tasks that manipulate a singly linked list of type `list_t`. Below is a concise description of each task along with the corresponding file name.

### Task Descriptions

1. **0-print_list.c**
   - **Function**: `void print_list(const list_t *h);`
   - **Description**: This function prints all the elements of a linked list of type `list_t`. It iterates through the list and prints each element's string value, followed by the length of the string.

2. **1-list_len.c**
   - **Function**: `size_t list_len(const list_t *h);`
   - **Description**: This function returns the number of elements in a linked list of type `list_t`. It traverses the list and counts the nodes.

3. **2-add_node.c**
   - **Function**: `list_t *add_node(list_t **head, const char *str);`
   - **Description**: This function adds a new node at the beginning of a `list_t` list. It creates a new node, initializes it with the given string, and then links it to the start of the list.

4. **3-add_node_end.c**
   - **Function**: `list_t *add_node_end(list_t **head, const char *str);`
   - **Description**: This function adds a new node at the end of a `list_t` list. It creates a new node, initializes it with the given string, and appends it to the list's tail.

5. **4-free_list.c**
   - **Function**: `void free_list(list_t *head);`
   - **Description**: This function frees a linked list of type `list_t`. It iterates through the list and deallocates memory for each node, including the memory for the strings stored in the nodes.