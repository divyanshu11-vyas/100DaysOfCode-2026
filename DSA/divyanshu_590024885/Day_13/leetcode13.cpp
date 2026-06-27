#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        for(char& c:paragraph)c=isalpha(c)?tolower(c):' ';
        unordered_set<string> ban(banned.begin(),banned.end());
        unordered_map<string,int> freq;
        istringstream ss(paragraph);
        string w,ans;int mx=0;
        while(ss>>w)if(!ban.count(w)&&++freq[w]>mx)mx=freq[ans=w];
        return ans;
    }
};
