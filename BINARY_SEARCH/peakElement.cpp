#include<bits/stdc++.h>
using namespace std;
int peakIndex(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
        while(s < e){
            if(arr[mid] <arr[mid+1]){
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
    int even[4]={3,4,5,1};
    int index=peakIndex(even,4);
    cout << " peak index is at "<<index;
    return 0;
}