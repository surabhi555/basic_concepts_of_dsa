#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int s,int e){
    //calculate mid
    int mid=(s+e)/2;
    //two arrays with half the lenght of present
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];
    //copy values
    int mainArray=s;
    for(int i=0;i<len1;i++){
       first[i]=arr[mainArray++];
    }
    mainArray=mid+1;
    for(int i=0;i<len2;i++){
       second[i]=arr[mainArray++];
    }
    //merge two arrays
    int i=0,j=0,k=s;
    while(i <len1 && j<len2){
        if(first[i]<second[j]){
            arr[k++]=first[i++];
        }
        else{
            arr[k++]=second[j++];
        }
    }
    while(i<len1){
        arr[k++]=first[i++];
    }
    while(j<len2){
        arr[k++]=second[j++];
    }
    delete[]first;
    delete[]second;
}


void mergeSort(int arr[],int s,int e){
    //base case
    if(s >= e){
        return;
    }
    int mid=(s+e)/2;
    //left part sorted
    mergeSort(arr,s,mid);

    //right part sorted
    mergeSort(arr,mid+1,e);
    //divide is completed now we have to merge it
    merge(arr,s,e);
}



int main(){
    int arr[5]={2,5,1,6,9};
    int n=5;
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
    return 0;
}