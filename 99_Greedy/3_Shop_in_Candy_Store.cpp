class Solution {
    public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        sort(candies, candies + N);
        
        int mini = 0;
        int buy = 0;
        int free = N - 1;
        while (buy <= free) {
            mini += candies[buy];
            buy++;
            free = free - K;
        }
        
        int maxi = 0;
        buy = N - 1;
        free = 0;
        while (free <= buy) {
            maxi += candies[buy];
            buy--;
            free = free + K;
        }
        
        return {mini, maxi};
    }
};

// https://www.geeksforgeeks.org/problems/shop-in-candy-store1145/1