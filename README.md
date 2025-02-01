# Array Transformation - Product of Neighbors

## Description
This program takes an integer array as input and generates a new array where each element is replaced by the product of its adjacent elements along with itself. The first and last elements are treated separately:
- The first element is replaced by the product of itself, the second element, and the last element.
- The last element is replaced by the product of itself, the first element, and the second last element.
- Other elements are replaced by the product of the previous, next, and current element.

## Features
- Accepts user input for array size and elements.
- Computes a transformed array based on the product of neighbors.
- Displays the original and transformed arrays.

## Usage

1. Enter the size of the array.
2. Input the array elements.
3. The program processes the array and generates the transformed array.
4. The transformed array is displayed.

## Example

**Input:**
Enter array size= 5 Enter array element= 1 Enter array element= 2 Enter array element= 3 Enter array element= 4 Enter array element= 5


**Output:**
1 2 3 4 5 Your new array is= 10 3 8 15 20