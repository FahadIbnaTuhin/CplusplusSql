#include <bits/stdc++.h> // practice both stack and queue at the same time, BEST

using namespace std;

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        // stack LIFO last in first out
        // 1 2 3 -> (stack): 3 2 1

        stack<int> temp;
        while(k-- > 0) { // loop won't run for 0. Run untill it is greater than 0
            temp.push(q.front());
            q.pop();
        }

        queue<int> ans;
        while(!temp.empty()) {
            ans.push(temp.top());
            temp.pop();
        }

        while(!q.empty()) {
            ans.push(q.front());
            q.pop();
        }

        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k; cin >> n >> k;
    queue<int> q;

    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        q.push(a);
    }

    Solution ob;
    queue<int> ans = ob.modifyQueue(q, k);
    while(!ans.empty()) {
        int a = ans.front();
        ans.pop();
        cout << a << " ";
    }
    cout << '\n';

    return 0;
}

// https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1