#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
  int getFirstOcc(vector<int>&arr,int target){
      int start=0;
      int end=arr.size()-1;
      int first=-1;
        while(start <= end){
            int mid=start+(end-start)/2;
            if(arr[mid]==target){
                first=mid;
                end=mid-1;
            }
            else if(arr[mid] < target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return first;
  }
  int getLastOcc(vector<int>&arr,int target){
      int start=0;
      int end=arr.size()-1;
      int last=-1;
        while(start <= end){
            int mid=start+(end-start)/2;
            if(arr[mid]==target){
                last=mid;
                start=mid+1;
                }
                else if(arr[mid]<target){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
        }
        return last;
  }
    int countFreq(vector<int>& arr, int target) {
        int first=getFirstOcc(arr,target);
        if(first==-1)return 0;
        int last=getLastOcc(arr,target);
        int count=last-first+1;
        return count;
    }
};
//done