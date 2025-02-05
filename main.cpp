#include <iostream>
#include <cstring>
using namespace std;

struct Node {
    char data;
    Node* next;
    Node* prev;
    Node(char d) {
        data = d;
        next = nullptr;
        prev = nullptr;
    }
};

class cString {
private:
    Node* head;
    Node* tail;

    void clear() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        tail = nullptr;
    }

public:
    // 1
    cString () {
        head = nullptr;
        tail = nullptr;
    }

    // 2
    cString(cString &other){
        head = nullptr;
        tail = nullptr;
        Node* current = other.head;
        while (current) {
            Node* newNode = new Node(current->data);
            if (!head) {
                head = tail = newNode;
            }
            else {
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }
            current = current->next;
        }
    }

    // 3
    void assign(char* source) {
        clear();
        while (*source) {
            Node* newNode = new Node(*source++);
            if (!head) head = tail = newNode;
            else {
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }
        }
    }

    // 4
    bool isPalindrome() {
        Node* left = head;
        Node* right = tail;
        while (left && right && left != right && left->prev != right) {
            if (left->data != right->data)
                return false;
            left = left->next;
            right = right->prev;
        }
        return true;
    }

    // 5
    void copyConstructor(char* end) {
        Node* current = head;
        while (current) {
            *end = current->data;
            end++;
            current = current->next;
        }
        *end = '\0';
    }

    // 6
    void removeAll(const cString& obj) {
        bool charSet[256] = {false};
        Node* current = obj.head;
        while (current) {
            charSet[static_cast<unsigned char>(current->data)] = true;
            current = current->next;
        }
        
        current = head;
        while (current) {
            if (charSet[static_cast<unsigned char>(current->data)]) {
                Node* toDelete = current;
                if (current->prev){
                    current->prev->next = current->next;
                }
                if (current->next){
                    current->next->prev = current->prev;
                }
                if (current == head) {
                    head = current->next;
                }
                if (current == tail) {
                    tail = current->prev;
                }

                current = current->next;
                delete toDelete;
            }
            else {
                current = current->next;
            }
        }
    }

    // 7
    ~cString() {
        clear();
    }
};

int main() {
    cString word1;
    word1.assign("Pakistan");
    
    cString word2(word1);
    char temp[100];
    word1.copyConstructor(temp);
    cout << "Copy Constructor called: " << temp << endl;
    
    cout<<"Checking Palindrome... "<<endl;
    if (word1.isPalindrome()){
        cout<<"It is Palindrome"<<endl;
    }
    else {
        cout<<"Not a Palindrome"<<endl;
    }
    
    cout<<"Checking Remove All Function..."<<endl;
    cString toRemove;
    toRemove.assign("ntias");
    word1.removeAll(toRemove);
    word1.copyConstructor(temp);
    cout << "After removing: " << temp <<endl;

    return 0;
}