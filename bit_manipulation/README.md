# README - C Project: Bit Manipulation Functions

This project consists of several C functions that perform bit manipulation tasks. Each task focuses on a specific operation on binary representations of numbers, and the corresponding function can be found in the respective file. Below is a concise description of each task along with its file name.

## Tasks and Files

### 1. **Filename: 0-binary_to_uint.c**
   - **Task**: Converts a binary number (represented as a string) to an unsigned integer.
   - **Functionality**: This function takes a string of binary digits (`0` and `1`) and converts it to its equivalent unsigned integer value. It returns the converted integer, or 0 if the string is invalid.

### 2. **Filename: 1-print_binary.c**
   - **Task**: Prints the binary representation of a number.
   - **Functionality**: This function accepts an unsigned integer and prints its binary representation (in base 2) to the standard output. The output will show the binary digits corresponding to the number, starting from the most significant bit.

### 3. **Filename: 2-get_bit.c**
   - **Task**: Returns the value of a bit at a specific index.
   - **Functionality**: This function retrieves the bit value (either 0 or 1) at a given index from a number. The index is provided as an argument, and the function returns the value of the bit at that index. If the index is out of range, it returns -1.

### 4. **Filename: 3-set_bit.c**
   - **Task**: Sets the value of a bit to 1 at a specific index.
   - **Functionality**: This function sets the bit at a given index to 1 in an unsigned integer. It modifies the number and returns 1 on success. If the index is out of range, it returns -1.

### 5. **Filename: 4-clear_bit.c**
   - **Task**: Sets the value of a bit to 0 at a specific index.
   - **Functionality**: This function sets the bit at a given index to 0 in an unsigned integer. It modifies the number and returns 1 on success. If the index is out of range, it returns -1.

### 6. **Filename: 5-flip_bits.c**
   - **Task**: Returns the number of bits needed to flip to convert one number to another.
   - **Functionality**: This function calculates how many bits must be flipped to change one number into another. It compares the binary representation of two numbers and counts the bits that differ, returning that count.