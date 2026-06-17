#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;



int findLargestElement(const std::vector<int>& nums) {
    if (nums.empty()) {
        throw std::invalid_argument("Array cannot be empty");
    }
    
    int max_val = nums[0]; 
    
    for (size_t i = 1; i < nums.size(); ++i) {
        if (nums[i] > max_val) {
            max_val = nums[i];
        }
    }
    
    return max_val;
}

int main() {
vector<int> sample_input = {3, 7, 9, 2, 5};
    
    try {
        int result = findLargestElement(sample_input);
        cout << "Input: [3, 7, 9, 2, 5]" << endl;
        cout << "Output: " << result << endl;
    } 
    catch (const std::invalid_argument& e) {
        std:cerr << "Error: " << e.what() << endl;
    }
    
    return 0;
}