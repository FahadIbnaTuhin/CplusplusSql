#include <bits/stdc++.h>

using namespace std;

struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};

class Solution 
{
    public:
    static bool cmp(const Job &a, const Job &b) {
        return a.profit > b.profit;
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(vector<Job> arr, int n) 
    { 
        sort(arr.begin(), arr.end(), cmp);
        
        int maxDeadline = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxDeadline = max(maxDeadline, arr[i].dead);
        }
        
        vector<int> schedule(maxDeadline + 1, -1);
        
        int count = 0, maxProfit = 0;
        for (int i = 0; i < n; i++) {
            for (int k = arr[i].dead; k > 0; k--) {
                if (schedule[k] == -1) {
                    count++;
                    maxProfit += arr[i].profit;
                    schedule[k] = arr[i].id;
                    break;
                }
            }
        }
        
        return {count, maxProfit};
    } 
};

int main() {
    int n = 4;
    vector<Job> v = {{1, 4, 20}, {2, 1, 10}, {3, 1, 40}, {4, 1, 30}};

    Solution sol;
    vector<int> ans = sol.JobScheduling(v, n);
    cout << ans[0] << ' ' << ans[1] << '\n';

    return 0;
}

// https://www.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1