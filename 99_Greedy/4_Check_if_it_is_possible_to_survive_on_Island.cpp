class Solution {
public:
    int minimumDays(int S, int N, int M){
        int sundays = S / 7;
        int buyingDays = S - sundays;
        
        int ans = 0;
        int totalFood = S * M;
        
        if (totalFood % N == 0) {
            ans = totalFood / N;
        } else {
            ans = totalFood / N + 1;
        }
        
        if (ans <= buyingDays) {
            return ans;
        } else {
            return -1;
        }
    }
};

// https://www.geeksforgeeks.org/problems/check-if-it-is-possible-to-survive-on-island4922/1