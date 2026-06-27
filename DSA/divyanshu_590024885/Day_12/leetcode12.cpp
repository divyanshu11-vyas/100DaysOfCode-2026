#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines = 1, cur = 0;
        for (char c : s) {
            int w = widths[c - 'a'];
            if (cur + w > 100) { lines++; cur = 0; }
            cur += w;
        }
        return {lines, cur};
    }
};
