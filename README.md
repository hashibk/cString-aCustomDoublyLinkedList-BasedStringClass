# Equilibrium Index Finder

## Description
This C++ program takes an array of integers as input and finds the **equilibrium index**. The equilibrium index is the position where the sum of the elements to the left of it is equal to the sum of the elements to the right.

## Features:
- **Array Input**: The user provides the size of the array and its elements.
- **Equilibrium Index Calculation**: The program checks each index in the array to see if the sum of elements to the left is equal to the sum of elements to the right.
- **Efficient Calculation**: Uses two loops to calculate the sums for the left and right sides for each index.

## How It Works:
1. **Array Input**: The program prompts the user to input the size of the array and the individual elements.
2. **Equilibrium Check**: The program iterates through the array, for each index calculating the sum of elements to the left (`low`) and the sum of elements to the right (`up`).
3. **Display Result**: If the sums match, the program outputs the index that is the equilibrium index.

## Example Input:
Enter size of array= 5 Enter array element= 1 Enter array element= 3 Enter array element= 5 Enter array element= 2 Enter array element= 2


### **Step-by-Step Output:**
Equilibrium index is= 2