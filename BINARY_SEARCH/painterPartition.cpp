#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[],int n,int m,int mid){
    int studentCount=1;
    int pageSum=0;
        for( int i=0;i<n;i++){
                if(pageSum+arr[i] <= mid){
                    pageSum+=arr[i];
                }
                else{
                    studentCount++;
                    if(studentCount > m || arr[i] > mid){
                        return false;
                    }
                    pageSum=arr[i];
                }
        }
        return true;
}
int findLargestMinDistance(int arr[],int n,int k){
    int s=0;
    int sum=0;
    int ans=-1;
    
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
        while( s <= e){
            if(isPossible(arr,n,k,mid)){
                ans=mid;
                e=mid-1;
            } else {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
}

int main(){
     int arr[2]={48,90};
    int m=2;
    int n=2;
    int pages=findLargestMinDistance(arr,2,2);
    cout << "time required " << pages<<endl;
    return 0;
}
