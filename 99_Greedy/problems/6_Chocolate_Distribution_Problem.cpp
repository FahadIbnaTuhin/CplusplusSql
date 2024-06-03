#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(), a.end());
        int i = 0, j = m - 1;
        
        long long ans = LLONG_MAX;
        for (int i = 0, till = n - m + 1; i < till; i++) {
            ans = min(ans, a[i + m - 1] - a[i]);
        }

        return ans;
    } 
};

// class Solution {
//     public:
//     long long findMinDiff(vector<long long> a, long long n, long long m){
//         sort(a.begin(), a.end());
//         int i = 0, j = m - 1;
        
//         long long ans = LLONG_MAX;
//         while (j < a.size()) {
//             long long diff = a[j] - a[i];
//             ans = min(ans, diff);
//             i++;
//             j++;
//         }

//         return ans;
//     } 
// };

// Both good but 1 is more readable and straightforward. 

int main() {
    long long N = 8, M = 5;
    vector<long long> A = {3, 4, 1, 9, 56, 7, 9, 12};

    // long long N = 7, M = 3;
    // vector<long long> A = {7, 3, 2, 4, 9, 12, 56};

    Solution sol;
    cout << sol.findMinDiff(A, N, M) << '\n';

    return 0;
}

// https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1