#include <bits/stdc++.h>

using namespace std;

int main() {        
    ios::sync_with_stdio(false);
    cin.tie(0);
    // Stack Style: LIFO - Last In First Out
    // 1 2 3 -> (stack): 3 2 1 (like reverse)

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    // cout << st.top() << '\n';
    // st.pop(); // will delete the top
    // cout << st.top() << '\n';

    // cout << st.size() << '\n';

    // To print all the elements of stack
    // while(!st.empty()) { // can also use while (s.size() != 0) {
    //     cout << st.top() << '\n';
    //     st.pop();
    // }

    return 0;
}