#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;

	while(t--) {
		int n, x; cin >> n >> x;
		vector<int> arr(n);
		for(int i = 0; i < n; i++) cin >> arr[i];

		sort(arr.begin(), arr.end());
		int sz = unique(arr.begin(), arr.end()) - arr.begin();

		if (sz == x) cout << "Good" << endl;
		else if (sz < x) cout << "Bad" << endl;
	    else cout << "Average" << endl;
	}

	return 0;
}

// Time complexity: T number of case and everytime need to sort. One sort O(nlog2(n))
// so, time complexity will be = T * O(nlog2(n)) = 50 * (13000 * log2(13000)) = 8882900 = 10^6(almost)