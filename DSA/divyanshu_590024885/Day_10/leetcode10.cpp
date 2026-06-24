#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        auto pos = haystack.find(needle);
        return pos == string::npos ? -1 : pos;
    }
};

int main() {
    Solution solution;
    string haystack = "sadbutsad";
    string needle = "sad";
    int result = solution.strStr(haystack, needle);
    cout << result << endl;
    return 0;
}