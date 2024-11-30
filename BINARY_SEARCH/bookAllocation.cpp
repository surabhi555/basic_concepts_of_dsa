/*Ayush is studying for ninjatest which will be held after 'N' days, And to score good marks he has to study 'M' chapters and the ith chapter requires TIME[i] seconds to study. The day in Ayush’s world has 100^100 seconds. There are some rules that are followed by Ayush while studying.

1. He reads the chapter in a sequential order, i.e. he studies i+1th chapter only after he studies ith chapter.

2. If he starts some chapter on a particular day he completes it that day itself.

3. He wants to distribute his workload over 'N' days, so he wants to minimize the maximum amount of time he studies in a day.

Your task is to find out the minimal value of the maximum amount of time for which Ayush studies in a day, in order to complete all the 'M' chapters in no more than 'N' days.

For example
*/

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


int allocateBooks(int arr[],int n,int m){
    int s=0;
    int sum=0;
    int ans=-1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
        while( s <= e){
            if(isPossible(arr,n,m,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;


}

int main(){
    int arr[5]={7,2,5,10,8};
    int m=2;
    int n=5;
    int pages=allocateBooks(arr,5,2);
    cout << "pages allocated " << pages<<endl;
    return 0;
}