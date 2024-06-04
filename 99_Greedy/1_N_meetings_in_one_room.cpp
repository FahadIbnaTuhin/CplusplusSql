class Solution {
public:
    static bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
        return a.second < b.second;
    }
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int, int>> v;
        
        for (int i = 0; i < n; i++) {
            pair<int, int> p = {start[i], end[i]};
            v.push_back(p);
        }
        
        sort(v.begin(), v.end(), cmp);
        
        int cnt = 1;
        int endTime = v[0].second;
        for (int i = 1; i < n; i++) {
            if (v[i].first > endTime) {
                cnt++;
                endTime = v[i].second;
            }
        }
        
        return cnt;
    }
};

// https://www.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1