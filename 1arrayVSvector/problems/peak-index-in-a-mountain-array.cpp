class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i = max_element(arr.begin(), arr.end()) - arr.begin();
        return i;
    }
};

// vector<int> arr = {1, 2, 3, 8, 5, 3, 2, 1};
// max_element(arr.begin(), arr.end()) will return the maximum iterator "begin() + 3". we can call this address 
// for this it will return: 
// begin() + 3 = address
// => 3 = address - begin()
