#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool isPossible(vector<int>& stalls, int n, int k, int mid) {
    int cowCount = 1; 
    int lastPosition = stalls[0];

    for (int i = 1; i < n; i++) {
        if (stalls[i] - lastPosition >= mid) { 
            cowCount++;
            lastPosition = stalls[i];

            if (cowCount == k) { 
                return true;
            }
        }
    }

    return false; 
}

int aggressiveCows(vector<int>& stalls, int k) {
    sort(stalls.begin(), stalls.end()); 

    int n = stalls.size();
    int s = 1; 
    int e = stalls[n - 1] - stalls[0]; 
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (isPossible(stalls, n, k, mid)) {
            ans = mid;  
            s = mid + 1; 
        } else {
            e = mid - 1; 
        }
    }

    return ans;
}
int main(){
   vector<int> stalls = {4, 2, 1, 3, 6};

    int k=2;
    int distance=aggressiveCows(stalls,k);
    cout << "the distance bet them is "<<distance;
    return 0;
}
