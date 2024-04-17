#include <bits/stdc++.h>

using namespace std;

bool isBalanced(char c1, char c2) {
    return (c1 == '(' && c2 == ')') || (c1 == '{' && c2 == '}') || (c1 == '[' && c2 == ']');
}

int main() {        
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    int n; cin >> n;

    while(n--) {
        string s; cin >> s;
        stack<char> st;

        bool balanced = true;
        for(auto u : s) {
            if (u == '(' || u == '{' || u == '[') st.push(u);
            else {
                if (st.empty()) {
                    balanced = false;
                    break;
                } else {
                    if (isBalanced(st.top(), u)) {
                        st.pop();
                    } else {
                        balanced = false;
                        break;
                    }
                }
            }
        }

        if (!st.empty()) balanced = false;

        cout << (balanced ? "YES\n" : "NO\n");
    }

    return 0;
}

// https://www.hackerearth.com/problem/algorithm/balance-them-251851db/