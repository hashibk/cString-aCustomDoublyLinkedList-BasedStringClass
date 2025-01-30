# Binary Tree Camera Coverage

This C++ program solves the problem of finding the minimum number of cameras required to monitor all nodes in a binary tree. The solution uses a greedy depth-first search (DFS) approach to minimize the number of cameras while ensuring that every node in the tree is either directly covered by a camera or covered by a camera placed at one of its ancestors.

## Features:
- **Binary Tree Construction**: Build a binary tree from level-order input (`-1` for null nodes).
- **Greedy DFS Algorithm**: The program applies a greedy DFS approach to calculate the minimum number of cameras needed.
- **Efficient Solution**: Optimized for minimizing the number of cameras while ensuring every node is covered.

## How It Works:
1. **Tree Construction**: The binary tree is constructed based on user input where `-1` represents a null node.
2. **Greedy DFS**: The DFS function traverses the tree. It places cameras in nodes where necessary to cover all descendants.
   - If a child node is uncovered, a camera is placed at the current node.
   - If a child node has a camera, the current node is considered covered.
3. **Camera Calculation**: After the DFS traversal, the program returns the minimum number of cameras required to monitor the entire tree.

## Usage:
1. **Input**: 
   - The user is asked to provide the level-order traversal of the tree, using `-1` to represent null nodes.
   
2. **Output**: 
   - The program outputs the minimum number of cameras needed to cover all nodes.

## Example:

### Input:
Enter node values for level-order traversal (-1 for null): 1 2 3 4 5 -1 -1


### Output:
Minimum cameras needed: 2