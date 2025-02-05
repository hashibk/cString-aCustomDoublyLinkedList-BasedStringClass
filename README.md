# cString: A Custom Doubly Linked List-Based String Class

## Overview
This project implements a **custom string class** (`cString`) using a **doubly linked list** in C++. Unlike standard C++ strings, this implementation allows **dynamic character manipulation** while avoiding direct array-based operations.  

The class supports:
- **String assignment** (`assign()`)
- **Copy constructor**
- **Checking if a string is a palindrome** (`isPalindrome()`)
- **Copying string contents into a character array** (`copyConstructor()`)
- **Removing specific characters from a string** (`removeAll()`)
- **Proper memory management** (destructor)

## Features
- **Dynamic memory allocation** using a **doubly linked list**
- **Deep copying** to ensure independent instances
- **Efficient palindrome detection**
- **Flexible character removal**
- **Automatic cleanup** using a destructor

## Usage
### **1. String Assignment**
```cpp
cString word;
word.assign("Pakistan");
Assigns "Pakistan" to word.

2. Copy Constructor
cString copyWord(word);
Creates a deep copy of word.

3. Checking for a Palindrome
if (word.isPalindrome()) {
    cout << "It is a Palindrome" << endl;
} else {
    cout << "Not a Palindrome" << endl;
}
4. Copying String Data to a Character Array
char temp[100];
word.copyConstructor(temp);
cout << "Copied String: " << temp << endl;
5. Removing Specific Characters
cString toRemove;
toRemove.assign("ntias");  // Characters to remove
word.removeAll(toRemove);
Removes all occurrences of 'n', 't', 'i', 'a', 's' from word.

Copy Constructor called: Pakistan
Checking Palindrome...
Not a Palindrome
Checking Remove All Function...
After removing: Pk