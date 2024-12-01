#include<bits/stdc++.h>
using namespace std;

/*
Given an array arr[], the task is to reverse the array. 
Reversing an array means rearranging the elements such that the first element becomes
 the last, the second element becomes second last and so on.
*/
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