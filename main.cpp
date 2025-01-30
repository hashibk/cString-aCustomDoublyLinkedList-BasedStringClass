#include <iostream>
using namespace std;

class Node {
    int data;
    Node *next;

public:
    Node(int d) {
        data = d;
        next = nullptr;
    }

    friend class LinkedList; // Grant access to LinkedList class
};

class LinkedList {
    Node *head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insert(int d) {
        Node *newNode = new Node(d);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node *temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void print() {
        Node *temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Function to return the length of the linked list
    int getLength() {
        int length = 0;
        Node *temp = head;
        while (temp) {
            length++;
            temp = temp->next;
        }
        return length;
    }

    void swapNodes(int index) {
        int length = getLength(); // Get the length of the linked list

        // Check if the list is empty or if the index is invalid (out of bounds)
        if (head == nullptr || index < 1 || index > length) {
            cout << "Invalid index: " << index << ". Valid range is 1 to " << length << "." << endl;
            return;
        }

        Node *prevX = nullptr, *currX = head;
        Node *prevHead = nullptr; // Previous node for head
        Node *currHead = head;

        // Traverse to the specified index (adjusting for 1-based index)
        for (int i = 1; currX && i < index; i++) {
            prevX = currX;
            currX = currX->next;
        }

        // If index is out of bounds or if the x-th node is not found
        if (currX == nullptr) return;

        // Check if the x-th node's data is greater than head's data
        if (currX->data > head->data) {
            // If the x-th node is the head node, do nothing
            if (currX == head) return;

            // Swap the nodes
            if (prevX) {
                prevX->next = currHead; // Previous x points to head
            }

            // Update the next pointers
            Node* tempNext = currX->next; // Store the next node of x-th node
            currX->next = currHead->next; // Point x-th node to head's next
            currHead->next = tempNext; // Point head to x-th node's next

            // Now set the head to the x-th node
            head = currX; // Update head to point to the x-th node
        }
    }
};

int main() {
    LinkedList ll;
    ll.insert(16);
    ll.insert(45);
    ll.insert(34);
    ll.insert(22);
    ll.insert(73);
    ll.insert(91);
    ll.print(); // Initial list

    int x;
    cout << "Enter index (-1 to exit): ";
    cin >> x;

    while (x != -1) {
        ll.swapNodes(x);
        ll.print(); // Print the list after potential swaps
        cout << "Enter index (-1 to exit): ";
        cin >> x;
    }

    return 0;
}