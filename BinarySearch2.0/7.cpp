#include<bits/stdc++.h>
using namespace std;
int search(vector<int>&nums,int target){
    int low=0;
    int high=nums.size()-1;
    while(low <= high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[low]<=nums[mid]){
            //left part sorted
            if(nums[low]<=target && target <=nums[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            //right part sorted
            if(nums[mid]<=target && target <=nums[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}