#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        string s; cin >> s;
        string r_s = s;
        reverse(r_s.begin(), r_s.end());

        cout << (s == r_s ? "Yes\n" : "No\n");
    }

    return 0;
}