#include <bits/stdc++.h>

using namespace std;

struct Item{
    int value;
    int weight;
};

class Solution {
    public:
    // Function to get the maximum total value in the knapsack.
    static bool cmp(const pair<double, Item> &a, const pair<double, Item> &b) {
        return a.first > b.first;
    }
    
    double fractionalKnapsack(int w, Item arr[], int n) {
        vector<pair<double, Item>> perUnitValue;
        
        for (int i = 0; i < n; i++) {
            double cost = (1.0 * arr[i].value) / arr[i].weight;
            pair<double, Item> p = {cost, arr[i]};
            perUnitValue.push_back(p);
        }
        
        sort(perUnitValue.begin(), perUnitValue.end(), cmp);
        
        double max_profit = 0;
        for (int i = 0; i < n; i++) {
            if (perUnitValue[i].second.weight > w) {
                max_profit += (w * perUnitValue[i].first);
                w = 0;
                break;  // Efficient break when w is zero
            } else {
                max_profit += perUnitValue[i].second.value;
                w -= perUnitValue[i].second.weight;
            }
        }
        
        return max_profit;
    }
};

int main() {
    // int n = 10, w = 21;
    // Item arr[] = {8, 10, 2, 1, 10, 7, 1, 7, 9, 5, 7, 1, 2, 8, 6, 6, 4, 8, 9, 7};

    int n = 6, w = 24;
    Item arr[] = {1, 4, 5, 9, 7, 6, 2, 3, 7, 7, 10, 3};


    Solution sol;

    cout << sol.fractionalKnapsack(w, arr, n) << '\n';


    return 0;
}