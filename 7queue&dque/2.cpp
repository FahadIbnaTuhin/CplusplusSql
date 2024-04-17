#include <bits/stdc++.h> // practice both stack and queue at the same time, BEST

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // deque: same like euque but you can push and pop from both side using deque
    // complexity for all deque O(1)
    deque<int> dq;

    dq.push_front(1);
    dq.push_front(2); 
    dq.push_front(3);
    dq.push_back(4); 
    dq.push_back(5); 
    // 3 2 1 4 5

    cout << dq.front() << " " << dq.back() << '\n';
    dq.pop_front();
    cout << dq.front() << " " << dq.back() << '\n';
    dq.pop_back();
    cout << dq.front() << " " << dq.back() << '\n';

    cout << dq.size() << " " << boolalpha << dq.empty() << '\n';

    return 0;
}