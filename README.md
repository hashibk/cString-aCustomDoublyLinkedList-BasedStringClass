# Dynamic Array Element Deletion

## Description
This C++ program dynamically allocates an array based on user input, allows the user to enter elements, and then removes all occurrences of a specified number from the array. The result is stored in a new dynamically allocated array with updated size.

## Features:
- **Dynamic Memory Allocation**: Uses `new` to allocate memory for arrays.
- **User Input Handling**: Takes input for array elements and the element to be deleted.
- **Efficient Element Deletion**: Iterates through the array and removes all instances of the specified number.
- **Memory Management**: Uses a new dynamically allocated array to store the updated result.

## How It Works:
1. **Array Creation**: The user specifies the size of the array and inputs elements.
2. **Deletion Process**: The program removes all occurrences of the given element.
3. **Output the Updated Array**: The new array is printed without the deleted element.

## Usage:

### **Example Input:**
Enter size of array=
5
Enter array element=
1
Enter array element=
2
Enter array element=
3
Enter array element=
2
Enter array element=
4
Enter element that you want to delete=
2


### **Example Output:**
1 3 4