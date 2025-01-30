#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <fstream>
#include <sstream>

using namespace std;

struct Person {
    char gender;
    string orientation;

    Person(char g = '\0', string o = "") : gender(g), orientation(o) {}
};

bool isValid(vector<vector<Person> >& matrix, int x, int y, Person& current, int rows, int cols) {
    int dx[] = {-1, 1, 0, 0}; // Directions: up, down, left, right
    int dy[] = {0, 0, -1, 1};

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < rows && ny >= 0 && ny < cols) {
            if (matrix[nx][ny].gender == current.gender &&
                matrix[nx][ny].orientation == current.orientation) {
                return false;
            }
        }
    }
    return true;
}

bool arrangePeople(vector<vector<Person> >& matrix, stack<pair<int, int> >& placements, queue<Person>& people, int rows, int cols) {
    if (people.empty()) return true;

    Person current = people.front();
    people.pop();

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j].gender == '\0' && isValid(matrix, i, j, current, rows, cols)) {
                matrix[i][j] = current;
                placements.push(make_pair(i, j));

                if (arrangePeople(matrix, placements, people, rows, cols)) {
                    return true;
                }

                matrix[i][j] = Person();
                placements.pop();
            }
        }
    }

    people.push(current);
    return false;
}

int main() {
    ifstream file("people.txt");
    string line;
    getline(file, line);
    file.close();

    vector<Person> peopleList;
    stringstream ss(line);
    string token;

    string orientations[] = {"left", "right", "front", "back"};
    int orientationIndex = 0;

    while (getline(ss, token, ',')) {
        char gender = token[0];
        string orientation = orientations[orientationIndex % 4];
        peopleList.push_back(Person(gender, orientation));
        orientationIndex++;
    }

    int rows, cols;
    cout << "Enter matrix dimensions (rows cols): ";
    cin >> rows >> cols;

    if (rows * cols > peopleList.size()) {
        cout << "Not enough people to fill the matrix!" << endl;
        return 0;
    }

    vector<vector<Person> > matrix(rows, vector<Person>(cols, Person()));
    stack<pair<int, int> > placements;
    queue<Person> people;

    for (int i = 0; i < rows * cols; i++) {
        people.push(peopleList[i]);
    }

    if (arrangePeople(matrix, placements, people, rows, cols)) {
        cout << "Arranged Matrix:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j].gender != '\0') {
                    cout << matrix[i][j].gender << matrix[i][j].orientation[0] << " ";
                } else {
                    cout << "XX ";
                }
            }
            cout << endl;
        }
    } else {
        cout << "No possible arrangement found." << endl;
    }

    return 0;
}
