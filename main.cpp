#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int dfs(int node, int parent, vector<vector<int> >& tree, vector<int>& coins, int& edges) {
        int hasCoin = coins[node];
        for (size_t i = 0; i < tree[node].size(); ++i) {
            int neighbor = tree[node][i];
            if (neighbor == parent) continue;
            if (dfs(neighbor, node, tree, coins, edges)) {
                hasCoin = 1;
                edges += 2; // Add cost for round trip
            }
        }
        return hasCoin;
    }

    int minEdges(int n, vector<vector<int> >& edgesList, vector<int>& coins) {
        vector<vector<int> > tree(n);
        for (size_t i = 0; i < edgesList.size(); ++i) {
            tree[edgesList[i][0]].push_back(edgesList[i][1]);
            tree[edgesList[i][1]].push_back(edgesList[i][0]);
        }

        int edges = 0;
        dfs(0, -1, tree, coins, edges);
        return edges;
    }
};

int main() {
    vector<int> coins;
    coins.push_back(1);
    coins.push_back(0);
    coins.push_back(0);
    coins.push_back(0);
    coins.push_back(0);
    coins.push_back(1);

    vector<vector<int> > edges;
    edges.push_back(vector<int>(2)); edges.back()[0] = 0; edges.back()[1] = 1;
    edges.push_back(vector<int>(2)); edges.back()[0] = 1; edges.back()[1] = 2;
    edges.push_back(vector<int>(2)); edges.back()[0] = 2; edges.back()[1] = 3;
    edges.push_back(vector<int>(2)); edges.back()[0] = 3; edges.back()[1] = 4;
    edges.push_back(vector<int>(2)); edges.back()[0] = 4; edges.back()[1] = 5;

    Solution sol;
    cout << "Minimum edges: " << sol.minEdges(coins.size(), edges, coins) << endl;
    return 0;
}
