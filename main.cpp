#include <iostream>
#include <unordered_map>
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

// Map each node to its parent
void mapParents(TreeNode* root, unordered_map<int, int>& parent) {
    if (!root) return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* curr = q.front();
        q.pop();

        if (curr->left) {
            parent[curr->left->val] = curr->val;
            q.push(curr->left);
        }
        if (curr->right) {
            parent[curr->right->val] = curr->val;
            q.push(curr->right);
        }
    }
}

// Get the k-th ancestor of a node
int getKthAncestor(int node, int k, unordered_map<int, int>& parent) {
    while (k > 0 && parent.find(node) != parent.end()) {
        node = parent[node];
        k--;
    }
    return (k == 0) ? node : -1;
}

int main() {
    // Build the binary tree
    TreeNode* root = buildTree();

    // Map each node to its parent
    unordered_map<int, int> parent;
    mapParents(root, parent);

    // Process queries
    int node, k;
    cout << "Enter node and k: ";
    cin >> node >> k;

    int result = getKthAncestor(node, k, parent);
    cout << "The " << k << "-th ancestor of node " << node << " is: " << result << endl;

    return 0;
}
