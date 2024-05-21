#include <bits/stdc++.h>

using namespace std;

const int mx = 112; // suppose, for 111 nodes
bool vis[mx]; // vis means visited
vector<int> adj[mx];

void dfs(int u) {
    vis[u] = 1;

    for (auto v : adj[u]) {
        if (vis[v] == 0) {
            dfs(v);
        }
    }
}
// In a graph, total degree: 2 * m [m = total edges]. So, for each particular node, "for" function will run
// same his degree number of time.  So 2m
// dfs function will be called only 1 time for each node. So, total node n
// TC: O(2m + n) = O(m + n) [can ignore constant] [m = number of edges && n = number of nodes]


int main() {
    // Depth-first search (DFS)
    
    // vis[1] = 1; // means 1 number node is visited
    // vis[1] = 0; // means 0 number node is visited


    // adjacent list
    // 1 path dfs suppose: 1 -- 2 -- 3 -- 4
    adj[1].push_back(2); // means can go from 1 to 2
    adj[2].push_back(1); // means can go from 2 to 1

    adj[2].push_back(3);
    adj[3].push_back(2);

    adj[3].push_back(4);
    adj[4].push_back(3);

    dfs(1); // to call

    return 0;
}