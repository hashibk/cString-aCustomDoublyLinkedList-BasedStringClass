# Remove Zeros from 2D Array  

## Overview  
This program dynamically allocates memory for a 2D array, fills it with user input, removes zeros from each row, and then displays the modified array. The program maintains the original row structure by shifting non-zero elements to the front.  

## Features  
✅ **Dynamic Memory Allocation:** Uses `new` to allocate memory for a 2D array.  
✅ **Zero Removal:** Shifts non-zero elements to the front, effectively removing zeros from each row.  
✅ **Display:** Displays the modified array where each row is output after zeros have been removed.  
✅ **Preserves Structure:** Rows maintain their original length without zeros.  

Example Output

Enter rows=  
3  
Enter columns=  
3  
Enter value for array=  
1  
Enter value for array=  
0  
Enter value for array=  
3  
Enter value for array=  
0  
Enter value for array=  
4  
Enter value for array=  
0  
Enter value for array=  
5  
Enter value for array=  
6  
Enter value for array=  
7  

Modified Array (without zeros):  
1 3  
4  
5 6 7