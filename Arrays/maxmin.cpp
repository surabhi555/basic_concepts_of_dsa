#include<bits/stdc++.h>
using namespace std;
int getMax(int arr[],int size){
    int max=0;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int getMin(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;

}
int main(){
    int arr[]={4,7,9,20,5,90,34,21};
    int max=getMax(arr,8);
    cout << "max element is "<<max<<endl;
    int min=getMin(arr,8);
    cout << "min element is "<<min<<endl;

    return 0;
}