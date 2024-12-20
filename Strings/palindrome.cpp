/*
A phrase is a palindrome if, after converting all uppercase letters into 
lowercase letters and removing all non-alphanumeric characters, it reads the same
forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.
Example 1:
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.*/
//solution
#include<bits/stdc++.h>
using namespace std;
int getLength(string s){
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        count++;
    }
    return count;
}bool isPalindrome(string s) {
    int len=getLength(s);
    int st=0;
    int e=len-1;
        while(st < e){
            if (!isalnum(s[st])) {
                st++;
            } else if (!isalnum(s[e])) {
                e--;
            }
            else{
                if(tolower(s[st])!=tolower(s[e])){
                    return false;
                }
                st++;
                e--;
            }
            
        }
        return true;
    }
    //done

    int main() {
    

    string s1 = "A man, a plan, a canal: Panama";
    string s2 = "race a car";

    cout << "Is \"" << s1 << "\" a palindrome? " << (isPalindrome(s1) ? "Yes" : "No") << endl;
    cout << "Is \"" << s2 << "\" a palindrome? " << (isPalindrome(s2) ? "Yes" : "No") << endl;

    return 0;
}
//done