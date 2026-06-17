#include <vector>
#include <algorithm> 

class Solution {
public:
    int countOccurrences(std::vector<int>& nums, int target) {
        auto range = std::equal_range(nums.begin(), nums.end(), target);
        
        return std::distance(range.first, range.second);
    }
};
