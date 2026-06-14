#include <vector>
#include <numeric>
using namespace std;

class Solution {
private:
    int sumArray(vector<int>& nums) {
        int sum = 0;
        for (int x : nums) sum += x;
        return sum;
    }

public:
    int missingNumber(vector<int>& nums) {
        long long n = nums.size();
        
        long long expectedSum = (n * (n + 1)) / 2;
        
        int actualSum = sumArray(nums);
        
        return expectedSum - actualSum;
    }
};
