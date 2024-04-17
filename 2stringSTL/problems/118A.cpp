#include <bits/stdc++.h>

using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s, ans; cin >> s;

    for(char u : s) {
        char c = tolower(u);

        if (!isVowel(c)) {
            ans += '.';
            ans += c;
        }
    }

    cout << ans << '\n';

    return 0;
}
