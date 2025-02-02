# Finding Common Elements Between Two Arrays  

## Overview  
This program identifies **common elements** between two arrays while dynamically managing memory. The process follows these steps:  

1. **Input Handling:** The user enters two arrays of integers.  
2. **Finding Common Elements:** Identifies and stores **unique** common values.  
3. **Memory Optimization:** Shrinks the storage array to eliminate unused space.  
4. **Output Display:** Prints the final array containing common elements.  

## Features  
✅ **Dynamic Memory Allocation:** Uses `new` and `delete[]` to manage memory.  
✅ **Efficient Duplicate Removal:** Ensures common elements are stored only once.  
✅ **Optimized Memory Usage:** Shrinks the final array to avoid wasted memory.  

Example Output

Enter size of first array=  
5  
Enter size of second array=  
6  
Enter array element=  
1  
Enter array element=  
2  
Enter array element=  
3  
Enter array element=  
4  
Enter array element=  
5  

Enter array element=  
3  
Enter array element=  
4  
Enter array element=  
5  
Enter array element=  
6  
Enter array element=  
7  
Enter array element=  
8  

Common elements=  
3 4 5  