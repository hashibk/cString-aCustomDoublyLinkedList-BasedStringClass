# Linked List with Stacks of Queues

## Description
This project demonstrates a custom implementation of a linked list that manages nodes, each containing a stack of queues. The program allows you to insert nodes, add queues to nodes, delete nodes and queues, and sort the queues, stacks, and nodes in various ways.

### Operations Supported:
1. **Insert Node** - Adds a new node at the end of the linked list.
2. **Insert Queue to Node** - Adds a new queue to a specified node's stack.
3. **Delete Node** - Deletes a node from the linked list by its index.
4. **Delete Queue from Node** - Removes a specific queue from a node's stack.
5. **Sort Queues** - Sorts all queues in ascending order based on their front element.
6. **Sort Stacks** - Sorts all stacks inside nodes based on the front element of the queues within the stack.
7. **Sort Nodes** - Sorts nodes based on the top element of the stack in each node.
8. **Display** - Displays the linked list along with the stacks and queues in each node.

## Technologies Used:
- C++ (Standard Library)

## How to Use:
1. **Clone the repository**:
   ```bash
   git clone <repository-url>
   cd <repository-folder>
Compile and run:
g++ -o linked_list_with_stacks_of_queues main.cpp
./linked_list_with_stacks_of_queues
Interact with the program: Follow the prompts in the program to insert nodes, add queues, delete nodes or queues, and perform sorting operations.
Example:

Insert first node
Insert second node
Insert a queue into node 0
Insert a queue into node 1
Display the list
Sort queues inside nodes
Sort stacks inside nodes
Sort nodes based on top of stack
Delete node at index 0