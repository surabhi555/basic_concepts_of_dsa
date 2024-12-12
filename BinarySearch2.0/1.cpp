#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int> arr, int n, int x) {
    int start = 0;
    int end = arr.size() - 1;
    int ans = n; // Default value if no such element exists
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= x) {
            ans = mid; // Update answer to current mid
            end = mid - 1; // Continue searching in the left part
        } else {
            start = mid + 1; // Search in the right part
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 3, 3, 5, 7, 9};
    int x = 4;

    // Call lowerBound function
    int result = lowerBound(arr, arr.size(), x);

    // Print result
    if (result == arr.size()) {
        cout << "No element in the array is greater than or equal to " << x << endl;
    } else {
        cout << "The lower bound index is: " << result << ", and the element is: " << arr[result] << endl;
    }

    return 0;
}
