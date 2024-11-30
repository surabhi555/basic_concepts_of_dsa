/* You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.
*/




#include<bits/stdc++.h>
using namespace std;
int firstOcc(int arr[],int n,int key){
    int ans=0;
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
        while(start<=end){
            if(arr[mid]==key){
                ans=mid;
                end=mid-1;
            }
            else if(arr[mid]<key){
               start=mid+1;
            }
            else if(arr[mid]>key){
                end=mid-1;
            }
            mid=(start+end)/2;
        }
        return ans;

}
int main(){
    int even[8]={2,2,3,3,3,3,3,5};
    int index=firstOcc(even,8,3);
    cout << "first occ of 3 is at index " <<index;
    return 0;
}