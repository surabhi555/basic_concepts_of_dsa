#include<bits/stdc++.h>
using namespace std;

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            int element=nums1[i];
            for(int j=0;j<nums2.size();j++){
                if(nums2[j]==element){
    if (find(ans.begin(), ans.end(), element) == ans.end())

                    {ans.push_back(element);}
                    nums2[j]=-1234;
                    break;

                }
            }
        }
        return ans;
        
    }
int main(){
    // Input arrays
    int num1[] = {1, 2, 2, 1};
    int num2[] = {2, 2};
    int size1 = sizeof(num1) / sizeof(num1[0]);
    int size2 = sizeof(num2) / sizeof(num2[0]);

    // Convert arrays to vectors
    vector<int> nums1(num1, num1 + size1);
    vector<int> nums2(num2, num2 + size2);

    // Call the intersection function
    vector<int> result = intersection(nums1, nums2);

    // Print the result
    cout << "Intersection: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
}