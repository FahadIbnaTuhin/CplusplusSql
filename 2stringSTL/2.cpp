#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // vector<string> v;

    // v.push_back("shahriar");
    // v.push_back("shahriar");
    // v.push_back("momo");
    // v.push_back("momo");
    // v.push_back("sharif");
    // v.push_back("sharif");

    // // sort(v.begin(), v.end()); // after sorting, unique is recommand as it takes then lowest time which is O(n)

    // int Sz = unique(v.begin(), v.end()) - v.begin();

    // cout << Sz << endl;
    // for(int i = 0; i < Sz; i++) cout << v[i] << '\n';
    
    // int a = 123;
    // string s = to_string(a);
    // s[0] = '2';
    // cout << s << '\n';

    // string s = "345";
    // int a = stoi(s); // stoi means string to integer
    // cout << a << '\n';
    // a++;
    // cout << a << '\n';

    // char c = 'A';
    // if (isupper(c)) cout << "Yes\n";
    // else cout << "No\n";

    char c = ' ';
    // if (isspace(c)) cout << "Yes\n";
    // else cout << "No\n";

    // char c = 'b';
    // c = toupper(c);
    // cout << c << endl;

    // string name = "fahSimAad";
    // // name.erase(name.begin() + 3, name.begin() + 7);
    // name.erase(name.begin() + 3, name.end() - 2);
    // cout << name << '\n';


    // string s = "shahriar ";
    // string t = "gada alam gada";
    
    // copy(t.begin() + 5, t.begin() + 9, back_inserter(s)); // tp add t at the end of the arr
    // cout << s << '\n';

    // To print without any particular thing[repeated also]
    // string s = "asdfaaafgaaa";
    // s.erase(remove(s.begin(), s.end(), 'a'), s.end());
    // cout << s << '\n';


    // To check if a substring is inside a string or not
    // string s = "shahriar";
    
    // if (s.find("ria") != -1) cout << "Sub string found" << '\n';
    // else cout << "Not found\n";


    // '5' - '0' = 5(int). same way 'c' - 'a' = 2 because abc here a, b, c have 0, 1, 2 index
    // int c = 'c' - 'a'; // 99 - 97 = 2 [ascii]
    // cout << c << '\n';

    // Lexogeek Hackerearth
    // string s = "abcd";
    // bool np = next_permutation(s.begin(), s.end()); // return 1 if it has the next permuation, 0 otherwise
    // cout << s << '\n';

    // string s = "gfc"; 
    // bool np = next_permutation(s.begin(), s.end()); // if no next then 0 & it will sort the original
    // cout << np << " " << s << '\n';


    // To print all the permutations: 
    // string s = "abcd";
    // do {
    //     cout << s << '\n'; // here abcd itself is also a permutation
    // } while(next_permutation(s.begin(), s.end()));

    // To stop after getting any permutaion 
    // string s = "abcd";
    // do {
    //     cout << s << '\n'; 
    //     if (s == "bacd") break;
    // } while(next_permutation(s.begin(), s.end()));


    // next_permutation with vector
    // vector<int> v = {1, 2, 3};
    // do {
    //     for(auto u : v) cout << u << " ";
    //     cout << '\n';
    // } while (next_permutation(v.begin(), v.end()));


    // next_permutation with vector
    int arr[] = {1, 2, 3};
    do {
        for(auto u : arr) cout << u << " ";
        cout << '\n';
    } while (next_permutation(arr, arr + 3));

    return 0;
}
