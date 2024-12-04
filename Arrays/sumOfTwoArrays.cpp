#include<bits/stdc++.h>
using namespace std;
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i=n-1;
	int j=m-1;
	int carry=0;
	vector<int>ans;
		while(i>=0 && j>=0){
			int val1=a[i];
			int val2=b[j];
			int sum=val1+val2+carry;
			carry=sum/10;
			sum=sum%10;
			ans.push_back(sum);
			i--;
			j--;
		}
		while(i>=0){
			int val1=a[i];
			int sum=val1+carry;
			carry=sum/10;
			sum=sum%10;
			ans.push_back(sum);
			i--;
		}
		while(j>=0){
			int val1=b[j];
			int sum=val1+carry;
			carry=sum/10;
			sum=sum%10;
			ans.push_back(sum);
			j--;
		}
		while(carry!=0){
			int sum=carry;
			carry=sum/10;
			sum=sum%10;
			ans.push_back(sum);
		}
		reverse(ans.begin(),ans.end());
		return ans;

}
int main() {
    vector<int> a = {9, 9, 9}; // Example array 1
    vector<int> b = {1};       // Example array 2

    cout << "Array 1: ";
    for (int num : a) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Array 2: ";
    for (int num : b) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> result = findArraySum(a, a.size(), b, b.size());

    cout << "Sum: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
