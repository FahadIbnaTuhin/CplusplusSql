#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    static bool cmp(const tuple<int, int, int> &a, const tuple<int, int, int> &b) {
        return get<1>(a) < get<1>(b);
    }
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        vector<tuple<int, int, int>> v;
        
        for (int i = 0; i < N; i++) {
            v.push_back(make_tuple(S[i], F[i], i + 1));
        }
        
        sort(v.begin(), v.end(), cmp);
        
        vector<int> ans;
        int endTime = get<1>(v[0]);
        ans.push_back(get<2>(v[0]));
        
        for (int i = 1; i < N; i++) {
            if (get<0>(v[i]) > endTime) {
                ans.push_back(get<2>(v[i]));
                endTime = get<1>(v[i]);
            }   
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    int N = 10;
    vector<int> S = {12, 6, 16, 12, 6, 9, 16, 6, 17, 5};
    vector<int> F = {17, 13, 16, 18, 17, 10, 18, 12, 18, 11};

    Solution sol;
    vector<int> ans = sol.maxMeetings(N, S, F);
    for (auto u : ans) {
        cout << u << ' ';
    }
    cout << '\n';

    return 0;
}

// https://www.geeksforgeeks.org/problems/maximum-meetings-in-one-room/1