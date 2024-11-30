/* Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return -1
*/



#include<bits/stdc++.h>
using namespace std;
int getPivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
        while(s < e){
            if(arr[mid] >= arr[0]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=(s+e)/2;
        }
        return s;
}
int main(){
int even[5]={3,8,10,17,1};
int index=getPivot(even,5);
cout << "Pivot is present at index "<< index <<endl;
    return 0;
}