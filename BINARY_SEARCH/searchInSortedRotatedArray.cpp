#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int getPivot(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;
        while (s < e) {
            int mid = s + (e - s) / 2; 
            if (nums[mid] > nums[e]) { 
                s = mid + 1;
            } else { 
                e = mid;
            }
        }
        return s; 
    }

    int binarySearch(vector<int>& nums, int s, int e, int target) {
        while (s <= e) {
            int mid = s + (e - s) / 2; 
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return -1; 
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = getPivot(nums);

        if (target >= nums[pivot] && target <= nums[n - 1]) {
            return binarySearch(nums, pivot, n - 1, target);
        } else {
            return binarySearch(nums, 0, pivot - 1, target);
        }
    }
};

int main() {
    
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2}; 
    int target = 0;                         

    
    Solution sol;

    
    int result = sol.search(nums, target);

   
    if (result != -1) {
        cout << "Target " << target << " found at index " << result << "." << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }

    return 0;
}
