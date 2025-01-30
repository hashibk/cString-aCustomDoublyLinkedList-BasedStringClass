# Linked Maze Navigation Using Clue-Based Movement

## Overview
This program implements a **linked list maze** where each cell (node) is linked to its adjacent neighbors (left, right, up, down). The traversal path is determined using **clues derived from node values**.

## Features
- **Reads a maze from a file (`maze.txt`) and constructs a grid of linked nodes.**
- **Each node has four possible links**: left, right, up, and down.
- **Uses two clues to navigate**:
  1. **Row Clue**: Sum of digits of the node's value modulo the total rows.
  2. **Column Clue**: Number of digits in the node's value.
- **Stops traversal if**:
  - It reaches an already visited node (**Elite Node**).
  - It encounters an invalid move.

## How It Works
1. **File Reading & Maze Construction**
   - Reads a CSV file (`maze.txt`) where each value represents a node in the maze.
   - Links nodes to form a doubly linked grid.
  
2. **Clue-Based Navigation**
   - Starts traversal from the top-left node (first row, first column).
   - Uses the **Row Clue** and **Column Clue** to determine the next position.
   - Moves in the appropriate direction:
     - **Up**
     - **Down**
     - **Left**
     - **Right**

3. **Stopping Conditions**
   - If a node is visited **again**, it is labeled as the **"Elite Node"**, and traversal stops.
   - If the calculated position **exceeds maze boundaries**, traversal stops.

## Example Maze (`maze.txt` Format)
```plaintext
12,34,56
78,90,23
45,67,89
Example Execution

Input (maze.txt contents):

16,45,34
22,73,91
Processing & Output:

Visiting node with data: 16
Clue gives row: 1 and column: 2
Moving right.

Visiting node with data: 45
Clue gives row: 2 and column: 2
Moving down.

Visiting node with data: 91
Clue gives row: 2 and column: 2
Node revisited, ending traversal.
Elite Node = 91
Edge Cases Handled

Invalid File Handling: If maze.txt is missing or empty, the program exits safely.
Out-of-Bounds Moves: Prevents illegal moves outside the maze dimensions.
Loop Detection: Stops traversal upon revisiting a node.
Compilation & Execution

To compile and run the program:

g++ linked_maze.cpp -o linked_maze
./linked_maze
