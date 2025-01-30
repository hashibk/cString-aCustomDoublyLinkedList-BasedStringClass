# Linked List Node Swap Based on Value

## Overview
This program implements a singly linked list that supports insertion, printing, and a specialized swap operation. The swap function allows the head node to be swapped with a node at a user-specified index **only if** the value at that index is greater than the head’s value.

## Features
- **Insertion**: Adds elements to the end of the linked list.
- **Printing**: Displays the current state of the linked list.
- **Node Swapping**: Swaps the head node with the node at a given index, but only if that node’s value is greater than the current head’s value.
- **Dynamic Input**: The program prompts the user to enter an index, performing swaps accordingly.

## How It Works
1. **Create a Linked List**: Elements are inserted one by one.
2. **Display Initial List**: The linked list is printed.
3. **User Input for Swapping**: The user enters an index (1-based) to attempt swapping.
4. **Perform Swap (If Condition Met)**:  
   - If the value at the given index is greater than the head node's value, they are swapped.  
   - If the value is not greater, no swap occurs.  
   - If the index is out of range, an error message is displayed.
5. **Loop Until Exit**: The user can continue providing indices until they enter `-1` to exit.

## Example
**Input:**
```plaintext
Initial list: 16 45 34 22 73 91
Enter index (-1 to exit): 3
Processing:

The value at index 3 is 34, which is greater than the head value 16.
Swap occurs, and the list becomes:
34 45 16 22 73 91
The program then prompts for another index.
Output:

Enter index (-1 to exit): -1
The program terminates.
Edge Cases

If the index is out of bounds, an error message is displayed.
If the indexed node’s value is not greater than the head’s, no swap happens.
The program continuously asks for new indices until -1 is entered.
