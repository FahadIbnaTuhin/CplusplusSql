#include <bits/stdc++.h>

using namespace std;

int main() {        
    ios::sync_with_stdio(false);
    cin.tie(0);
    // set, map are data structure
    // log2(n) and log(n) are same for algorithm for all 
    
    // in set elements are in unique and sorted form. push, access, erase element all takes O(log2(n)) / O(log(n)) same thing 
    // set<int> s = {1, 1, 3, 2, 3, 2};
    // cout << s.size() << '\n';
    // for(auto u : s) cout << u << " ";
    // cout << '\n';

    // set<int>::iterator it;
    // for(it = s.begin(); it != s.end(); it++) cout << *it << " ";
    // cout << '\n';

    // s.clear();
    // cout << s.empty() << '\n';


    // set<int> s = {1, 3, 2, 2};
    // s.insert(0); // O(log2(n))
    // s.insert(3);
    // for(auto u : s) cout << u << '\n';

    // cout << s.count(2) << " " << s.count(5) << '\n'; // set unique so if an element is found 1. If no element found 0(false)
    // complexity O(log2(n))

    // cout << *s.begin() << '\n'; // in set {1, 2, 3}
    // // cout << *(s.begin() + 1) << '\n'; // set is complex, you cann't get ans like vector, bucause it is not pointing // Compiler Error
    // cout << *(++s.begin()) << " " << *(--s.end()) << " " << *(s.rbegin()) << '\n'; // can access value using this
    // here, s.end() incidates before this every element. so to get the last element *(--s.end()). Use *(--s.end()) instead of push back

    // set<int> s = {2, 3, 1};
    // s.erase(2);
    // cout << s.size() << '\n';
    // for(auto u : s) cout << u << " ";
    // cout << '\n';


    // set<int> arr = {1, 2, 3, 4, 3};
    // // arr.erase(arr.begin());
    // arr.erase(--arr.end());

    // for(auto u : arr) cout << u << " ";
    // cout << '\n';


    // set<string> s; // unique and store string lexicographically
    // s.insert("shahriar");
    // s.insert("proma");
    // s.insert("nobel");
    // s.insert("fahad");
    // s.insert("Fz");
    // s.insert("nobel");

    // for(auto u : s) cout << u << '\n';


    // set<pair<int, int>> s = {{2, 4}, {4, 1}, {4, 1}, {2, 1}};
    // s.insert({4, 3});
    // s.insert({5, 1});
    // s.insert({5, 1});
    // s.insert({5, 4});

    // cout << s.size() <<f '\n';
    // for(auto u : s) cout << u.first << " " << u.second << '\n';


    // To sort decending order in set(integer):
    // set<int, greater<int>> s; // set type is int, first parameter, so inside greater will be also int
    // s.insert(2);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);

    // for(auto u : s) cout << u << " ";
    // cout << '\n';


    // To sort decending order in set(string):
    // set<string, greater<string>> s; // lexographically big to small
    // s.insert("shahriar");
    // s.insert("proma");
    // s.insert("momo");
    // s.insert("nova");
    // s.insert("sharif");
    // s.insert("shahriar");

    // for(auto u : s) cout << u << '\n';


    // set<pair<int, int>, greater<pair<int, int>>> s; // pair set big to small
    
    // s.insert({1, 2});
    // s.insert({2, 3});
    // s.insert({1, 2});
    // s.insert({4, 2});

    // for(auto u : s) cout << u.first << " " << u.second << '\n';
    

    // unordered_set<int> s; // unordered_set same like set but doesn't sort
    // s.insert(3);
    // s.insert(2);
    // s.insert(1);
    // s.insert(5);
    // s.insert(2);

    // for(auto u : s) cout << u << " ";
    // cout << '\n';
    // in unordered set, wrost case complexity O(n) but average case complexity O(1)
    // if you get tle for using log2(n) of set then, you can use unordered_set
    // for working with just unique -> unordered_set
    

    // set<int> val = {10, 5, 1};
    // set<int>::iterator it = val.find(15); // //Gives the iterator to the element val if it is found otherwise returns s.end() .

    // if (it != val.end()) cout << "Found\n";
    // else cout << "Not Found\n";


    set<int> result = {9, 10, 4, 14, 9};

    // // you are using find, which has a time complexity of O(n), where n is the number of elements in the set. Since you're using 
    // // a set data structure, which provides O(log n) complexity for search operations, using find is inefficient.
    // // if (find(result.begin(), result.end(), n) == result.end()) { // avoid using with sets. Use the below thing:
    // if (result.find(6) == result.end()) { // also can use because it will return 1 for set alaways so true if yes: if (s.count(6)) 
    //     cout << "No\n";
    // } else {
    //     cout << "Yes\n";
    // }

    // in conclusion, using result.count(2) == 1 is both faster and more readable for checking if an element exists in a set.
    // if (result.count(14) == 1) cout << "YES\n";
    // else cout << "NO\n";

 
    // Limitation of set
    // set<int> a = {3, 4, 1, 2, 1, 1}; // 1 2 3 4

    // cout << a[2] << '\n'; // error - cann't access value using index in set
    // for(int i = 0; i < a.size(); i++) cout << a[i] << '\n'; // error, same like before

    // for(auto u : a) cout << u << '\n'; // can use this

    // cout << *a.begin() << '\n'; // can print the second

    // To print ony the 3rd element
    // int p, c = 0;
    // for(auto u : a) {
    //     if (c == 3) break;
    //     p = u;
    //     c++;
    // }
    // cout << p << '\n';

    // cout << *(++(++a.begin())) << '\n'; // more shortcut to print the 3rd element
    // cout << *(++(++(++a.begin()))) << '\n'; // to print the 3rd element
    // Formula: If you need nth element then use (n - 1) number of "++". Suppose for 3rd element we used *(++(++a.begin())) "++" = used twice

    // To print the second last element of set
    // cout << *(--(--a.end())) << '\n';

    // difference between set and multiset: set unique and sorted but multiset sorted but not unique.
    // multiset also same complexity 0(log2(n)) / O(log(n)). Function same for both
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
    // auto it = s.find(1); // first occurrence of 1.
    // s.erase(it); 

    // for(auto u : s) cout << u << " ";
    // cout << '\n';


    // Conclusion:
    // set - unique and sorted
    // unordered_set - unique [Tips: both have 'u' at the beginning]
    // multiset - sorted
    set<int> a = {5, 2, 3, 1, 5, 2, 4};
    for(auto u : a) cout << u << ' ';
    cout << '\n';

    unordered_set<int> a1 = {5, 2, 3, 1, 5, 2, 4};
    for(auto u : a1) cout << u << ' ';
    cout << '\n';

    multiset<int> a2 = {5, 2, 3, 1, 5, 2, 4};
    for(auto u : a2) cout << u << ' ';
    cout << '\n';


    return 0;
}