#include<iostream>
#include <vector>
using namespace std;

int FindDuplicate(vector<int>& arr)
{
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        ans = ans^arr[i];
    }
    for(int i=1; i<arr.size();i++){
        ans = ans^i;
    }
    return ans;
}
int main() {
    // Example vector with one duplicate
    vector<int> arr = {1, 3, 4, 2, 5, 3}; // Duplicate is 3

    int duplicate = FindDuplicate(arr);
    cout << "Duplicate element is: " << duplicate << endl;

    return 0;
}