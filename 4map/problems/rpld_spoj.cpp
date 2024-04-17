#include <bits/stdc++.h>

using namespace std;

int main() {        
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    for(int i = 1; i <= t; i++) {
        int n, r; cin >> n >> r;
        map<pair<int, int>, bool> count;

        bool ok = true;
        while(r--) {
            int i, c; cin >> i >> c;

            if (count[{i, c}]) {
                ok = false;
            } else {
                count[{i, c}] = 1;
            }
        }

        if (ok) cout << "Scenario #" << i << ": possible\n";
        else cout << "Scenario #" << i << ": impossible\n";
    }

    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// int main() {        
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int t; cin >> t;

//     for(int i = 1; i <= t; i++) {
//         int n, r; cin >> n >> r;
//         int rr = r;
//         set< pair<int, int> > count;

//         while(rr--) {
//             int a, b; cin >> a >> b;

//             count.insert({a, b});
//         }

//         if (count.size() == r) cout << "Scenario #" << i << ": possible\n";
//         else cout << "Scenario #" << i << ": impossible\n";
//     }

//     return 0;
// }