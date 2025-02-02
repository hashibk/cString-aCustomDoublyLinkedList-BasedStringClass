# Dynamic Array Expansion and Shrinking  

## Overview  
This program demonstrates **dynamic memory management in C++** by implementing a resizable array. It performs the following steps:  

1. **Dynamic Array Allocation:** Starts with a fixed-size array (`size = 5`).  
2. **Automatic Expansion:** If more elements are entered, the array size increases in chunks of **5**.  
3. **Input Termination:** Input stops when `-1` is entered.  
4. **Array Shrinking:** The array is resized to fit exactly the entered values.  
5. **Reverse Output:** Prints the array in **reverse order**.  

## Features  
✅ **Dynamic Memory Allocation:** Uses `new` and `delete[]` for memory management.  
✅ **Automatic Expansion:** Grows the array size as needed.  
✅ **Memory Optimization:** Shrinks the array after input collection.  
✅ **Reverse Output:** Prints elements in reverse order.  

Example Output

Enter array element=  
5  
Enter array element=  
8  
Enter array element=  
3  
Enter array element=  
10  
Enter array element=  
-1  

Output in reverse order:  
10 3 8 5  