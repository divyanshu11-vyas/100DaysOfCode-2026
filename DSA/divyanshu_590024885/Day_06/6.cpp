#include<iostream>
#include<vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<int> findUnion(vector<int>& arr1, vector<int>& arr2) {
        set<int> s(arr1.begin(), arr1.end());
        s.insert(arr2.begin(), arr2.end());
        return vector<int>(s.begin(), s.end());
    }
};
