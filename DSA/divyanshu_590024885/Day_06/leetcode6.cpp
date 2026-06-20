#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0; 
        if (n == 1) return nums[0];
        
        return max(robLinear(nums, 0, n - 2), robLinear(nums, 1, n - 1));
    }
    
private:
    int robLinear(const vector<int>& nums, int start, int end) {
        int prev2 = 0; 
        int prev1 = 0; 
        
        for (int i = start; i <= end; i++) {
            int curr = max(prev1, prev2 + nums[i]);
            prev2 = prev1;
            prev1 = curr;
        }
        
        return prev1;
    }
};

int main() {
    Solution solution;

    vector<int> houses1 = {2, 3, 2};
    cout << solution.rob(houses1) << endl;

    vector<int> houses2 = {1, 2, 3, 1};
    cout << solution.rob(houses2) << endl;

    vector<int> houses3 = {5};
    cout << solution.rob(houses3) << endl;

    return 0;
}