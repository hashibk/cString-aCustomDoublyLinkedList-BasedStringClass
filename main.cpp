#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <set>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node* up;
    Node* down;

    Node(int val) : data(val), left(nullptr), right(nullptr), up(nullptr), down(nullptr) {}
};

int ClueRow(int data, int totalRows) {
    int sum = 0;
    while (data) {
        sum += data % 10;
        data /= 10;
    }
    return (sum % totalRows) + 1;
}

int ClueColumn(int data) {
    int digits = 0;
    while (data) {
        digits++;
        data /= 10;
    }
    return digits;
}

vector<vector<Node*> > Read(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file!" << endl;
        exit(1);
    }

    vector<vector<Node*> > maze;
    string line;

    while (getline(file, line)) {
        vector<Node*> row;
        stringstream ss(line);
        string value;
        while (getline(ss, value, ',')) {
            int nodeData = stoi(value);
            row.push_back(new Node(nodeData));
        }
        maze.push_back(row);
    }

    int numRows = maze.size();
    int numCols = maze[0].size();

    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            if (j > 0) maze[i][j]->left = maze[i][j - 1];
            if (j < numCols - 1) maze[i][j]->right = maze[i][j + 1];
            if (i > 0) maze[i][j]->up = maze[i - 1][j];
            if (i < numRows - 1) maze[i][j]->down = maze[i + 1][j];
        }
    }
    return maze;
}

void Traverse(Node* start, int totalRows, int totalCols) {
    set<Node*> visited;
    Node* current = start;

    while (current) {
        cout << "Visiting node with data: " << current->data << endl;

        if (visited.count(current)) {
            cout << "Node revisited, ending traversal." << endl;
            cout<<"Elite Node= "<<current->data<<endl;
            return;
        }

        visited.insert(current);

        int nextRow = ClueRow(current->data, totalRows) - 1;
        int nextCol = ClueColumn(current->data) - 1;

        cout << "Clue gives row: " << nextRow << " and column: " << nextCol << endl;

        if (nextRow < 0 || nextRow >= totalRows || nextCol < 0 || nextCol >= totalCols) {
            cout << "Invalid clue, ending traversal." << endl;
            return;
        }

        // Move to the next node based on the clue
        Node* nextNode = nullptr;

        if (nextRow < (current - start) / totalCols && current->up) {
            cout << "Moving up." << endl;
            nextNode = current->up;
        } else if (nextRow > (current - start) / totalCols && current->down) {
            cout << "Moving down." << endl;
            nextNode = current->down;
        } else if (nextCol < (current - start) % totalCols && current->left) {
            cout << "Moving left." << endl;
            nextNode = current->left;
        } else if (nextCol > (current - start) % totalCols && current->right) {
            cout << "Moving right." << endl;
            nextNode = current->right;
        } else {
            cout << "No valid move, ending traversal." << endl;
            return;
        }

        current = nextNode;
    }
}

int main() {
    string filename = "maze.txt";
    vector<vector<Node*> > maze = Read(filename);

    if (maze.empty() || maze[0].empty()) {
        cerr << "Error: Maze structure is invalid!" << endl;
        return 1;
    }

    int totalRows = maze.size();
    int totalCols = maze[0].size();

    Node* start = maze[0][0];

    Traverse(start, totalRows, totalCols);

    return 0;
}
