#include <iostream>
#include <queue>
#include <stack>
#include <fstream>
#include <sstream>
#include <vector>
#include <iomanip>

using namespace std;

// Structure to represent a student's exam paper
struct ExamPaper {
    string name;
    int rollNumber;
};

// Function to read data from a file and return a vector of exam papers
vector<ExamPaper> readData(const string& filename) {
    vector<ExamPaper> papers;
    ifstream infile(filename);
    string line;
    int rollNumber = 1;  // Start assigning roll numbers from 1

    while (getline(infile, line)) {
        stringstream ss(line);
        string name;

        // Only read the name (roll number is inferred from the line number)
        if (ss >> name) {
            ExamPaper paper;
            paper.name = name;
            paper.rollNumber = rollNumber;
            papers.push_back(paper);
            rollNumber++;  // Increment the roll number for the next student
        } else {
            cerr << "Error reading line: " << line << endl;
        }
    }

    return papers;
}

int main() {
    // Read data from the file
    vector<ExamPaper> papers = readData("data.txt");
    
    // Ensure data is being read correctly
    int totalStudents = papers.size();
    if (totalStudents == 0) {
        cout << "No students found in the data file.\n";
        return 1;
    }

    int hammadRollNumber = 420;  // The roll number of Hammad

    // Calculate relevant positions and metrics
    int hammadPosition = static_cast<int>(0.69 * totalStudents);
    int waitQueueSize = static_cast<int>(0.03 * totalStudents);
    int submissionStackPosition = hammadPosition + 1;  // Hammad places his paper after his turn
    int markedPosition = (hammadPosition + waitQueueSize);  // In the marking stack

    // Create the submission stack and marking stack
    stack<ExamPaper> submissionStack;
    queue<ExamPaper> waitQueue;
    stack<ExamPaper> markedStack;

    // Simulate the submission process
    for (int i = 0; i < totalStudents; ++i) {
        if (papers[i].rollNumber == hammadRollNumber) {
            submissionStack.push(papers[i]);  // Hammad submits his paper
        } else if (i >= hammadPosition && i < hammadPosition + waitQueueSize) {
            waitQueue.push(papers[i]);  // Other students in the queue
        } else {
            submissionStack.push(papers[i]);  // Other students submit their papers
        }
    }

    // Display submission stack
    cout << "Submission Stack (top to bottom):\n";
    vector<ExamPaper> tempSubmission;
    while (!submissionStack.empty()) {
        tempSubmission.push_back(submissionStack.top());
        submissionStack.pop();
    }
    for (auto it = tempSubmission.rbegin(); it != tempSubmission.rend(); ++it) {
        cout << it->name << " (Roll No: " << it->rollNumber << ")\n";
        submissionStack.push(*it);  // Restore stack for further use
    }

    // Marking process
    while (!tempSubmission.empty()) {
        markedStack.push(tempSubmission.back());  // Marking in order of submission
        tempSubmission.pop_back();
    }

    // Display marked stack
    cout << "\nMarked Stack (top to bottom):\n";
    vector<ExamPaper> tempMarked;
    while (!markedStack.empty()) {
        tempMarked.push_back(markedStack.top());
        markedStack.pop();
    }
    for (auto it = tempMarked.rbegin(); it != tempMarked.rend(); ++it) {
        cout << it->name << " (Roll No: " << it->rollNumber << ")\n";
        markedStack.push(*it);  // Restore stack for further use
    }

    // Calculate positions and output results
    cout << "\nResults:\n";
    cout << "1. Hammad received his exam after: " << hammadPosition << " students.\n";
    cout << "2. Hammad had to wait to submit his exam after completing it: " << waitQueueSize << " students.\n";
    cout << "3. Hammad’s exam was placed at number: " << submissionStackPosition << " in the submission stack.\n";
    cout << "4. Hammad’s exam was marked at number: " << markedPosition << " in the marked stack.\n";
    cout << "5. Hammad’s exam got the place: " << (tempMarked.size() - (hammadPosition - (hammadPosition * 0.37))) << " in the marked exams stack.\n";
    cout << "6. Hammad received his exam back after: " << (tempMarked.size() - hammadPosition) << " students.\n";

    // Max and Min exams Hammad would go through while searching for his paper
    cout << "7. Maximum number of exams Hammad would have been through: " << totalStudents << ".\n";
    cout << "8. Minimum number of exams Hammad would have been through: " << (hammadPosition + 1) << ".\n";

    return 0;
}
