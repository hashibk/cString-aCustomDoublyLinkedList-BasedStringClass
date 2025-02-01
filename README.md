# String Array Manipulation

## Description
This C++ program performs two key operations on an array of strings:
1. **Array Rotation**: It rotates the input string array `x` times, moving the first element to the end for each rotation.
2. **Sorting**: After rotation, it sorts the 2D array of strings lexicographically based on the first column of the rotated strings.

## Features:
- **Array Rotation**: Rotates the array by shifting elements one position to the right.
- **Sorting**: Sorts the 2D rotated array based on the lexicographical order of the first column.
- **Dynamic Memory Allocation**: Uses dynamic memory for storing both the original and rotated arrays.
- **String Manipulation**: Handles array of strings and performs sorting on string elements.

## How It Works:
1. **Array Input**: The user provides an array of strings.
2. **Array Rotation**: The program rotates the array `x` times, moving elements from the front to the back.
3. **Sorting**: The program sorts the rotated array based on the lexicographical order of each row's first element.
4. **Display**: The program displays both the rotated and sorted 2D array.

## Example Input:
Enter size of array= 3 Enter array element= apple Enter array element= banana Enter array element= cherry


### **Step-by-Step Output:**
**After Rotation:**
apple banana cherry banana cherry apple cherry apple banana


**After Sorting:**
apple banana cherry banana cherry apple cherry apple banana