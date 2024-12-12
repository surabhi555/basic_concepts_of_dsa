#include <iostream>
#include <vector>
using namespace std;
int upperBound(vector<int> &arr, int x, int n) {
    int start = 0;
    int end = arr.size() - 1;
    int ans = n;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] > x) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 3, 3, 5, 7, 9};
    int x = 4;

    // cout << "Lower bound index: " << lowerBound(arr, arr.size(), x) << endl;
    cout << "Upper bound index: " << upperBound(arr, x, arr.size()) << endl;

    return 0;
}