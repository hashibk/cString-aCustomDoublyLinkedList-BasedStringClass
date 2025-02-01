# Room Reservation System

## Description
The **Room Reservation System** allows users to reserve rooms from a hotel that has both business and economy class rooms. The user can select the type of room (business or economy) and check availability. If a room is available, the user can reserve it, and the system updates the availability.

## Features
- Users can select between business class (1) or economy class (2).
- The system checks availability of rooms in the selected class.
- If rooms are available, users can reserve a room.
- The updated room status is displayed after each reservation.
- Users can continue to reserve rooms as long as they want.

## Usage

1. Upon starting the program, the user will be prompted to choose between business class (1) or economy class (2).
2. The system will display available rooms and ask if the user wants to reserve one.
3. If a room is reserved, the system will display the updated room status.
4. The user will be asked if they want to reserve another room.
5. This process continues until the user decides to stop.

## Example

**Input:**
Enter 1 for business class and 2 for economy class. 1 Room no. 0 is free on 0 floor, do you want to reserve it? Press 1 for yes. 1


**Output:**
Room no. 0 is reserved on 0 floor. Updated Room Status: 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0


**Next Input:**
Do you want to reserve another room? Press 1 for yes. 1


**Next Output:**
Enter 1 for business class and 2 for economy class. 2 Room no. 0 is free on 2 floor, do you want to reserve it? Press 1 for yes. 1


**Output:**
Room no. 0 is reserved on 2 floor. Updated Room Status: 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0