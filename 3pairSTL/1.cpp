#include <bits/stdc++.h>

using namespace std;
 
struct Pair
{
    int first, second;
};


int main() {        
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    // Pair q;
    // q.first = 2;
    // q.second = 10;
    // // this built-in pair is like the same like the struct we constructed
    // pair<int, int> a; // both parameter can take any data type
    // a.first = 10;
    // a.second = 15;
 

    // pair<string, vector<int>> p;
    // pair<string, vector<int>> p;
    // p.first = "Fahad";

    // p.second = {5, 2, 1, 6};

    // // p.second.push_back(1);
    // // p.second.push_back(10);
    // // p.second.push_back(15);

    // cout << "HI" << '\n'; // debug to see how it store something

    // for(auto u : p.second) cout << u << ' ';
    // cout << '\n';

    // pair<int, int> p;
    // // p = make_pair(2, 3); // can use make_pair to store something inside p pair directly
    // p = {2, 3}; // can also use this BEST!!
    // p.first++;
    // cout << p.first << " " << p.second << '\n';

    // pair<string, vector<int>> p;
    // // p = {"shahriar", {1, 2, 3, 10}};
    // p.first = "shahriar";
    // p.second = {1, 2, 3};
    // cout << p.first << " " << p.second.size() << '\n';

    // pair<string, pair<string, int>> pis;
    // pis = {"fahad", {"faid", 20}};
    // cout << pis.first << " " << pis.second.first << " " << pis.second.second << '\n';

    // pair<int, int> p1, p2;
    // p1 = {3, 5}; 
    // p2 = {3, 6};
    // if (p1 < p2) cout << "Yes\n"; // it will compare pairwise, p1[0] = p2[0], then p1[1] = p2[1]

    // pair<int, int> p1, p2;
    // p1 = {3, 5}; 
    // p2 = {1, 19};
    // if (p1 > p2) cout << "Yes\n"; // yes because 3 > 1
    // else cout << "No\n";

    // pair<int, int> p = min(p1, p2); // as 3 > 1 so, it will not check other, p2 is the winner already
    // cout << p.first << " " << p.second << '\n';


    // vector<pair<int, int>> p;
    // p.push_back({1, 5});
    // p.push_back({2, 6});
    // p.push_back({1, 8});
    // p.push_back({3, 4});
    // p.push_back({3, 8});
    // p.push_back({2, 10});

    // // sort(p.begin(), p.end()); // At the beginning, it will compare with the pair first element, then compare pair second element
    // sort(p.rbegin(), p.rend());

    // for(auto u : p) cout << u.first << " " << u.second << '\n';
    

    // array of pair
    // pair<int, int> p[] = {{1, 5}, {2, 6}, {1, 8}, {3, 4}, {3, 8}, {2, 10}};
    // sort(p, p + 6);
    // for(auto u : p) cout << u.first << " " << u.second << '\n';


    // while sorting, data type different same or different doesn't matter, for pair, always it will compare the 
    // the pair's first element of the pair, then if the first element of the pair is same, then it will go for 
    // comparing the second one
    // vector< pair<string, int> > v;
    // v.push_back({"shahriar", 21});
    // v.push_back({"momo", 13});
    // v.push_back({"sharif", 34});
    // v.push_back({"shahriar", 45});
    // v.push_back({"sharif", 41});

    // sort(v.begin(), v.end());

    // for(auto u : v) cout << u.first << " " << u.second << '\n';


    // unique
    // vector< pair<string, int> > v;
    // v.push_back({"shahriar", 21});
    // v.push_back({"momo", 13});
    // v.push_back({"sharif", 34});
    // v.push_back({"shahriar", 45});
    // v.push_back({"sharif", 41});
    // v.push_back({"shahriar", 21});
    // v.push_back({"momo", 13});

    // sort(v.begin(), v.end());
    // int Sz = unique(v.begin(), v.end()) - v.begin();

    // for(int i = 0; i < Sz; i++) cout << v[i].first << " " << v[i].second << '\n';

    pair<int, int> p; 
    cin >> p.first >> p.second; 

    cout << p.first << " " << p.second << '\n'; // each of them is like a variable, can do anything 


    
    return 0;
}