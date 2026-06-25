#include<iostream>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
    int ms[128] = {}, mt[128] = {};
    for (int i = 0; i < s.size(); i++) {
        if (ms[s[i]] != mt[t[i]]) return false;
        ms[s[i]] = mt[t[i]] = i + 1;
    }
    return true;
}
};
