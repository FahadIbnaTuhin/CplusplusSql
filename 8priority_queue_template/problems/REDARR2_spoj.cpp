// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int t; cin >> t;

//     while(t--) {
//         int n; cin >> n;
//         priority_queue<int, vector<int>, greater<int>> q;

//         for(int i = 0; i < n; i++) {
//             int a; cin >> a;
//             q.push(a);
//         }

//         int minimum = 0;
//         while(q.size() > 1) {
//             int a1 = q.top();
//             q.pop();
//             int a2 = q.top();
//             q.pop();
//             minimum += a1 + a2;
//             q.push(a1 + a2);
//         }

//         cout << minimum  << '\n';
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        // priority_queue<int, vector<int>, greater<int>> q;
        priority_queue<int> q;

        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            q.push(-a);
        }

        int minimum = 0;
        while(q.size() > 1) {
            int a1 = q.top(); // -1
            q.pop();
            int a2 = q.top(); // -3
            q.pop();
            minimum += a1 + a2;
            q.push(a1 + a2);
        }

        cout << minimum * - 1 << '\n';
    }

    return 0;
}

// 1 6 3 20 -> 1 3 6 20
// https://www.spoj.com/problems/REDARR2/