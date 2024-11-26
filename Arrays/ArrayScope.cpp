#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    //in the print function
    arr[0]=12000;
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
    //going back to main function
}
int main(){
    int arr[3]={1,2,3};
    for(int i=0;i<3;i++){
        cout << arr[i] <<" ";
    }
    cout<<endl;
    printArray(arr,3);
    return 0;
}