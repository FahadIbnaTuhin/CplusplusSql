#include <bits/stdc++.h>

using namespace std;

int calPoints(vector<string>& operations) {
    stack<int> st;

    for(auto u : operations) {
        if (u == "C")  {
            if (!st.empty()) {
                st.pop();
            }
        } else if (u == "D") {
            st.push(st.top() * 2);
        } else if (u == "+") {
            int last1 = st.top();
            st.pop();
            int last2 = st.top();
            st.push(last1);
            st.push(last1 + last2);
        } else {
            st.push(stoi(u));
        }
    }

    int total_sum = 0;
    while(!st.empty()) {
        total_sum += st.top();
        st.pop();
    }

    return total_sum;
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    vector<string> arr = {"5", "2", "C", "D", "+"};
    int result = calPoints(arr);

    cout << result << '\n';

    return 0;
}

// https://leetcode.com/problems/baseball-game/editorial/