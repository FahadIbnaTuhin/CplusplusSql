#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
    long long minCost(long long arr[], long long n) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
    
        for (int i = 0; i < n; i++) {
            pq.push(arr[i]);
        }
    
        long long cost = 0;        
        while (pq.size() > 1) {
            long long first = pq.top();
            pq.pop();
            
            long long second = pq.top();
            pq.pop();
            
            long long mergedLength = first + second;
            cost += mergedLength;
            
            pq.push(mergedLength);
        }
        
        return cost;
    }
};

int main() {
    // long long n = 4;
    // long long arr[] = {4, 3, 2, 6};

    long long n = 5;
    long long arr[] = {4, 2, 7, 6, 9};

    Solution sol;
    cout << sol.minCost(arr, size(arr)) << '\n';

    return 0;
}

// https://www.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1