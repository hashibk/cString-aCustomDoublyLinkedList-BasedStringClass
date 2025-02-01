# Person Management System  

## Overview  
This is a simple C++ program that demonstrates **inheritance** and **polymorphism** by modeling a basic person management system. The program defines a base class `person` and two derived classes:  
- `professor`: Stores **name, age, and number of publications**.  
- `student`: Stores **name, age, number of subjects, and marks**.  

The program allows a professor and a student to enter their details and then displays the entered information.  

## Features  
- Uses **inheritance** to define common attributes for `person`.  
- Implements **polymorphism** using `virtual` functions `getdata()` and `putdata()`.  
- Dynamically allocates memory for storing student marks.  

## Compilation and Execution  
### **Compiling the Code:**  
```sh
g++ person_management.cpp -o person_management
Running the Executable:
./person_management
Expected Input/Output

Input:
Enter name= 
John
Enter age= 
45
Enter publications= 
20
Enter name= 
Alice
Enter age= 
20
Enter number of subjects= 
3
Enter marks= 
85
Enter marks= 
90
Enter marks= 
78
Output:
John 45 20 1  
Alice 20 253 2  
(The last numbers 1 and 2 represent professor and student IDs, respectively.)