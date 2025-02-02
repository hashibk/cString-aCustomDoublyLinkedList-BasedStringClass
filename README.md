# University Management System  

## Overview  
This program models a **university structure** with multiple components:  
- **Person:** Base class for Students, Teachers, and TAs.  
- **Teacher:** Represents a professor with a qualification, salary, and office hours.  
- **TA (Teaching Assistant):** Represents a TA with a designation.  
- **Student:** Represents a student with a GPA.  
- **Classroom:** Contains students, a teacher, and a TA. Supports **adding and removing students dynamically**.  
- **Department:** Manages a list of teachers and classrooms. Supports **adding and removing teachers**.  
- **University:** Contains multiple departments and allows **adding and removing departments**.  

## Features  
✅ **Encapsulation:** Each class has private members with getter/setter methods.  
✅ **Inheritance:** `Teacher`, `TA`, and `Student` inherit from `Person`.  
✅ **Dynamic Memory Allocation:** Used to store objects in `Classroom`, `Department`, and `University`.  
✅ **Functions for Adding & Removing Entities:** Supports dynamic modification of university structure.  

Example Output

Department Name: Computer Science
Number of Teachers: 1
Teacher List:
- mamoona