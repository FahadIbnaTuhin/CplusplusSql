#include <bits/stdc++.h>

using namespace std;

int main() {        
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    // queue style: FIFO - First in first out. 
    // 1 2 3 -> (queue): 1 2 3

    queue<int> q; // time complexity of all kinds of queue is O(1)
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    // cout << q.front() << '\n';
    // q.pop(); // queuse fifo style, so here pop() will delete that one which comes first
    // cout << q.front() << '\n';

    // To print all of the item of queue
    // while(!q.empty()) {
    //     cout << q.front() << '\n';
    //     q.pop();
    // }

    // cout << q.size() << '\n';


    // queue implemention places: 1) dfs implementation(graph theory)

    return 0;
}