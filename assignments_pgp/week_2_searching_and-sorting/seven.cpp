/*
Given an array arr of integers, find all the elements that occur more than once in the array.
 Return the result in ascending order. If no element repeats, return an empty array.
Examples:
Input: arr[] = [2, 3, 1, 2, 3]
Output: [2, 3] 
Explanation: 2 and 3 occur more than once in the given array.*/
///================solution============================
#include<bits/stdc++.h>
using namespace std;
vector<int> findDuplicates(vector<int>& arr) {
        unordered_map<int,int>freq;
        vector<int>result;
            for(int i=0;i<arr.size();i++){
                freq[arr[i]]++;
            }
            for(auto& pair:freq){
                int key=pair.first;
                int value=pair.second;
                if(value > 1){
                    result.push_back(key);
                }
            }
            sort(result.begin(),result.end());
            return result;
    }
    int main(){
        vector<int>arr = {2, 3, 1, 2, 3};
        vector<int> res=findDuplicates(arr);
        for(int i=0;i<res.size();i++){
            cout << res[i]<<endl;
        }
        return 0;
    }