/*
You are given a sorted array consisting of only integers where every 
element appears exactly twice, except for one element which appears exactly once.
Return the single element that appears only once.
Your solution must run in O(log n) time and O(1) space.
Example 1:

Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
Example 2:

Input: nums = [3,3,7,7,10,11,11]
Output: 10*/
///solution
#include <bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int>& nums) {
       int start=0;
       int end=nums.size()-1;
       int mid=start+(end-start)/2;
       while( start < end){
        if(mid%2==1)mid--;
        if(nums[mid]==nums[mid+1]){
            start=mid+2;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
       } 
       return nums[start];
    }
    int main() {
    // Test case
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5, 5};  // Example array
    

    // Call the function and output the result
    cout << "The single element is: " << singleNonDuplicate(nums) << endl;

    return 0;
}