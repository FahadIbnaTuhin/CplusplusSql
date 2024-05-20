#include <bits/stdc++.h>

using namespace std;

const int mx = 1e5+123;
vector<int> adj[mx] = {};

int main() {
    // n number of nodes & m number of edges will be given
    int n, m; cin >> n >> m;

    for (int i = 1; i <= m; i++) { // iterating m number of edges
        int u, v; cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // To show the output: 
    for (int i = 1; i <= n; i++) { // will iterate number of n nodes 
        cout << "Adjacent list of " << i << ": ";
        for (auto u : adj[i]) cout << u << ' ';
        cout << '\n';
    }

    // Inside graph, to access adjacent list, using "for each" loop is useful. Can use

    return 0;
}

// Input
// 4 3
// 1 2
// 2 4
// 2 3