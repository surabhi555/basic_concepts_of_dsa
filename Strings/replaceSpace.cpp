/*
You have been given a string 'STR' of words.
 You need to replace all the spaces between words with “@40”.*/
 #include <bits/stdc++.h>
using namespace std; 
string replaceSpaces(string &str){
	string temp;
	for(int i=0;i<str.length();i++){
		if(str[i]==' '){
			temp+="@40";
		}
		else{
			temp.push_back(str[i]);
		}
	}
	return temp;
}
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);  // Input a string with spaces
    string result = replaceSpaces(input);
    cout << "Original String: " << input << endl;
    cout << "Modified String: " << result << endl;
    return 0;
}
//done