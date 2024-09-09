#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find all unique triplets in the array that sum up to K
vector<vector<int>> findTriplets(vector<int>& arr, int K) {
    vector<vector<int>> result;
    sort(arr.begin(), arr.end());  // Sort the array to use two-pointer technique

    int n = arr.size();
    for (int i = 0; i < n - 2; ++i) {
        // Avoid duplicates for the first element
        if (i > 0 && arr[i] == arr[i - 1]) continue;
        
        int left = i + 1;
        int right = n - 1;
        while (left < right) {
            int currentSum = arr[i] + arr[left] + arr[right];
            if (currentSum == K) {
                result.push_back({arr[i], arr[left], arr[right]});
                // Skip duplicates for the second element
                while (left < right && arr[left] == arr[left + 1]) ++left;
                // Skip duplicates for the third element
                while (left < right && arr[right] == arr[right - 1]) --right;
                ++left;
                --right;
            } else if (currentSum < K) {
                ++left;
            } else {
                --right;
            }
        }
    }
    
    return result;
}

int main() {
    vector<int> arr = {1, 2, -3, 4, -1, 0, 5, -2};
    int K = 2;

    vector<vector<int>> triplets = findTriplets(arr, K);

    if (triplets.empty()) {
        cout << "-1" << endl;
    } else {
        for (const auto& triplet : triplets) {
            for (int num : triplet) {
                cout << num << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
