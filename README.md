# Exam Paper Submission & Marking Simulation

## Overview
This program models the **submission and grading process** of student exam papers using **stacks and queues**. It specifically tracks the journey of a student named **Hammad** to determine:
1. When he submits his exam.
2. How long he has to wait.
3. When his paper is marked.
4. When he receives his paper back.

## Features
- **Reads student names from a file (`data.txt`) and assigns them roll numbers.**
- **Uses a stack for paper submission** (Last-In, First-Out order).
- **Uses a queue for students waiting to submit** (First-In, First-Out order).
- **Uses another stack for marking papers** (Graded in the order of submission).
- **Tracks specific statistics related to Hammad’s paper submission and marking process.**

## How It Works
### **Step 1: File Reading & Roll Number Assignment**
- Reads student names from `data.txt`.
- Assigns roll numbers sequentially, starting from `1`.

### **Step 2: Submission Process**
- All students submit their papers into a **stack**.
- **Hammad submits his paper at a specific position** (calculated using 69% of total students).
- A **queue** handles students who need to wait before submitting.

### **Step 3: Marking Process**
- Papers are **graded in the same order they were submitted** using another **stack**.
- **Hammad’s exam position is tracked throughout the process.**

### **Step 4: Statistics Calculation**
The program computes:
1. **How many students submitted before Hammad.**
2. **How long he had to wait before submitting.**
3. **Where his paper was placed in the submission stack.**
4. **Where his paper was placed in the marking stack.**
5. **When he received his exam back.**
6. **The maximum and minimum number of exams he had to go through while searching for his paper.**

## **Example Data (`data.txt` Format)**
```plaintext
Ali
Hammad
Sara
Usman
Ayesha
Example Execution

Processing & Output:

Submission Stack (top to bottom):
Ayesha (Roll No: 5)
Usman (Roll No: 4)
Sara (Roll No: 3)
Hammad (Roll No: 2)
Ali (Roll No: 1)

Marked Stack (top to bottom):
Ali (Roll No: 1)
Hammad (Roll No: 2)
Sara (Roll No: 3)
Usman (Roll No: 4)
Ayesha (Roll No: 5)

Results:
1. Hammad received his exam after: 3 students.
2. Hammad had to wait to submit his exam after completing it: 1 students.
3. Hammad’s exam was placed at number: 2 in the submission stack.
4. Hammad’s exam was marked at number: 2 in the marked stack.
5. Hammad’s exam got the place: 3 in the marked exams stack.
6. Hammad received his exam back after: 3 students.
7. Maximum number of exams Hammad would have been through: 5.
8. Minimum number of exams Hammad would have been through: 2.
Edge Cases Handled

✅ Handles missing or empty data.txt files gracefully.
✅ Prevents incorrect calculations if the dataset is small.
✅ Ensures proper queue and stack behavior in all cases.