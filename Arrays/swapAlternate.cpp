#include<bits/stdc++.h>
using namespace std;
void swapAlternate(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }
    cout <<endl;
}
int main(){
    int even[8]={3,5,1,7,9,4,20,67};
    swapAlternate(even,8);
    printArray(even,8);
    int odd[5]={11,55,87,90,35};
    swapAlternate(odd,5);
    printArray(odd,5);
    
    return 0;
}