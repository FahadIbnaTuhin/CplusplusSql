#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int n, sum = 0; cin >> n;

    // while(n != 0) {
    //     sum += (n % 10);
    //     n /= 10;
    // }

    string s; cin >> s;
    int sum = 0;

    for(auto u : s) {
        sum += (u - '0');
    }

    string ns = to_string(sum), nrs = ns;
    
    reverse(nrs.begin(), nrs.end());

    cout << (ns == nrs) << '\n';

    return 0;
}