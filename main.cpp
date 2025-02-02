#include<iostream>
using namespace std;
class Person {
public:
    string name;
    Person(string n) : name(n) {}
};

class Teacher : public Person {
private:
    string qualification;
    string course;
    int salary;
    string officeHours;

public:
    Teacher(string n, string qual, int sal, string hours) : Person(n), qualification(qual), salary(sal), officeHours(hours) {}
};

class TA : public Person {
private:
    string designation;

public:
    TA(string n, string desig) : Person(n), designation(desig) {}
};

class Student : public Person {
private:
    string qualification;
    float gpa;

public:
    Student(string n, float g) : Person(n), gpa(g) {}
};

class Classroom {
private:
    string name;
    Student** studentList;
    TA* classTa;
    Teacher* classTeacher;
    int studentCount;

public:
    Classroom(string n, Teacher* teacher, TA* ta, Student** students, int count) : name(n), classTeacher(teacher), classTa(ta), studentCount(count) {
        studentList = new Student * [studentCount];
        for (int i = 0; i < studentCount; ++i) {
            studentList[i] = students[i];
        }
    }

    void registerStudent(Student* s) {
        Student** newStudentList = new Student * [studentCount + 1];
        for (int i = 0; i < studentCount; ++i) {
            newStudentList[i] = studentList[i];
        }
        newStudentList[studentCount++] = s;

        delete[] studentList; // Deallocate previous memory
        studentList = newStudentList;
    }

    void removeStudent(Student* s) {
        int indexToRemove = -1;
        for (int i = 0; i < studentCount; ++i) {
            if (studentList[i] == s) {
                indexToRemove = i;
                break;
            }
        }

        if (indexToRemove != -1) {
            Student** newStudentList = new Student * [studentCount - 1];
            for (int i = 0, j = 0; i < studentCount; ++i) {
                if (i != indexToRemove) {
                    newStudentList[j++] = studentList[i];
                }
            }

            delete[] studentList; // Deallocate previous memory
            studentList = newStudentList;
            studentCount--;
        }
    }
};

class Department {
private:
    string name;
    Classroom** classroomList;
    Teacher** teacherList;
    int numOfTeachers;
    int numOfClassrooms;

public:
    Department(string n) : name(n), numOfTeachers(0), numOfClassrooms(0) {
        teacherList = new Teacher * [10]; // Change the size as needed
        classroomList = new Classroom * [10]; // Change the size as needed
    }

    void addNewTeacher(Teacher* t) {
        teacherList[numOfTeachers++] = t;
    }

    void removeTeacher(Teacher* t)
    {
            for (int i = 0; i < numOfTeachers; ++i) {
                if (teacherList[i] == t) {
                    // Deleting the teacher from the array
                    delete teacherList[i];

                    // Shift elements to fill the gap
                    for (int j = i; j < numOfTeachers - 1; ++j) {
                        teacherList[j] = teacherList[j + 1];
                    }

                    // Update count of teachers
                    numOfTeachers--;
                    return;
                }
            }
    }

    void createClassroom(Teacher* teacher, TA* ta, Student** students, int count) {
        classroomList[numOfClassrooms++] = new Classroom("New Classroom", teacher, ta, students, count);
    }

    void print() {
        cout << "Department Name: " << name << endl;
        cout << "Number of Teachers: " << numOfTeachers << endl;
        cout << "Teacher List:" << endl;
        for (int i = 0; i < numOfTeachers; ++i) {
            cout << "- " << teacherList[i]->name << endl;
        }
    }
};

class University {
private:
    string name;
    Department** departments;
    int numOfDepartments;

public:
    University(string n) : name(n), numOfDepartments(0) {
        departments = new Department * [10]; // Change the size as needed
    }

    void addNewDepartment(string depName) {
        departments[numOfDepartments++] = new Department(depName);
    }

    void removeDepartment(Department* dep)
    {
            for (int i = 0; i < numOfDepartments; ++i) {
                if (departments[i] == dep) {
                    // Deleting the department from the array
                    delete departments[i];

                    // Shift elements to fill the gap
                    for (int j = i; j < numOfDepartments - 1; ++j) {
                        departments[j] = departments[j + 1];
                    }

                    // Update count of departments
                    numOfDepartments--;
                    return;
                }
            }
    }

    Department* getDepartment(int id) {
        if (id > 0 && id <= numOfDepartments) {
            return departments[id - 1];
        }
        return nullptr;
    }

    void print() {
        cout << "University Name: " << name << endl;
        cout << "Number of Departments: " << numOfDepartments << endl;
        cout << "Department List:" << endl;
        for (int i = 0; i < numOfDepartments; ++i) {
            departments[i]->print();
        }
    }
};

int main() {
    Teacher t1("mamoona", "MSCS", 150000, "2:30-5:00");
    TA ta("Anato", "BSCS");
    Student s1(" Hunain Azam ", 4.0);
    Student s2(" Mashood Husnain", 2.2);

    Student* lst[2] = { &s1, &s2 };

    University fast("Fast NUCES LHR");
    fast.addNewDepartment("Computer Science"); // id=1;
    Department* cs = fast.getDepartment(1);
    cs->createClassroom(&t1, &ta, lst, 2);
    cs->print();

    return 0;
}
