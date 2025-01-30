#include <iostream>
#include <queue>
#include <stdexcept>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Patient structure
struct Patient {
    string name;
    int age;
    string condition; // Normal, Critical, Intense
    int priority;     // Derived priority
};

// Custom exceptions
class IncompleteInformationException : public runtime_error {
public:
    IncompleteInformationException() : runtime_error("Incomplete Information") {}
};

class ImproperPriorityException : public runtime_error {
public:
    ImproperPriorityException() : runtime_error("Improper Derived Priority") {}
};

class DelayedServingException : public runtime_error {
public:
    DelayedServingException() : runtime_error("Delayed Serving") {}
};

// Function to compare patients by priority
bool comparePriority(const Patient& a, const Patient& b) {
    return a.priority < b.priority;  // Lower priority value means higher priority
}

// Hospital OPD class
class HospitalOPD {
private:
    queue<Patient> patientQueue;

    // Function to derive priority
    int derivePriority(const string& condition) {
        if (condition == "Critical") return 1;
        if (condition == "Intense") return 2;
        if (condition == "Normal") return 3;
        throw ImproperPriorityException();
    }

public:
    void enqueuePatient(const string& name, int age, const string& condition) {
        if (name.empty() || age <= 0 || condition.empty()) {
            throw IncompleteInformationException();
        }
        
        Patient newPatient;
        newPatient.name = name;
        newPatient.age = age;
        newPatient.condition = condition;
        newPatient.priority = derivePriority(condition);
        
        // Prioritize senior citizens (age 60+)
        if (age >= 60) {
            queue<Patient> tempQueue;
            int count = 0;
            while (!patientQueue.empty() && count < 3) {
                tempQueue.push(patientQueue.front());
                patientQueue.pop();
                count++;
            }
            patientQueue.push(newPatient); // Add senior citizen
            while (!tempQueue.empty()) {
                patientQueue.push(tempQueue.front());
                tempQueue.pop();
            }
        } else {
            patientQueue.push(newPatient);
        }
    }

    void updatePatientInfo(const string& name, const string& newCondition) {
        queue<Patient> tempQueue;
        bool found = false;
        
        while (!patientQueue.empty()) {
            Patient currentPatient = patientQueue.front();
            patientQueue.pop();
            if (currentPatient.name == name) {
                currentPatient.condition = newCondition;
                currentPatient.priority = derivePriority(newCondition);
                found = true;
            }
            tempQueue.push(currentPatient);
        }

        while (!tempQueue.empty()) {
            patientQueue.push(tempQueue.front());
            tempQueue.pop();
        }

        if (!found) {
            throw IncompleteInformationException();
        }
    }

    void viewCurrentQueue() {
        queue<Patient> tempQueue = patientQueue;
        cout << "Current Patient Queue:\n";
        while (!tempQueue.empty()) {
            Patient currentPatient = tempQueue.front();
            tempQueue.pop();
            cout << "Name: " << currentPatient.name 
                 << ", Age: " << currentPatient.age 
                 << ", Condition: " << currentPatient.condition 
                 << ", Priority: " << currentPatient.priority << endl;
        }
    }

    void prioritizePatients() {
        vector<Patient> patients;
        while (!patientQueue.empty()) {
            patients.push_back(patientQueue.front());
            patientQueue.pop();
        }

        // Sorting patients based on priority using the comparePriority function
        sort(patients.begin(), patients.end(), comparePriority);

        for (const auto& patient : patients) {
            patientQueue.push(patient); // Re-enqueue in prioritized order
        }
    }
};

int main() {
    HospitalOPD opd;
    int choice;
    string name, condition;
    int age;

    do {
        cout << "\nHospital OPD System Menu:\n";
        cout << "1. Enqueue Patient\n";
        cout << "2. Update Patient Info\n";
        cout << "3. View Current Queue\n";
        cout << "4. Prioritize Patients\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                try {
                    cout << "Enter Patient Name: ";
                    cin >> name;
                    cout << "Enter Patient Age: ";
                    cin >> age;
                    cout << "Enter Patient Condition (Normal/Critical/Intense): ";
                    cin >> condition;
                    opd.enqueuePatient(name, age, condition);
                    cout << "Patient Enqueued Successfully!\n";
                } catch (const runtime_error& e) {
                    cout << e.what() << endl;
                }
                break;

            case 2:
                try {
                    cout << "Enter Patient Name to Update: ";
                    cin >> name;
                    cout << "Enter New Condition: ";
                    cin >> condition;
                    opd.updatePatientInfo(name, condition);
                    cout << "Patient Info Updated Successfully!\n";
                } catch (const runtime_error& e) {
                    cout << e.what() << endl;
                }
                break;

            case 3:
                opd.viewCurrentQueue();
                break;

            case 4:
                opd.prioritizePatients();
                cout << "Patients Prioritized Successfully!\n";
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
