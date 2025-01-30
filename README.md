# Tree Coin Collection

## Problem Description

Given a tree with `n` nodes, where each node has a coin, the goal is to find the minimum number of edges to traverse in order to collect all the coins. The tree is represented by an undirected graph, and a traversal along an edge costs 2 (round trip). The task is to determine the minimal number of edges that must be traversed to collect all coins.

## Solution Approach

This solution uses a Depth-First Search (DFS) algorithm to traverse the tree. For each node, the algorithm checks its neighbors. If a neighbor contains a coin, the algorithm adds 2 edges (round trip) to the total traversal cost. The traversal stops when all coins are collected.

## How It Works

1. **Tree Construction**: The tree is constructed using an adjacency list. Each edge in the tree is represented by a pair of nodes.
2. **DFS Traversal**: The DFS function checks each node and its neighbors. If a node has a coin, it adds to the edge count.
3. **Edge Count**: The result is the minimum number of edges required to collect all coins in the tree.

## Example

For a tree with 6 nodes and the following coin distribution:

- Node 0: 1 coin
- Node 1: 0 coin
- Node 2: 0 coin
- Node 3: 0 coin
- Node 4: 0 coin
- Node 5: 1 coin

And the tree structure:

0
/
1 2 /
3 4 \ / 5---/


The minimum edges required to collect all coins is `6`.

## Running the Code

1. Clone the repository.
2. Compile the C++ code using a C++ compiler.
3. Run the compiled program.

Example:
```bash
g++ main.cpp -o tree_coin_collection
./tree_coin_collection
Input Format:
coins array: An array where each element represents whether a node has a coin (1 for coin, 0 for no coin).
edgesList array: A list of edges where each edge is represented by a pair of integers indicating the connected nodes.
Output:
The minimum number of edges required to collect all coins.