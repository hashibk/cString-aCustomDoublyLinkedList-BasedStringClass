# Hospital OPD Management System

## Overview
This program simulates a **Hospital OPD (Outpatient Department) system** where patients can register, update their medical conditions, and be served based on priority.  
The system automatically prioritizes:
- **Patients with more serious conditions** (Critical > Intense > Normal)
- **Senior citizens (age 60+)** by moving them higher in the queue

## Features
- **Registers patients in a queue**
- **Assigns priority based on their condition** (Critical = 1, Intense = 2, Normal = 3)
- **Prioritizes senior citizens (age 60+) over younger patients**
- **Updates patient condition dynamically**
- **Displays the current queue**
- **Reorders patients based on their priority**
- **Handles missing or invalid input with custom exceptions**

## Functionality
### **1. Enqueue Patient**
- Patients are added to the queue with priority:
  - Critical → Highest Priority (1)
  - Intense → Medium Priority (2)
  - Normal → Lowest Priority (3)
- **Senior citizens (60+) are given preference and moved up the queue.**
- Throws an **IncompleteInformationException** if patient data is missing.

### **2. Update Patient Info**
- Updates a patient’s medical condition and reassigns their priority.
- Throws an **IncompleteInformationException** if patient is not found.

### **3. View Current Queue**
- Displays all patients in the order they will be served.

### **4. Prioritize Patients**
- Sorts the queue to ensure patients are seen based on priority.
- Throws an **ImproperPriorityException** if an invalid priority is assigned.

## **Menu Options**
```plaintext
Hospital OPD System Menu:
1. Enqueue Patient
2. Update Patient Info
3. View Current Queue
4. Prioritize Patients
5. Exit
Enter your choice: 
Example Data & Execution

Input
Enter Patient Name: Hammad
Enter Patient Age: 35
Enter Patient Condition (Normal/Critical/Intense): Critical
Output
Patient Enqueued Successfully!

Current Patient Queue:
Name: Hammad, Age: 35, Condition: Critical, Priority: 1

Prioritizing patients...
Patients Prioritized Successfully!
Edge Cases Handled

✅ Handles missing names, invalid ages, or empty conditions
✅ Ensures priority is always valid (Normal, Critical, Intense only)
✅ Handles a patient list of any size dynamically