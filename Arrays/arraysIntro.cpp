#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    //printing the array
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
}


int main(){
    //declare
    int num[10];
    //acessing array
    // cout <<num[0]<<" value at 0 index";

    int array[3]={5,7,11};
    cout << array[2]<<endl;

    int third[15]={2,7};
    //print the array
    int n=15;
        for(int i=0;i<n;i++){
            cout << third[i] <<" ";
        }

    //calling function 
    printArray(third,15);

    //char array initialisation
    char ch[5]={'a','b','c','d','e'};
    cout <<ch[3]<<" ";



    return 0;
}