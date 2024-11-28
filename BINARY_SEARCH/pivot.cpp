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