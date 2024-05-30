#include <bits/stdc++.h>

using namespace std;

// Two sum || - Input array is sorted
// Given an array of integers that is already sorted in ascending order, find two numbers such 
// that they add up to a specific target number.
vector<int> twoSum(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size() - 1;
    vector<int> result(2, -1);

    while (start < end) {
        int sum = nums[start] + nums[end];
        if (sum == target) {
            result[0] = start + 1;
            result[1] = end + 1;
            break;
        } else if (sum < target) {
            start++;
        } else {
            end--;
        }
    }

    return result;
}
// similar like this: Opposite directional
// The function twoSum should return indices of the two numbers such that they add up to the target, 
// where index1 must be less than index2


// Equi-directional
// Given an array of integers n and a positive number k, find the maximum sum of any contiguous subarray of size k
int getMaxSumSubArrayOfSizeKM2(const vector<int>& A, int k) {
    int windowSum = 0, maxSum = 0;
    int start = 0, end = 0;

    // Calculate sum of first 'k' elements
    while(end < k) {
        windowSum += A[++end];
    }

    maxSum = windowSum;

    // Move the window and update maxSum
    while(end < A.size()) {
        windowSum += A[++end] - A[++start];
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

int main() {
    // 1st One
    // vector<int> nums = {-3, 2, 3, 3, 6, 8, 15};
    // int target = 6;
    // vector<int> indices = twoSum(nums, target);

    // if (indices[0] != -1 && indices[1] != -1) {
    //     cout << "Indices: " << indices[0] << " and " << indices[1] << endl;
    // } else {
    //     cout << "No two sum solution found." << endl;
    // }


    // 2nd One
    vector<int> A = {1, 9, -1, -2, 7, 3, -1, 2};
    int k = 4;
    int maxSum = getMaxSumSubArrayOfSizeKM2(A, k);

    cout << "Maximum sum of subarray of size " << k << ": " << maxSum << endl;

    
    return 0;
}

// What is Two Pointer Technique?
// Two pointer technique is normally used for searching and it uses two pointer in one loop over the
// given data structure. This is quite common approach which is used to solve coding problems, 
// mostly related to strings, arrays and linked lists.

// Why you must know it?
// In order to use two pointers, most of the times the data structure needs to be ordered in some 
// way, which helps us to reduce the time complexity from O(n2) or O(n3) to O(n) of just one loop 
// with two pointers and search each item just one time.
// So depending on whether the input string/array is sorted or not, the two-pointer method can take 
// O(nlogn) time complexity or even better which is O(n).

// Variants of two pointer
// Opposite directional : One pointer starts from the beginning while the other pointer starts 
// from the end. They move toward each other until they both meet or some condition satisfy.
// Equi-directional: Both start from the beginning, One slow-runner and the other fast-runner.

// Coding Problems based On Opposite directional :
// 167. Two Sum II - Input array is sorted
// 125. Valid Palindrome
// 283. Move Zeroes
// 344. Reverse String
// 27. Remove Element
// Coding Problems based On Equi-directional:
// Find the maximum sum of any contiguous subarray of size k. Find middle node of a linked list
// 141. Linked List Cycle
// 3. Longest Substring Without Repeating Characters 26. Remove Duplicates from Sorted Array
