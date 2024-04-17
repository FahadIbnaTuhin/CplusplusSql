#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    vector< pair<string, string> > leaves(n);

    for(int i = 0; i < n; i++) {
        cin >> leaves[i].first >> leaves[i].second;
    }

    sort(leaves.begin(), leaves.end());
    int sz = unique(leaves.begin(), leaves.end()) - leaves.begin();
    
    cout << sz << '\n';

    return 0;
}