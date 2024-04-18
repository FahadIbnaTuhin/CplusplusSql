#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m; cin >> n >> m;
    priority_queue<int> q;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        q.push(x);
    }

    int sum = 0;
    while(m--) {
		if (!q.empty()) {
			int highest = q.top();
			sum += highest;
			q.pop();
			--highest;
			if (highest > 0) q.push(highest);
		}
    }

    cout << sum << '\n';

    return 0;
}

// https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-champions-league/