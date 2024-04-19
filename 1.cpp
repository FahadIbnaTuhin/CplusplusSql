#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // priority key will serve the beggest value first of all O(log2(n))   
    // priority_queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.push(2);
    // q.push(13);
    // q.push(5);

    // cout << q.top() << '\n'; // 14
    // q.pop();
    // cout << q.top() << '\n';

    // cout << q.size() << '\n';

    // while(!q.empty()) {
    //     cout << q.top() << '\n';
    //     q.pop();
    // }

    // similar to multiset

    // priority_queue<int, vector<int>, greater<int>> j; // to change the priority order smaller to bigger
    // j.push(1);
    // j.push(2);
    // j.push(2);
    // j.push(13);
    // j.push(5);

    // while(!j.empty()) {
    //     cout << j.top() << '\n';
    //     j.pop();
    // }

    // priority_queue< pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > v;
    // v.push({1, 2});
    // v.push({2, 3});
    // v.push({2, 4});
    // v.push({4, 4});
    // v.push({3, 4});

    // while(!v.empty()) {
    //     cout << v.top().first << " " << v.top().second << '\n';
    //     v.pop();
    // }


    // problem solve high and penalty low - Contest Problem - Multiset alternative
    // In default, it returns big to small, we need big to small for the first and vice-versa for the second
    // as we need small value for the second. like multiset, here we will minus the second one but using multiset,
    // we minused the first one. But here second one because by default it will give us big to small. So if we minus 
    // second one, it will work perfectly to give us small to big
    priority_queue<pair<int, int>> v;
    v.push({1, -2});
    v.push({1, -2});
    v.push({2, -3});
    v.push({2, -4});
    v.push({4, -4});
    v.push({3, -4});

    while(!v.empty()) {
        // cout << v.top().first << " " << v.top().second << '\n';
        cout << v.top().first << " " << v.top().second * - 1 << '\n'; // to convert second item now in positive
        v.pop();
    }
    
    return 0;
}