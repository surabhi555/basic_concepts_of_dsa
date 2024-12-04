#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i])count++;
        }
        if(nums[n-1]>nums[0])count++;
        return count <= 1;
    }
    int main() {
    vector<int> nums = {3, 4, 5, 1, 2}; // Example array

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    bool result = check(nums);

    if (result) {
        cout << "The array is a rotated sorted array." << endl;
    } else {
        cout << "The array is NOT a rotated sorted array." << endl;
    }

    return 0;}