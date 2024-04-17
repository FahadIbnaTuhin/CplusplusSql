#include <bits/stdc++.h>

using namespace std;

string removeDuplicates(string s) {
    stack<char> ans;
    for(auto u : s) {
        if (ans.size() > 0 && ans.top() == u) {
            ans.pop();
        } else {
            ans.push(u);
        }
    }

    string result;
    while(!ans.empty()) {
        result += ans.top();
        ans.pop();
    }

    reverse(result.begin(), result.end());

    return result;
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    string ans = removeDuplicates("abbaca");
    cout << ans << '\n';

    return 0;
}