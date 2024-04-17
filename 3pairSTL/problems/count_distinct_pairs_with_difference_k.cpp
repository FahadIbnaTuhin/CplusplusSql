#include <bits/stdc++.h>

using namespace std;
 
int TotalPairs(vector<int>nums, int k){
    // Code here
    vector< pair<int, int> > arr;
    for(int i = 0; i < nums.size(); i++) {
        for(int j = 0; j < nums.size(); j++) {
            if (i != j && nums[i] - nums[j] == k) {
                arr.push_back({nums[i], nums[j]});
            }
        }
    }	   
    
    sort(arr.begin(), arr.end());
    int Sz = unique(arr.begin(), arr.end()) - arr.begin();

    return Sz;
}

int main() {        
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int result = TotalPairs({1, 5, 3}, 2);
    cout << result << '\n';

    return 0;
}

// pair cann't create with it's own index. Here, told to take two pair of elements, so a[i] = a[j] but i != j. so a[i] & a[j] can be pair but a & i cann't pair 
