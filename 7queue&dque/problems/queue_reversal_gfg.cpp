#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        // add code here.
        stack<int> st;
        while(!q.empty()) {
            st.push(q.front());
            q.pop();
        }
        
        queue<int> qq;
        while(!st.empty()) {
            qq.push(st.top());
            st.pop();
        }
        
        return qq;
    }
};

// https://www.geeksforgeeks.org/problems/queue-reversal/1