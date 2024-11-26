#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start < end){
        swap(arr[start++],arr[end--]);
    }

}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }
    cout <<endl;
}
int main(){
    int arr[]={2,4,6,8,10};
    cout <<"before reverse";
    printArray(arr,5);
    reverse(arr,5);
    cout <<"after reverse";
    printArray(arr,5);
    return 0;
}