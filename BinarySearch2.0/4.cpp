#include <iostream>
#include <vector>
using namespace std;

// getFloor function
int getFloor(vector<int>& a, int n, int x) {
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (a[mid] <= x) {
            ans = a[mid];
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

// getCeil function
int getCeil(vector<int>& a, int n, int x) {
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (a[mid] >= x) {
            ans = a[mid];
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

// getFloorAndCeil function
pair<int, int> getFloorAndCeil(vector<int>& a, int n, int x) {
    int floor = getFloor(a, n, x);
    int ceil = getCeil(a, n, x);
    return {floor, ceil};
}

// Main function
int main() {
    vector<int> arr = {1, 3, 8, 10, 12};  // Sorted array
    int x = 5;  // Element to find floor and ceil of
    
    // Get floor and ceil for x
    pair<int, int> result = getFloorAndCeil(arr, arr.size(), x);
    
    cout << "Floor of " << x << ": " << result.first << endl;
    cout << "Ceil of " << x << ": " << result.second << endl;

    return 0;
}
