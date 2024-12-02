//=========PS==============
/*

Given an array of integers nums sorted in non-decreasing order, find the starting and
 ending position of a given target value.
If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.
Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]*/
//===========solution==============
#include<bits/stdc++.h>
using namespace std;
int firstElement(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                ans = mid;
                end = mid - 1;  // Search for the first occurrence
            } else if (target < nums[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
int lastElement(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                ans = mid;
                start = mid + 1;  // Search for the last occurrence
            } else if (target < nums[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
int main() {
    

    // Example input
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    int first = firstElement(nums, target);
    int last = lastElement(nums, target);
    cout << "First occurrence of " << target << " is at index " << first << endl;
    cout << "Last occurrence of " << target << " is at index " << last << endl;
    return 0;


    

   
}


