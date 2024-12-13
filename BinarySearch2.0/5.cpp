#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int getLowerBound(vector<int>&nums,int target){
    int start=0;
    int end=nums.size()-1;
    int ans=-1;
    while(start <=end){
        int mid=start+(end-start)/2;
        if(nums[mid]>=target){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
int getUpperBound(vector<int>&nums,int target){
    int start=0;
    int end=nums.size()-1;
    int ans=-1;
    while(start <=end){
        int mid=start+(end-start)/2;
        if(nums[mid]>target){
            
            end=mid-1;
            
        }
        else{
           
           if (nums[mid] == target)ans=mid;
           start=mid+1;

            
        }
    }
    return ans;

}
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=getLowerBound(nums,target);
       
        if(low == -1 || nums[low] != target)return {-1,-1};
         int upper=getUpperBound(nums,target);
            return{low,upper};
    }
};
//done