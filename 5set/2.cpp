#include <bits/stdc++.h>

using namespace std;

int main() {        
    ios::sync_with_stdio(false);
    cin.tie(0);
    // difference between set and multiset: set unique and sorted but multiset sorted but not unique.
    // multiset also same complexity 0(log2(n)). Function same for both
    multiset<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(1);
    s.insert(3);
    s.insert(1);
    s.insert(4);
    s.insert(1);
    s.insert(4);

    // cout << s.size() << '\n';
    // for(auto u : s) cout << u << " ";
    // cout << '\n';

    // cout << s.count(1) << '\n';

    // s.erase(1); // in set, elements are unique, so using this function will delete only one 1 but here, multiset will all occurence of 1
    // for(auto u : s) cout << u << " ";
    // cout << '\n';


    // To delete only one 1, then: 
    auto it = s.find(1); // first occurrence of 1.
    s.erase(it); 

    for(auto u : s) cout << u << " ";
    cout << '\n';

    return 0;
}