#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

// Node structure for Linked List
struct Node {
    stack<queue<int> > stackOfQueues;  // Stack of Queues
    Node* next;

    Node() : next(nullptr) {}  // Default constructor
};

// Comparison function for sorting queues
bool compareQueues(const queue<int>& q1, const queue<int>& q2) {
    return q1.front() < q2.front();  // Compare by the first element of the queue
}

// Comparison function for sorting nodes
bool compareNodes(Node* n1, Node* n2) {
    if (!n1->stackOfQueues.empty() && !n2->stackOfQueues.empty()) {
        return n1->stackOfQueues.top().front() < n2->stackOfQueues.top().front();
    }
    return false;
}

// Linked List class to handle nodes
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Insert a new Node at the end of the Linked List
    void insertNode() {
        Node* newNode = new Node();
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Insert a queue into a specific node's stack
    void insertQueueToNode(int nodeIndex) {
        Node* temp = head;
        int count = 0;

        // Traverse to the specific node
        while (temp && count < nodeIndex) {
            temp = temp->next;
            count++;
        }

        if (temp) {
            queue<int> newQueue;
            int val;
            cout << "Enter values for the queue (enter -1 to end): ";
            while (true) {
                cin >> val;
                if (val == -1) break;
                newQueue.push(val);
            }

            temp->stackOfQueues.push(newQueue);
            cout << "Queue added to node " << nodeIndex << endl;
        } else {
            cout << "Node " << nodeIndex << " not found.\n";
        }
    }

    // Delete a node from the linked list
    void deleteNode(int nodeIndex) {
        if (!head) {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = head;
        if (nodeIndex == 0) {
            head = temp->next;
            delete temp;
            cout << "Node deleted at index " << nodeIndex << endl;
            return;
        }

        int count = 0;
        Node* prev = nullptr;
        while (temp && count < nodeIndex) {
            prev = temp;
            temp = temp->next;
            count++;
        }

        if (temp) {
            prev->next = temp->next;
            delete temp;
            cout << "Node deleted at index " << nodeIndex << endl;
        } else {
            cout << "Node " << nodeIndex << " not found.\n";
        }
    }

    // Delete a queue from a specific node's stack
    void deleteQueueFromNode(int nodeIndex, int queueIndex) {
        Node* temp = head;
        int count = 0;

        // Traverse to the specific node
        while (temp && count < nodeIndex) {
            temp = temp->next;
            count++;
        }

        if (temp) {
            if (queueIndex < temp->stackOfQueues.size()) {
                stack<queue<int> > tempStack;

                // Pop all elements until we reach the specific queue
                int currentQueueIndex = 0;
                while (!temp->stackOfQueues.empty()) {
                    queue<int> currentQueue = temp->stackOfQueues.top();
                    temp->stackOfQueues.pop();

                    if (currentQueueIndex != queueIndex) {
                        tempStack.push(currentQueue);
                    }
                    currentQueueIndex++;
                }

                // Rebuild stack without the deleted queue
                while (!tempStack.empty()) {
                    temp->stackOfQueues.push(tempStack.top());
                    tempStack.pop();
                }

                cout << "Queue deleted from node " << nodeIndex << endl;
            } else {
                cout << "Queue index not found in node " << nodeIndex << endl;
            }
        } else {
            cout << "Node " << nodeIndex << " not found.\n";
        }
    }

    // Sort all queues in ascending order (values inside queues)
    void sortQueues() {
        Node* temp = head;
        while (temp) {
            stack<queue<int> > sortedStack;
            vector<queue<int> > queues;

            // Move all queues into a vector for sorting
            while (!temp->stackOfQueues.empty()) {
                queues.push_back(temp->stackOfQueues.top());
                temp->stackOfQueues.pop();
            }

            // Sort queues based on the first element
            sort(queues.begin(), queues.end(), compareQueues);

            // Push sorted queues back into the stack
            for (int i = 0; i < queues.size(); ++i) {
                temp->stackOfQueues.push(queues[i]);
            }

            temp = temp->next;
        }

        cout << "Queues sorted in ascending order.\n";
    }

    // Sort all stacks in ascending order (based on the front of the queues in the stack)
    void sortStacks() {
        Node* temp = head;
        while (temp) {
            stack<queue<int> > sortedStack;
            vector<queue<int> > queues;

            // Move all queues into a vector
            while (!temp->stackOfQueues.empty()) {
                queues.push_back(temp->stackOfQueues.top());
                temp->stackOfQueues.pop();
            }

            // Sort queues inside stack based on the front element
            sort(queues.begin(), queues.end(), compareQueues);

            // Push sorted queues back into the stack
            for (int i = 0; i < queues.size(); ++i) {
                temp->stackOfQueues.push(queues[i]);
            }

            temp = temp->next;
        }

        cout << "Stacks sorted in ascending order.\n";
    }

    // Sort nodes based on the top element of the stack
    void sortNodes() {
        vector<Node*> nodes;
        Node* temp = head;

        // Move all nodes into a vector
        while (temp) {
            nodes.push_back(temp);
            temp = temp->next;
        }

        // Sort nodes based on the top element of the stack
        sort(nodes.begin(), nodes.end(), compareNodes);

        // Rebuild the linked list from the sorted nodes
        head = nodes[0];
        temp = head;
        for (size_t i = 1; i < nodes.size(); ++i) {
            temp->next = nodes[i];
            temp = temp->next;
        }
        temp->next = nullptr;

        cout << "Nodes sorted based on the top element of the stack.\n";
    }

    // Display the linked list
    void display() {
        Node* temp = head;
        int nodeIndex = 0;
        while (temp) {
            cout << "Node " << nodeIndex++ << ":\n";
            stack<queue<int> > tempStack = temp->stackOfQueues;
            int queueIndex = 0;
            while (!tempStack.empty()) {
                cout << "  Queue " << queueIndex++ << ": ";
                queue<int> q = tempStack.top();
                tempStack.pop();
                while (!q.empty()) {
                    cout << q.front() << " ";
                    q.pop();
                }
                cout << endl;
            }
            temp = temp->next;
        }
    }
};

int main() {
    LinkedList list;

    // Example Operations
    list.insertNode();  // Insert first node
    list.insertNode();  // Insert second node
    list.insertQueueToNode(0);  // Insert a queue into node 0
    list.insertQueueToNode(1);  // Insert a queue into node 1
    list.display();

    list.sortQueues();  // Sort queues inside nodes
    list.display();

    list.sortStacks();  // Sort stacks inside nodes
    list.display();

    list.sortNodes();  // Sort nodes based on top of the stack
    list.display();

    list.deleteNode(0);  // Delete node at index 0
    list.display();

    return 0;
}
