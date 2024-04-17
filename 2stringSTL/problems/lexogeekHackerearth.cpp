#include <bits/stdc++.h>

using namespace std;
 
int main() {        
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        string s; cin >> s;

        bool np = next_permutation(s.begin(), s.end());

        if (np) {
            cout << s << '\n';
        } else {
            cout << "no answer\n";
        }
    }
 
    return 0;
}