#include <bits/stdc++.h>

using namespace std;

int countWords(string list[], int n)
{
    map<string, int> count;

    for(int i = 0; i < n; i++) ++count[list[i]];
    
    short c = 0;
    for(auto u : count) {
        if (u.second == 2) ++c;
    }
    
    return c;
}

int main() {        
    ios::sync_with_stdio(false);

    string list[] = {"Tom", "Jerry", "Thomas", "Tom", "Jerry", "Courage", "Tom", "Courage"};
    int result = countWords(list, 8);

    cout << result << '\n';

    return 0;
}
