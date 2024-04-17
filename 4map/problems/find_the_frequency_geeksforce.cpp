#include <bits/stdc++.h>

using namespace std;

int findFrequency(vector<long long> Arr, int X){
    // Your code here
    map<long long, int> count;
    
    for(auto u : Arr) ++count[u];
    
    return count[X];
}

int main() {        
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int result = findFrequency({1, 2, 3, 3, 2, 1}, 2);
    cout << result << '\n';

    return 0;
}