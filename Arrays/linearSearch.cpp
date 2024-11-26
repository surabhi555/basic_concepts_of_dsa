#include<bits/stdc++.h>
using namespace std;
bool Search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={10,20,-8,9,45,13,56,76,42,98};
    int n=10;
    int key;
    cout <<"enter key";
    cin >>key;
    bool found=Search(arr,n,key);
    if(found==true){
        cout <<"key is found";
    }
    else{
        cout <<"key is not found";
    }

    return 0;
}