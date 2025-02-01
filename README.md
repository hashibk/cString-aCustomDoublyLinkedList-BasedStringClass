# Remove Duplicate Strings in 2D Array

## Description
This C++ program performs the following:
1. **Array Input**: The user inputs a 2D array of strings.
2. **Duplicate Removal**: The program removes duplicate strings within each row, shifting the remaining elements to the left.
3. **Display Result**: It prints the modified array with duplicates removed.

## Features:
- **Dynamic Memory Allocation**: Uses dynamic memory for creating and handling the 2D array.
- **Duplicate Removal**: The program checks for duplicate strings within each row and removes them by shifting elements.
- **Efficient Data Shifting**: Elements are shifted leftward to remove duplicates without leaving gaps.

## How It Works:
1. **Array Input**: The user provides the number of rows and columns for the 2D array, followed by the string elements for the array.
2. **Removing Duplicates**: The program traverses each row and removes duplicates by comparing each element with the rest in the row.
3. **Displaying Result**: After duplicates are removed, the program prints the modified array, with the column count updated to reflect the removal.

## Example Input:
Enter rows of array= 2 Enter columns of array= 4 Enter array element= apple Enter array element= banana Enter array element= apple Enter array element= cherry


### **Step-by-Step Output:**
**After Removing Duplicates:**
apple banana cherry banana cherry