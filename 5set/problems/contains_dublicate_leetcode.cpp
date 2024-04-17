#include <bits/stdc++.h>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    set<int> arr;

    for(auto u : nums) {
        if (arr.count(u)) {
            return true;
        } else {
            arr.insert(u);
        }
    }

    return false;

    // set<int> arr; // less efficient

    // for(auto u : nums) arr.insert(u);

    // if (arr.size() == nums.size()) return false;
    // return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> nums = {1, 2, 3, 1};

    cout << boolalpha << containsDuplicate(nums) << '\n';

    return 0;
}

// https://leetcode.com/problems/contains-duplicate/