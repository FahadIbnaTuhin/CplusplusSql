#include <bits/stdc++.h>

using namespace std;

int main() {        
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    set<int> levels;

    int x; cin >> x;
    for(int i = 0; i < x; i++) {
        int p; cin >> p;
        levels.insert(p);
    }

    int y; cin >> y;
    for(int i = 0; i < y; i++) {
        int q; cin >> q;
        levels.insert(q);
    }

    cout << (levels.size() == n ? "I become the guy.\n" : "Oh, my keyboard!\n");

    return 0;
}