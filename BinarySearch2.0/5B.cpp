#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int getFirstOcc(vector<int>&nums,int target){
    int start=0;
    int end=nums.size()-1;
    int first=-1;
    while(start <=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target){
            first = mid;
            end=mid-1;
        }
        else if(nums[mid] < target){
            start=mid+1;
        }
        else{//nums[mid] > target
            end=mid-1;
        }
    }
    return first;
}
int getLastOcc(vector<int>&nums,int target){
    int start=0;
    int end=nums.size()-1;
    int last=-1;
        while(start <= end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                last=mid;
                start=mid+1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
        }
        return last;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=getFirstOcc(nums,target);
        if(first==-1)return{-1,-1};
        int last=getLastOcc(nums,target);
        return{first,last};
    }
};