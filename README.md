# Array Compression: Removing Consecutive Duplicates  

## Overview  
This program removes **consecutive duplicate elements** from an array while dynamically managing memory. The process follows these steps:  

1. **Input Handling:** The user enters an array of integers.  
2. **Compression:** Consecutive duplicate elements are removed.  
3. **Memory Optimization:** The array is resized to store only the **unique values**.  
4. **Output Display:** The compressed array is printed.  

## Features  
✅ **Dynamic Memory Allocation:** Uses `new` and `delete[]` to manage memory.  
✅ **Efficient Consecutive Duplicate Removal:** Stores only unique adjacent elements.  
✅ **Optimized Memory Usage:** Shrinks the array after removing duplicates.  

Example Output

Enter number of elements: 8  
Enter array elements:  
1 1 2 2 2 3 4 4  

Array with consecutive duplicates removed: 1 2 3 4  