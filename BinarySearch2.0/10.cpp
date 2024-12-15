#include<bits/stdc++.h>
using namespace std;
int findKRotation(vector<int>&num){
    int low=0;
    int high=num.size()-1;
    int ans=INT_MAX;
    int index=-1;
        while(low <= high){
            int mid=(low+high)/2;
            if(num[low] <= num[mid]){
                if( num[low] < ans){
                    ans=num[low];
                    index=low;
                }
                low=mid+1;
            }
            else{
                if(num[mid]<=num[high]){
                    if(num[mid]<ans){
                        ans=num[mid];
                        index=mid;
                    }
                    high=mid-1;
                }
            }
        }
        return index;
}