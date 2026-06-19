#include <iostream>
#include <vector>
using namespace std;

bool areArraysEqual(const vector<int>& arr1, const vector<int>& arr2) {
    // Size check is O(1)
    if (arr1.size() != arr2.size()) {
        return false;
    }
    
    // Element-wise check is O(n) — unavoidable, must inspect each element
    for (size_t i = 0; i < arr1.size(); i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {1, 2, 3};
    
    if (areArraysEqual(arr1, arr2)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}