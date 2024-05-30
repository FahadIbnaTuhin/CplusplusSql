#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

// Function to generate primes up to a certain limit using the Sieve of Eratosthenes
vector<ll> generate_primes(ll limit) {
    vector<bool> is_prime(limit + 1, true); // limit can also be a prime [so adding 1 with 0-indexed]
    vector<ll> primes;

    is_prime[0] = is_prime[1] = false; // 0 & 1 are not prime

    for (ll i = 2; i <= limit; i++) { // O(n)
        if (is_prime[i]) {
            primes.push_back(i);

            if (i <= sqrt(limit)) { // O(sqrt(n))
                for (ll j = i * i; j <= limit; j += i) {
                    is_prime[j] = false;
                }
            }
        }
    }

    return primes;
}
// TC: O(n * sqrt(n)) && SC: O(N)

vector<ll> factors(ll x, const vector<ll>& primes) {
    vector<ll> ret;

    for (ll p : primes) { // precompute list of primes
        if (p * p > x) { // In prime factorization, you can't have two primes larger than sqrt(x). So, only one you will get
            // If p^2 > x, remaining x must be a prime factor if x > 1
            if (x > 1) {
                ret.push_back(x);
                x = 1;
            }
            break; // no need to continue, as all remaining primes p will be such that p^2 > x
        } else {
            while (x % p == 0) { // take as much of this prime as we have
                ret.push_back(p);
                x /= p; // make sure to divide x, that makes the p^2 > x case work
            }
        }
    }

    return ret;
}

int main() {
    // Prime Factorization: Breaking a number down into a product of primes

    // average distance between two primes is logarithomic [on the order of n is around logn]
    // From 1 to n, you're expected to have like (n / logn) primes

    // Generate a list of primes up to a reasonable limit for factorization
    ll limit = 1000000; // You can adjust this limit based on the maximum x you expect
    vector<ll> primes = generate_primes(limit);

    // Test cases
    vector<ll> test_numbers = {20, 36, 10, 20, 100, 1000, 1234567890LL};

    for (ll number : test_numbers) {
        vector<ll> fact = factors(number, primes);
        cout << "Factors of " << number << " are: ";
        for (ll f : fact) {
            cout << f << " ";
        }
        cout << endl;
    }

    return 0;
}
// 5:30min