#include<bits/stdc++.h>
using namespace std;

//time complexity:logn
int binarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
   while(start<end){
         if(arr[mid]==key){
        return mid;
            }
    else if(arr[mid]>key){
       start=mid+1;
       

    }
    else{
        end=mid-1;
        
    }
    mid=(start+end)/2;
   }
   return -1;

}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
    cout <<endl;
}

int main(){
    int even[10]={20,40,60,70,80,90,100,120,130,140};
    int key;
    cin >> key;
    binarySearch(even,10,key);
    printArray(even,10);
    return 0;
}