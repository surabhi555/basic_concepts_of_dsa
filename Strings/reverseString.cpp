#include<bits/stdc++.h>
using namespace std;
 void reverseString(vector<char>& s) {
       int st=0;
       int e=s.size()-1;
       while(st < e){
       swap(s[st++],s[e--]); 
       } 
    }
int main() {
    vector<char> s = {'h', 'e', 'l', 'l', 'o'}; // Example string

    cout << "Original string: ";
    for (char c : s) {
        cout << c;
    }
    cout << endl;

    reverseString(s);

    cout << "Reversed string: ";
    for (char c : s) {
        cout << c;
    }
    cout << endl;

    return 0;
}