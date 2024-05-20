#include <bits/stdc++.h>

using namespace std;

const int mx = 1e5+123;
vector<pair<int, int>> adj[mx];

int main() {
    // First value: node & second value: weight
    int n, m; cin >> n >> m;

    for (int i = 1; i <= m; i++) { 
        int u, v, w; cin >> u >> v >> w;

        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    // To show the output: 
    for (int i = 1; i <= n; i++) { 
        cout << "Adjacent list of " << i << ": ";
        for (auto u : adj[i]) cout << "Node: " << u.first << " And cost: " << u.second << " ";
        cout << '\n';
    }

    return 0;
}

// Input
// 4 3
// 1 2 10 
// 2 4 3 
// 2 3 2

// Input
// 4 5
// 1 2 10
// 1 2 13
// 2 4 14
// 2 4 3
// 2 3 2
