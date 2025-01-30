# K-th Ancestor in Binary Tree

This C++ program helps to find the k-th ancestor of a node in a binary tree. The tree is constructed using a level-order traversal, and each node is mapped to its parent. You can input multiple queries to determine the k-th ancestor of any node.

## Features:
- Build a binary tree from level-order input.
- Map each node to its parent.
- Find the k-th ancestor of a node.
- Interactive user input for testing different cases.

## How It Works:
1. **Tree Construction**: The tree is built using level-order input, where `-1` denotes a `null` node.
2. **Mapping Parents**: The program uses a queue to map each node to its parent for easy traversal.
3. **K-th Ancestor Query**: Given a node and a value `k`, the program traverses upward to find the k-th ancestor of the node.

## Usage:
1. **Input**: 
   - The program first asks for the level-order traversal of the binary tree (`-1` for null nodes).
   - Then, it asks for a node value and the integer `k` to find the k-th ancestor.
   
2. **Output**: 
   - The program will output the k-th ancestor if it exists, or `-1` if the ancestor does not exist.

## Example:

### Input:
Enter node values for level-order traversal (-1 for null): 1 2 3 4 5 -1 6 Enter node and k: 5 2


### Output:
The 2-th ancestor of node 5 is: 1