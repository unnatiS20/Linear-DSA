#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
class PairSumFinder {
public:
    /// @brief 
    /// @param arr 
    /// @param s 
    /// @return 
    vector<vector<int>> findPairsWithSum(vector<int>& arr, int s) {
        vector<vector<int>> ans;
        for(int i=0; i<arr.size();i++){
             for(int j=i+1; j<arr.size(); j++){
                if(arr[i]+arr[j]==s){
                     vector<int>temp;
                     temp.push_back(min(arr[i],arr[j]));
                    temp.push_back(max(arr[i],arr[j]));
                    ans.push_back(temp);

                }
            }

        }
        sort(ans.begin() , ans.end());
        return ans;
    }
};
int main() {
    PairSumFinder finder;
    vector<int> arr = {1, 5, 7, -1, 5};
    int sum = 6;
    vector<vector<int>> result = finder.findPairsWithSum(arr, sum);

    cout << "Pairs with sum " << sum << " are:" << endl;
    for (const auto& pair : result) {
        cout << "[" << pair[0] << ", " << pair[1] << "]" << endl;
    }

    return 0;
}