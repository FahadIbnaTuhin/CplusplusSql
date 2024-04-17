#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    map<int, int> count;

    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        ++count[a];
    }

    int cut = 0;
    for(auto u : count) {
        if (u.first <= u.second) {
            cut += (u.second - u.first);
        } else {
            cut += u.second;
        }
    }

    cout << cut << '\n';

    return 0;
}