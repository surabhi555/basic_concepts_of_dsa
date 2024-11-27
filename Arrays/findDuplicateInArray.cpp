#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>&arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<=arr.size();i++){
        ans=ans^i;
    }
    return ans;
}

int main(){
    vector<int> arr = {3, 3, 3, 3, 3};

    // Call the function and store the result
    int duplicate = findDuplicate(arr);

    // Output the result
    cout << "The duplicate element is: " << duplicate << endl;

    return 0;
}