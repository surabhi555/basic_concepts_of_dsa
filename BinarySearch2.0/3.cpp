#include <iostream>
#include <vector>
using namespace std;

// searchInsert function
int searchInsert(vector<int>& arr, int m)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans = arr.size();
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= m) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return ans;
}

// Main function
int main() {
    vector<int> arr = {1, 3, 5, 6};  // Sample input array
    int m = 5;  // Element to search for
    int result = searchInsert(arr, m);
    cout << "The position to insert " << m << " is: " << result << endl;
    return 0;
}
//done