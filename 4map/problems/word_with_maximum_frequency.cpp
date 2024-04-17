#include <bits/stdc++.h>

using namespace std;

string maximumFrequency(string s){
    unordered_map<string, int> count;
    string word = "";
    int mcount = 0;

    for(char c : s) {
        if (isspace(c)) {
            count[word]++;
            mcount = max(mcount, count[word]);
            word = "";
        } else {
            word += c;
        }
    }
    count[word]++;
    mcount = max(mcount, count[word]);
    word = "";
    for(char c: s) {
        if (c == ' ') {
            if (count[word] == mcount) {
                word = word + " " + to_string(mcount);
                return word;
            }
            word = "";
        } else {
            word += c;
        }
    }
    word = word + " " + to_string(mcount);
    return word;
}

int main() {        
    ios::sync_with_stdio(false);
    cin.tie(0);

    string ans = maximumFrequency("rjs kot w lmy nh fn zo cfg bl m q ms pnt tko iym uo nmx jl vn i sin");
    // string ans = maximumFrequency("amazon is amazon geeks for geeks is geeks for geeks");
    
    cout << ans << '\n';

    return 0;
}

// https://www.geeksforgeeks.org/problems/word-with-maximum-frequency0120/1