#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

// Brute Force:
// void solve1() {
//     ll n, q; cin >> n >> q;

//     vector<ll> arr(n);
//     for (ll i = 0; i < n; i++) cin >> arr[i];

//     while (q--) {
//         ll a, b; cin >> a >> b;

//         ll sum = 0;
    
//         for (ll i = a - 1; i < b; i++) {
//             sum += arr[i];
//         }

//         cout << sum << '\n';
//     }  
// }
// TC: O(q * n) [q for number of queries & n in the wrost case if they want the sum of all]


void solve2() {
    ll n, q; cin >> n >> q;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) cin >> arr[i];

    vector<ll> prefix_sum(n + 1, 0);
    for (ll i = 1; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + arr[i - 1];
    }

    while (q--) {
        ll a, b; cin >> a >> b; // 0-indexed
        cout << prefix_sum[b + 1] - prefix_sum[a] << '\n'; // follow this
        
        // ll a, b; cin >> a >> b; // 1-indexed
        // cout << prefix_sum[b] - prefix_sum[a - 1] << '\n'; // just subtract 1 from both
        
    }
}
// TC: O(n + q)


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // solve1();

    solve2();

    return 0;
}