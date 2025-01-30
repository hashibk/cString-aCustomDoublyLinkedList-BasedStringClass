#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Node structure for the binary tree
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Build the binary tree from level-order input
TreeNode* buildTree() {
    cout << "Enter node values for level-order traversal (-1 for null): ";
    int val;
    cin >> val;
    if (val == -1) return NULL;

    TreeNode* root = new TreeNode(val);
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* curr = q.front();
        q.pop();

        cin >> val;
        if (val != -1) {
            curr->left = new TreeNode(val);
            q.push(curr->left);
        }

        cin >> val;
        if (val != -1) {
            curr->right = new TreeNode(val);
            q.push(curr->right);
        }
    }
    return root;
}

// Greedy DFS function to minimize cameras
int dfs(TreeNode* node, int& cameras) {
    if (!node) return 1; // Null nodes are already covered

    int left = dfs(node->left, cameras);
    int right = dfs(node->right, cameras);

    // If either child is not covered, place a camera here
    if (left == 0 || right == 0) {
        cameras++;
        return 2; // This node now has a camera
    }

    // If either child has a camera, this node is covered
    if (left == 2 || right == 2) {
        return 1; // This node is covered
    }

    // Otherwise, this node is not covered
    return 0; // This node needs a camera
}

// Function to find the minimum number of cameras
int minCameraCover(TreeNode* root) {
    int cameras = 0;
    if (dfs(root, cameras) == 0) {
        cameras++; // If root is not covered, place a camera at the root
    }
    return cameras;
}

int main() {
    // Build the binary tree
    TreeNode* root = buildTree();

    // Find the minimum number of cameras
    int result = minCameraCover(root);
    cout << "Minimum cameras needed: " << result << endl;

    return 0;
}
