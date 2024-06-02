#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    int n = s.length();

    vector<vector<int>> pref(n + 1, vector<int>(26));
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i];
        int char_id = s[i] - 'a';
        pref[i + 1][char_id]++;
    }

    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int L, R;
        cin >> L >> R;
        char best_char = '?';
        int best_freq = -1;
        
        for (int char_id = 0; char_id < 26; char_id++) {
            int freq = pref[R + 1][char_id] - pref[L][char_id];
            if (freq > best_freq) {
                best_freq = freq;
                best_char = 'a' + char_id;
            }
        }

        cout << best_char << '\n';
    }

    return 0;
}