#include <bits/stdc++.h>

using namespace std;
 
bool cmp(const pair<int, int> &p1, const pair<int, int> &p2) {
    if (p1.first > p2.first) return 1;
    else if (p1.first == p2.first) return (p1.second < p2.second);
    else return 0; // if p1.first < p2.first, for passing p2 we are using 0 as a return 
}

int main() {        
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<pair<int, int>> v;

    v = {{4, 143}, {3, 120}, {4, 500}, {1, 20}};

    sort(v.begin(), v.end(), cmp);
    // sort function working style: comparing between first & second:
    // if sort function gets 0 then sort function will keep the 2nd element before the first element
    // if sort function gets 1 then sort function will keep the first element before the second. In other way, can tell it won't change the order
    // alawys remember what for return 1

    for(auto u : v) cout << u.first << " " << u.second << '\n';


    return 0;
}

// Problem: Will give some pair, first thing of the pair conveys number of problem solved in a contest
// and second thing of the pair conveys the penalty of that user. 
// We know, the player with the most problem solved is the winner. And if multiple users solve same 
// number of problem then, the player with the lowest penalty wins
// now solve 166A codeforces 