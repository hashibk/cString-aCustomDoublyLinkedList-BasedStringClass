# Pattern Finder in 2D Grid

## Description
This C++ program takes a 2D grid of characters and a word as input, and searches for the word in four directions:
1. **Horizontally to the right**
2. **Horizontally to the left**
3. **Vertically down**
4. **Diagonally down-left**

The program outputs the position of the first character of the word where it is found in the grid for each direction.

## Features:
- **Grid Input**: The program allows the user to input the dimensions of a grid and populate it with characters.
- **Word Search**: The program accepts a word and searches for it in four different directions in the grid.
- **Pattern Display**: It prints the position where the word pattern is found in the grid in the specified directions.

## How It Works:
1. **Grid Input**: The program first prompts the user to input the number of rows and columns for the grid. Then, the user is asked to enter each character in the grid.
2. **Word Input**: The user provides the word to search for in the grid.
3. **Searching the Word**: The program searches for the word in four possible directions:
   - Horizontally right
   - Horizontally left
   - Vertically down
   - Diagonally down-left
4. **Displaying Results**: For each direction, it outputs the row and column where the word starts.

## Example Input:
Enter number of rows= 5 Enter number of columns= 5 Enter array element= A Enter array element= B Enter array element= C Enter array element= D Enter array element= E Enter array element= F Enter array element= G Enter array element= H Enter array element= I Enter array element= J Enter array element= K Enter array element= L Enter array element= M Enter array element= N Enter array element= O Enter size of word= 3 Enter character= F Enter character= G Enter character= H


### **Step-by-Step Output:**
Pattern found horizontally right at row= 1 and column= 0 Pattern found vertically up starting from row= 1 and column= 0 Pattern found diagonally left down starting from row 0 and column 2