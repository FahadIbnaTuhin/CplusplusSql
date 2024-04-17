#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    set<int> result;

    while(t--) {
        int y, x; cin >> y >> x;

        if (y == 1) result.insert(x);
        else if (y == 2) result.erase(x);
        else {
            // you are using find, which has a time complexity of O(n), where n is the number of elements in the set. Since you're using 
            // a set data structure, which provides O(log n) complexity for search operations, using find is inefficient.
            // if (find(result.begin(), result.end(), n) == result.end()) {
            // if (result.find(x) == result.end()) {
            //     cout << "No\n";
            // } else {
            //     cout << "Yes\n";
            // }

            // in conclusion, using result.count(2) == 1 is both faster and more readable for checking if an element exists in a set.
            if (result.count(2) == 1) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}

// https://www.hackerrank.com/challenges/cpp-sets/problem