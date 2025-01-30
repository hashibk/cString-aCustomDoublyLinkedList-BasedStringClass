# Matrix Arrangement of People (Backtracking)

## Description
This C++ program arranges people (represented by gender and orientation) into a matrix with user-defined dimensions. The goal is to arrange them such that no two adjacent people (up, down, left, or right) have the same gender and orientation. The program uses backtracking to attempt placing people into the matrix.

### Operations Supported:
- **Input:** Reads people data from a file (`people.txt`) containing a comma-separated list of genders.
- **Arrange People:** Attempts to arrange people in a matrix ensuring no adjacent people have the same gender and orientation.
- **Output:** Displays the arranged matrix if a valid configuration is found.

## Technologies Used:
- **C++** - For implementing the backtracking algorithm and data structures.

## How to Use:
1. **Prepare Input File (`people.txt`):**
   - The file should contain a comma-separated list of gender characters (e.g., `M,F,M,F,F,M,M,F,M`).
   - Orientations are assigned cyclically from the list `["left", "right", "front", "back"]`.
   
2. **Compile the Program:**
   ```bash
   g++ -o matrix_arrangement main.cpp
   ./matrix_arrangement
Run the Program:
When prompted, enter the matrix dimensions (rows and columns).
The program will attempt to arrange the people and display the result.
Example:

Enter matrix dimensions (rows cols): 3 3
Arranged Matrix:
Mlf Mfr Mbf 
Mrf Fbl Fbr 
Ffl Mlf Ffr