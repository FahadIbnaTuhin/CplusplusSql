#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll> generate_divisors(ll n) {
    vector<ll> divisors;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            divisors.push_back(i);

            if (n / i != i) {
                divisors.push_back(n / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());
    return divisors;
}

int main() {
    ll n; cin >> n;
    vector<ll> divisors = generate_divisors(n);
    for (auto &u : divisors) cout << u << ' ';
    cout << '\n';

    return 0;
}