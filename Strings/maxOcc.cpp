#include<bits/stdc++.h>
using namespace std;
char getMaxOccuringChar(string& s) {
      
        // int arr[26]={0};
        int arr[26]={0};
        
        //count
        int number=0;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
             number=ch-'a';
             arr[number]++;
        }
        int maxi=-1;
        int ans=0;
        for(int i=0;i<26;i++){
            if(maxi < arr[i]){
                ans=i;
                maxi=arr[i];
            }
        }
        return 'a'+ans;
    }
    int main() {
    // Test cases
    string input1 = "examplestring";
    string input2 = "hello";
    string input3 = "character";

    // Call the function and print the results
    cout << "Input: " << input1 << ", Most occurring character: " << getMaxOccuringChar(input1) << endl;
    cout << "Input: " << input2 << ", Most occurring character: " << getMaxOccuringChar(input2) << endl;
    cout << "Input: " << input3 << ", Most occurring character: " << getMaxOccuringChar(input3) << endl;

    return 0;
}
//done